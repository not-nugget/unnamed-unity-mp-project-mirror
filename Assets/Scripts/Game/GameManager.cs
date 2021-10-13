// The game manager will only attempt to step forward physics during an update cycle once the fixed timestep is reached
// This means even though Unity does not auto simulate physics, the game will still run on a fixed timestep
#pragma warning disable UNT0004

using Nugget.Project.Scripts.Networking;
using UnityEngine;
using Zenject;

namespace Nugget.Project.Scripts.Game
{
    public class GameManager : MonoBehaviour
    {
        #region Private Fields
        GameNetworkManager networkManager = null;
        float timestep = 0f;
        #endregion

        #region Injection
        [Inject]
        public void Inject(GameNetworkManager networkManager)
        {
            this.networkManager = networkManager;
        }
        #endregion

        #region Unity Callbacks
        private void Start()
        {
            networkManager.OnServerStateChanged += OnNetworkManagerServerStateChanged;
        }

        private void Update()
        {
            if (Physics.autoSimulation) return;

            timestep += Time.deltaTime;

            //From Unity API docs; This catches up the physics simulation when necessary
            while (timestep >= Time.fixedDeltaTime)
            {
                timestep -= Time.fixedDeltaTime;
                Physics.Simulate(Time.fixedDeltaTime);
            }
        }

        private void OnDestroy()
        {
            networkManager.OnServerStateChanged -= OnNetworkManagerServerStateChanged;
        }
        #endregion

        #region Private Methods
        private void OnNetworkManagerServerStateChanged(bool newState)
        {   //TODO this needs to be tested
            Physics.autoSimulation = !newState && networkManager.IsRunning;
            if (newState)
            {
                //If the state of the network manager was set to true, configure physics to process at the same rate as the tick rate. That way every physics simulation occurs and then the update is sent immediately after
                Time.fixedDeltaTime = 1 / networkManager.ServerTickRate;
            }
        }
        #endregion
    }
}
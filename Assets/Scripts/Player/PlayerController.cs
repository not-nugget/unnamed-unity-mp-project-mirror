using Cinemachine;
using Mirror;
using Nugget.Project.Scripts.Camera;
using Sirenix.OdinInspector;
using System;
using UnityEngine;
using Zenject;

namespace Nugget.Project.Scripts.Player
{
    /// <summary>
    /// Responsible for controlling the player in the world. Stores all necessary information and ensures the local controller instances are in sync with the
    /// instances the server is replicating
    /// </summary>
    public class PlayerController : NetworkBehaviour
    {
        //     V this is stupid...theres no issue letting the player controller find some of its dependencies on start
        //TODO some of these dependencies are filled using a GetComponent call of sorts...either use Zenject or create a DependencyRequester mb that children "subscribe" themselves to and this object queries when it needs its dependencies
        #region Private Fields
        private PlayerVisuals modelTransform;
        private PlayerCameraController cameraController;
        private PlayerInputHandler inputHandler;
        private NetworkInputHandler networkInput;
        private PlayerMotor motor;
        #endregion

        //Currently I removed the dependency, but there will no doubt be other injections in the future so it is smart to keep this bad boy around
        //#region Injection
        //[Inject]
        //public void Inject()
        //{
        //    //this.cameraController = cameraController;
        //}
        //#endregion

        #region Unity Messages
        private void Start()
        {
            modelTransform = GetComponentInChildren<PlayerVisuals>();
            cameraController = GetComponentInChildren<PlayerCameraController>();

            //the motor information will be used to animate the player, etc, so it is still wise to have one on every player, local or otherwise
            if (TryGetComponent(out PlayerMotor motor))
            {
                this.motor = motor;
            }
            else
            {
                this.motor = gameObject.AddComponent<PlayerMotor>();
            }

            modelTransform.Construct(this.motor);
            cameraController.Construct(inputHandler, networkInput);
        }
        #endregion

        #region Mirror overrides
        public override void OnStartClient()
        {
            //Might not need to do this because of the network transform, however the clients should still not directly move their character's transform in a non-predictive context (meaning their movements should be aesthetic, not physical)
            //motor = GetComponent<PlayerMotor>(); //The server should do motor calculations too and correct the client if the client diverges...need to look for a way to send client inputs to the host
            //motor.OnMotorStateChanged += OnMotorStateChanged;
        }

        public override void OnStartLocalPlayer()
        {
            inputHandler = new PlayerInputHandler();

            //after more thought, the network input only needs to be on the object that is predictively moving itself. this is the component that is effectively going to send corrections to itself while moving.
            //the client will move its own motor indiscriminantly, but this has the ability to issue motor rests. the network transform and rigidbody will synchronize the player reliably otherwise
            networkInput = gameObject.AddComponent<NetworkInputHandler>();
        }
        #endregion

        #region Factory Subclass (Necessary for runtime injection)
        public class Factory : PlaceholderFactory<PlayerController> { }
        #endregion
    }
}
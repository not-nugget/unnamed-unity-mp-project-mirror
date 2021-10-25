using Nugget.Scripts.Player;
using UnityEngine;
using Zenject;

namespace Nugget.Scripts.Injection
{
    public class PlayerInstaller : MonoInstaller
    {
        #region Serialized Fields
        [Tooltip("Player prefab which will be created dynamically. This prefab must have attached to it a PlayerController component")]
        [SerializeField] private GameObject playerPrefab = null;
        #endregion

        #region Overrides
        public override void InstallBindings()
        {
            InstallPlayerFactory();
        }
        #endregion

        #region Private Methods
        private void InstallPlayerFactory()
        {
            Container.BindFactory<PlayerController, PlayerController.Factory>().FromComponentInNewPrefab(playerPrefab).AsSingle().CopyIntoAllSubContainers().NonLazy().IfNotBound();
        }
        #endregion
    }
}

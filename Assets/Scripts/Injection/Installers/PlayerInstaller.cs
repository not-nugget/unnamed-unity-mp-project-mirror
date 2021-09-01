using Nugget.Project.Scripts.Player;
using UnityEngine;
using Zenject;

namespace Nugget.Project.Scripts
{
    public class PlayerInstaller : MonoInstaller
    {
        #region Private fields
        [Tooltip("Player prefab which will be created dynamically. This prefab must have attached to it a PlayerController component")]
        [SerializeField] private GameObject playerPrefab = null;
        #endregion

        #region Overrides
        public override void InstallBindings()
        {
            InstallPlayerFactory();
        }
        #endregion

        #region PrivateMethods
        private void InstallPlayerFactory()
        {
            Container.BindFactory<PlayerController, PlayerController.Factory>().FromComponentInNewPrefab(playerPrefab).AsCached().CopyIntoAllSubContainers().NonLazy();
        }
        #endregion
    }
}

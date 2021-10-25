using Nugget.Scripts.Game;
using Nugget.Scripts.Camera;
using Zenject;

namespace Nugget.Scripts.Injection
{
    public class GameInstaller : MonoInstaller
    {
        #region Overrides
        public override void InstallBindings()
        {
            InstallGameNetworkManager();
            InstallGameManager();
            InstallRootCamera();
        }
        #endregion

        #region Private methods
        private void InstallGameNetworkManager()
        {
            Container.Bind<GameNetworkManager>().FromComponentInHierarchy().AsSingle().CopyIntoAllSubContainers().NonLazy().IfNotBound();
        }

        private void InstallGameManager()
        {
            Container.Bind<GameManager>().FromComponentInHierarchy().AsSingle().CopyIntoAllSubContainers().NonLazy().IfNotBound();
        }

        private void InstallRootCamera()
        {
            Container.Bind<RootCamera>().FromComponentInHierarchy().AsSingle().CopyIntoAllSubContainers().NonLazy().IfNotBound();
        }
        #endregion
    }
}
using Nugget.Project.Scripts.Camera;
using Nugget.Project.Scripts.Game;
using Zenject;

namespace Nugget.Project.Scripts.Injection
{
    public class GameInstaller : MonoInstaller
    {
        #region Overrides
        public override void InstallBindings()
        {
            InstallGameManager();
            InstallRootCamera();
        }
        #endregion

        #region Private methods
        private void InstallGameManager()
        {
            Container.Bind<GameManager>().FromComponentInHierarchy().AsSingle().CopyIntoAllSubContainers().NonLazy().IfNotBound();
        }

        private void InstallRootCamera()
        {
            Container.Bind<RootCamera>().FromComponentInHierarchy().AsSingle().CopyIntoAllSubContainers().NonLazy().IfNotBound();
        }

        //private void InstallCameraController()
        //{
        //    Container.Bind<CameraController>().FromNewComponentOnNewGameObject().AsCached().CopyIntoAllSubContainers().NonLazy().IfNotBound();
        //}
        #endregion
    }
}
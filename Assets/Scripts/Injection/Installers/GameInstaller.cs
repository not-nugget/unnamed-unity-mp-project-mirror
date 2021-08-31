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
            InstallCameraController();
        }
        #endregion

        #region Private methods
        private void InstallGameManager()
        {
            Container.Bind<GameManager>().FromComponentInHierarchy().AsSingle().CopyIntoAllSubContainers().NonLazy().IfNotBound();
        }

        private void InstallCameraController()
        {
            Container.Bind<CameraController>().FromNewComponentOnNewGameObject().AsCached().NonLazy().IfNotBound();
        }
        #endregion
    }
}
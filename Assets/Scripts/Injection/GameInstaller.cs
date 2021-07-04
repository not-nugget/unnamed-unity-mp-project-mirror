using Nugget.Project.Scripts.Camera;
using Sirenix.OdinInspector;
using UnityEngine;
using Zenject;

namespace Nugget.Project.Scripts.Injection
{
    public class GameInstaller : MonoInstaller
    {
        [SerializeField, Tooltip("Camera controller to inject to objects requiring it"), Required]
        private CameraController cameraControllerInjectionInstance = null;

        public override void InstallBindings()
        {
            Container.Bind<CameraController>().FromInstance(cameraControllerInjectionInstance);
        }
    }
}
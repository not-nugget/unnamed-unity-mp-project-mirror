using Sirenix.OdinInspector;
using UnityEngine;
using Zenject;

namespace Nugget.Project.Scripts.Camera
{
    //TODO change so this works with the RootCamera object instead
    /// <summary>
    /// Controller class that controls the pitch, yaw and roll (either individually or cumulatively) of a main camera and an arbitrary number of secondary cameras
    /// </summary>
    public class CameraController : MonoBehaviour
    {
        //[Tooltip("Should the primary camera auto-populate with the main camera on awake?")]
        //[SerializeField] private bool useMainCamera = false;

        //[Tooltip("Primary render camera. Typically, but not required to be, the Main Camera (Camera.Main)"), HideIf("useMainCamera")]
        //[SerializeField] private UnityEngine.Camera primaryCamera = null;

        //[Tooltip("An arbitrary number of secondary cameras. Typically these cameras will be responsible for rendering a single layer or detail within the scene")]
        //[SerializeField] private UnityEngine.Camera[] secondaryCameras = null;

        //[Tooltip("Should this controller reparent the controlled camera(s) such that their parent is this camera controller's transform?")]
        //[SerializeField] private bool reparentCamerasToControllerTransform = false;

        #region Serialized Fields
        [Tooltip("The camera to control. Multiple controller instances can exist and can control their own cameras")]
        [SerializeField] private RootCamera controlledCamera = null;

        [Tooltip("The transform to synchronize the cameras based on. If this is null, this camera controller will do nothing until we have one. Can be set in editor or by calling SetCameraTargetTransform(Transform)")]
        [SerializeField] private Transform cameraTarget = null;

        [Tooltip("The total degree arc the player can look in each direction from zero. Can only be set in code using SetRotationDegreeClamp(Vector3)"), ReadOnly]
        [SerializeField] private Vector3 perAxisClamp = Vector3.zero;
        #endregion

        #region Injection Methods
        [Inject]
        public void Inject(RootCamera controlledCamera)
        {
            this.controlledCamera = controlledCamera;
        }
        //[Inject]
        //public void Inject(RootCamera controlledCamera, Transform cameraTarget)
        //{
        //    Inject(controlledCamera);
        //    this.cameraTarget = cameraTarget;
        //}
        #endregion

        //private void Awake()
        //{
        //    if (useMainCamera) primaryCamera = UnityEngine.Camera.main;

        //    if (reparentCamerasToControllerTransform)
        //    {
        //        primaryCamera.transform.parent = transform;
        //        foreach (var camera in secondaryCameras)
        //        {
        //            camera.transform.parent = transform;
        //        }
        //    }
        //}

        private void Update()
        {
            if (cameraTarget == null) return; //Don't do anything when we don't have a camera target

            controlledCamera.transform.SetPositionAndRotation(cameraTarget.position, cameraTarget.rotation);
        }

        public void Pitch(float pitchDelta)
        {
            pitchDelta = -pitchDelta + cameraTarget.rotation.eulerAngles.x; //Save the camera's current pitch (around X)
            
            if (perAxisClamp.x != 0f)
            {
                pitchDelta -= (pitchDelta > 180f) ? 360f : 0f; //Convert the pitch from a 0-360 value to a -180 to 180 value if necessary
                pitchDelta = Mathf.Clamp(pitchDelta, -perAxisClamp.x, perAxisClamp.x);
            }

            cameraTarget.rotation = Quaternion.Euler(pitchDelta, 0, 0);
        }

        public void Yaw(float yawDelta)
        {
            yawDelta = -yawDelta + cameraTarget.rotation.eulerAngles.y; //Save the camera's current yaw (around Y)

            if (perAxisClamp.y != 0f)
            {
                yawDelta -= (yawDelta > 180f) ? 360f : 0f; //Convert the yaw from a 0-360 value to a -180 to 180 value if necessary
                yawDelta = Mathf.Clamp(yawDelta, -perAxisClamp.y, perAxisClamp.y);
            }

            cameraTarget.rotation = Quaternion.Euler(0, yawDelta, 0);
        }

        public void Roll(float rollDelta)
        {
            rollDelta = -rollDelta + cameraTarget.rotation.eulerAngles.z; //Save the camera's current pitch (around Z)

            if (perAxisClamp.z != 0f)
            {
                rollDelta -= (rollDelta > 180f) ? 360f : 0f; //Convert the pitch from a 0-360 value to a -180 to 180 value if necessary
                rollDelta = Mathf.Clamp(rollDelta, -perAxisClamp.z, perAxisClamp.z);
            }

            cameraTarget.rotation = Quaternion.Euler(0, 0, rollDelta);
        }

        public void RotateCamera(Vector3 rotateDelta)
        {
            Pitch(rotateDelta.x);
            Yaw(rotateDelta.y);
            Roll(rotateDelta.z);
        }

        public void SetRotationDegreeClamp(Vector3 perAxisClamp) => this.perAxisClamp = perAxisClamp;
        public void SetCameraTargetTransform(Transform transform) => cameraTarget = transform;
    }
}
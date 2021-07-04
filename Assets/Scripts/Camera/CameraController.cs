using Sirenix.OdinInspector;
using UnityEngine;

namespace Nugget.Project.Scripts.Camera
{
    public class CameraController : MonoBehaviour
    {
        [Tooltip("Should the primary camera auto-populate with the main camera on awake?")]
        [SerializeField] private bool useMainCamera = false;

        [Tooltip("Primary render camera. Typically the Main Camera (Camera.Main). This controller will become the parent of all cameras it is responsible for on Awake"), HideIf("useMainCamera")]
        [SerializeField] private UnityEngine.Camera primaryCamera = null;

        [Tooltip("An arbitrary number of secondary cameras. Typically these cameras will be responsible for rendering a single layer or detail within the scene. This controller will become the parent of all cameras it is responsible for on Awake")]
        [SerializeField] private UnityEngine.Camera[] secondaryCameras = null;

        [Tooltip("The transform to synchronize the cameras based on. If this is null, this camera controller will do nothing until we have one")]
        [SerializeField] private Transform cameraTarget = null;

        [SerializeField, Tooltip("The total degree arc the player can look in both directions from the initial rotation"), ReadOnly]
        private Vector3 perAxisClamp = Vector3.zero;

        private void Awake()
        {
            if (useMainCamera) primaryCamera = UnityEngine.Camera.main;

            //TODO maybe make this an option in case there might be a camera I don't want to have reparented
            if (primaryCamera.transform.parent != transform) primaryCamera.transform.parent = transform;
            foreach (var camera in secondaryCameras)
            {
                if (camera.transform.parent != transform) camera.transform.parent = transform;
            }
        }

        private void Update()
        {
            if (cameraTarget == null) return; //Don't do anything when we don't have a camera target

            transform.SetPositionAndRotation(cameraTarget.position, cameraTarget.rotation);
        }

        public void PitchCamera(float pitchDelta)
        {
            pitchDelta = -pitchDelta + cameraTarget.rotation.eulerAngles.x; //Save the camera's current pitch (around X)
            
            if (perAxisClamp.x != 0f)
            {
                pitchDelta -= (pitchDelta > 180f) ? 360f : 0f; //Convert the pitch from a 0-360 value to a -180 to 180 value if necessary
                pitchDelta = Mathf.Clamp(pitchDelta, -perAxisClamp.y, perAxisClamp.y);
            }

            cameraTarget.rotation = Quaternion.Euler(pitchDelta, 0, 0);
        }

        public void YawCamera(float yawDelta)
        {
            yawDelta = -yawDelta + cameraTarget.rotation.eulerAngles.x; //Save the camera's current pitch (around X)

            if (perAxisClamp.y != 0f)
            {
                yawDelta -= (yawDelta > 180f) ? 360f : 0f; //Convert the pitch from a 0-360 value to a -180 to 180 value if necessary
                yawDelta = Mathf.Clamp(yawDelta, -perAxisClamp.y, perAxisClamp.y);
            }

            cameraTarget.rotation = Quaternion.Euler(0, yawDelta, 0);
        }

        public void RollCamera(float rollDelta)
        {
            rollDelta = -rollDelta + cameraTarget.rotation.eulerAngles.x; //Save the camera's current pitch (around X)

            if (perAxisClamp.z != 0f)
            {
                rollDelta -= (rollDelta > 180f) ? 360f : 0f; //Convert the pitch from a 0-360 value to a -180 to 180 value if necessary
                rollDelta = Mathf.Clamp(rollDelta, -perAxisClamp.y, perAxisClamp.y);
            }

            cameraTarget.rotation = Quaternion.Euler(0, rollDelta, 0);
        }

        public void RotateCamera(Vector3 rotateDelta)
        {
            PitchCamera(rotateDelta.x);
            YawCamera(rotateDelta.y);
            RollCamera(rotateDelta.z);
        }

        public void SetRotationDegreeClamp(Vector3 perAxisClamp) => this.perAxisClamp = perAxisClamp;
        public void SetCameraTargetTransform(Transform transform) => cameraTarget = transform;
    }
}
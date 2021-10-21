using UnityEngine;
using Zenject;

namespace Nugget.Project.Scripts.Camera
{
    //TODO refactor this such that it is functional without a camera target transform, as the camera should be allowed to independently rotate without a target camera position. Additionally, this controller
    //should allow the camera to be moved to specific world coordinates, or to another transform without any trouble, and when a camera target is not specified
    /// <summary>
    /// Controller class that controls the pitch, yaw and roll (either individually or cumulatively) of a main camera and an arbitrary number of secondary cameras
    /// </summary>
    public class CameraController : MonoBehaviour
    {
        #region Public properties
        /// <summary>
        /// RootCamera object this controller is repsonsible for
        /// </summary>
        public RootCamera Camera => controlledCamera;
        #endregion

        #region Serialized Fields
        [Tooltip("The camera to control. Multiple controller instances can exist and can control their own cameras")]
        [SerializeField] private RootCamera controlledCamera = null;

        [Tooltip("The transform to synchronize the cameras based on. If this is null, this camera controller will do nothing until we have one. Can be set in editor or by calling SetCameraTargetTransform(Transform)")]
        [SerializeField] private Transform cameraTarget = null;

        [Tooltip("The total degree arc (from -value to value) the controlled camera's rotation is clamped to")]
        [SerializeField] private Vector3 perAxisClamp = new Vector3(89.5f, 0, 45f);
        #endregion

        #region Private fields
        private float invalidCameraTargetSelfDisableDuration = 30f;
        #endregion

        #region Injection Methods
        [Inject]
        public void Inject(RootCamera controlledCamera)
        {
            this.controlledCamera = controlledCamera;
        }
        #endregion

        #region Unity messages
        private void Update()
        {
            if (cameraTarget == null)
            {
                //Disable this camera controller after 30 seconds without a valid camera target
                if ((invalidCameraTargetSelfDisableDuration -= Time.deltaTime) <= 0f) gameObject.SetActive(false);

                //Don't do anything when we don't have a camera target
                return;
            }

            controlledCamera.transform.position = cameraTarget.position;
        }
        #endregion

        #region Public methods
        public void RotateCamera(Vector3 rotateDelta)
        {
            if (cameraTarget == null)
            {
                Debug.LogWarning("Attempting to rotate a camera when no camera target exists");
                return;
            }

            //cameraTarget.rotation = Quaternion.Euler(Pitch(rotateDelta.x), Yaw(-rotateDelta.y), Roll(rotateDelta.z));
            controlledCamera.transform.rotation = Quaternion.Euler(Pitch(rotateDelta.x), Yaw(-rotateDelta.y), Roll(rotateDelta.z));
        }

        public void SetCameraTargetTransform(Transform transform, bool setActiveIfInactive = true)
        {
            if (transform == null) return;

            cameraTarget = transform;
            invalidCameraTargetSelfDisableDuration = 30f;
            gameObject.SetActive(gameObject.activeSelf || setActiveIfInactive); //This method should not deactivate the object if it is active, and only activate the object if the parameter is set to true
        }

        public void SetRotationDegreeClamp(Vector3 perAxisClamp) => this.perAxisClamp = perAxisClamp;
        #endregion

        #region Private methods
        private float Pitch(float pitchDelta)
        {
            float newPitch = pitchDelta + controlledCamera.transform.rotation.eulerAngles.x;

            if (perAxisClamp.x != 0f)
            {
                newPitch -= (newPitch > 180f) ? 360f : 0f; //Convert the pitch from a 0-360 value to a -180 to 180 value if necessary
                newPitch = Mathf.Clamp(newPitch, -perAxisClamp.x, perAxisClamp.x);
            }

            return newPitch;
        }

        private float Yaw(float yawDelta)
        {
            float newYaw = yawDelta + controlledCamera.transform.rotation.eulerAngles.y;

            if (perAxisClamp.y != 0f)
            {
                newYaw -= (newYaw > 180f) ? 360f : 0f; //Convert the yaw from a 0-360 value to a -180 to 180 value if necessary
                newYaw = Mathf.Clamp(newYaw, -perAxisClamp.y, perAxisClamp.y);
            }

            return newYaw;
        }

        private float Roll(float rollDelta)
        {
            float newRoll = rollDelta + controlledCamera.transform.rotation.eulerAngles.z;

            if (perAxisClamp.z != 0f)
            {
                newRoll -= (newRoll > 180f) ? 360f : 0f; //Convert the pitch from a 0-360 value to a -180 to 180 value if necessary
                newRoll = Mathf.Clamp(newRoll, -perAxisClamp.z, perAxisClamp.z);
            }

            return newRoll;
        }
        #endregion
    }
}
using Cinemachine;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    //TODO i dont think we need the virtual camera unless the player camera controller can alter the current live camera
    [RequireComponent(typeof(CinemachineVirtualCamera)), DisallowMultipleComponent]
    public class PlayerCameraController : MonoBehaviour
    {
        #region Private Fields
        private CinemachineVirtualCamera virtualCamera;
        private PlayerInputHandler inputHandler;
        private NetworkInputHandler networkInput;
        #endregion

        #region Manual Dependency Construction
        public void Construct(PlayerInputHandler inputHandler, NetworkInputHandler networkInput, bool isLocalPlayer = false)
        {
            this.inputHandler = inputHandler;
            this.networkInput = networkInput;
            virtualCamera.enabled = isLocalPlayer;
        }
        #endregion

        #region Unity Messages
        private void Start()
        {
            virtualCamera = GetComponent<CinemachineVirtualCamera>();
        }

        private void Update()
        {
            if (networkInput.ReceiveMouseInput)
            {
                //rotate based on network input (should only be the pitch)
                return;
            }

            //rotate based on local player input
        }
        #endregion

        #region Public Methods
        //TODO methods that actually incrementally rotate the camera

        /// <summary>
        /// Rotate the virtual camera's transform to this angle on the x axis immediately
        /// </summary>
        /// <param name="pitchAngle">Angle to set the x rotation of the transform to. Should be a
        /// valid value between 0 and 360, and clamping should be done elsewhere</param>
        public void SetCameraPitch(float pitchAngle)
        {
            transform.rotation = Quaternion.Euler(pitchAngle, transform.rotation.eulerAngles.y, transform.rotation.eulerAngles.z);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to this angle on the y axis immediately
        /// </summary>
        /// <param name="tiltAngle">Angle to set the y rotation of the transform to. Should be a
        /// valid value between 0 and 360, and clamping should be done elsewhere</param>
        public void SetCameraYaw(float yawAngle)
        {
            transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, yawAngle, transform.rotation.eulerAngles.z);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to this angle on the z axis immediately
        /// </summary>
        /// <param name="rollAngle">Angle to set the z rotation of the transform to. Should be a
        /// valid value between 0 and 360, and clamping should be done elsewhere</param>
        public void SetCameraRoll(float rollAngle)
        {
            transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, transform.rotation.eulerAngles.y, rollAngle);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to match the provided euler angles immediately
        /// </summary>
        /// <param name="eulers">Eulers to set the transform to. Each component should be a
        /// valid value between 0 and 360, and clamping should be done elsewhere</param>
        public void SetCameraRotation(Vector3 eulers)
        {
            transform.rotation = Quaternion.Euler(eulers);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to match the provided euler angles immediately
        /// </summary>
        /// <param name="eulers">Eulers to set the transform to. Each component should be a
        /// valid value between 0 and 360, and clamping should be done elsewhere</param>
        public void SetCameraRotation(float x, float y, float z)
        {
            transform.rotation = Quaternion.Euler(x, y, z);
        }
        #endregion
    }
}

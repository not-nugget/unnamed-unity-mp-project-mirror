using Cinemachine;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    //TODO create a base class "CameraController" that has ALL the setting/rotating implemented virtually(or abstract...dont know yet). this should extend that class but also allows for different
    //types of camera controllers (player, free-cam, menu, etc)
    [RequireComponent(typeof(CinemachineVirtualCamera)), DisallowMultipleComponent]
    public class PlayerCameraController : MonoBehaviour
    {
        #region Public Properties
        /// <summary>
        /// Is the <see cref="CinemachineVirtualCamera"/> enabled
        /// </summary>
        public bool CameraEnabled { get => virtualCamera.enabled; }

        /// <summary>
        /// Get or set the ArcClamp value
        /// </summary>
        public Vector3 ArcClamp
        {
            get => arcClamp; 
            set
            {
                arcClamp.x = Mathf.Min(value.x < 0 ? -value.x : value.x, 360);
                arcClamp.y = Mathf.Min(value.y < 0 ? -value.y : value.y, 360);
                arcClamp.z = Mathf.Min(value.z < 0 ? -value.z : value.z, 360);
            }
        }
        #endregion

        #region Private Fields
        private CinemachineVirtualCamera virtualCamera;
        private Vector3 arcClamp = Vector3.zero;
        #endregion

        #region Manual Dependency Construction
        public void Construct(bool isLocalPlayer = false)
        {
            //this.networkInput = networkInput;
            virtualCamera.enabled = isLocalPlayer;
        }
        #endregion

        #region Unity Messages
        private void Awake()
        {
            virtualCamera = GetComponent<CinemachineVirtualCamera>();
        }

        private void OnDrawGizmos()
        {
            Gizmos.color = CameraEnabled ? Color.green : Color.yellow;
            Gizmos.DrawLine(transform.position, transform.position + transform.forward);
        }
        #endregion

        #region Public Methods
        //TODO Clamp does not work
        /// <summary>
        /// Set the camera's symmetrical range of motion (in degrees, from 0 both ways) per axis.
        /// Values should be from 0 - 360 but can be from -360 - 360 (negative numbers will be inverted).
        /// Numbers exceeding this range will be clamped to 360. Values of 0 mean no clamp is specified
        /// and no clamping will be done on these axes
        /// </summary>
        /// <param name="arcClampInDegrees">Per axis range of motion</param>
        public void SetCameraAxisArcClamp(Vector3 arcClampInDegrees) => ArcClamp = arcClampInDegrees;

        /// <summary>
        /// Rotate the virtual camera's transform by the provided degree delta in local space
        /// </summary>
        /// <param name="pitchDelta">Delta (in degrees) to rotate the camera by on the x axis</param>
        public void RotateCameraPitch(float pitchDelta)
        {
            transform.Rotate(transform.right, pitchDelta, Space.World);

            ClampRotation(transform);
        }

        /// <summary>
        /// Rotate the virtual camera's transform by the provided degree delta in local space
        /// </summary>
        /// <param name="yawDelta">Delta (in degrees) to rotate the camera by on the y axis</param>
        public void RotateCameraYaw(float yawDelta)
        {
            transform.Rotate(transform.up, yawDelta, Space.World);

            ClampRotation(transform);
        }

        /// <summary>
        /// Rotate the virtual camera's transform by the provided degree delta in local space
        /// </summary>
        /// <param name="rollDelta">Delta (in degrees) to rotate the camera by on the z axis</param>
        public void RotateCameraRoll(float rollDelta)
        {
            transform.Rotate(transform.forward, rollDelta, Space.World);

            ClampRotation(transform);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to match the provided euler angles immediately
        /// </summary>
        /// <param name="eulerDelta">Delta (in degrees) to rotate the camera by</param>
        public void RotateCamera(Vector3 eulerDelta)
        {
            transform.Rotate(eulerDelta, Space.World);

            ClampRotation(transform);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to match the provided euler angles immediately
        /// </summary>
        /// <param name="xDelta">X delta (in degrees) to rotate the camera by</param>
        /// <param name="yDelta">Y delta (in degrees) to rotate the camera by</param>
        /// <param name="zDelta">Z delta (in degrees) to rotate the camera by</param>
        public void RotateCamera(float xDelta, float yDelta, float zDelta)
        {
            transform.Rotate(xDelta, yDelta, zDelta, Space.World);

            ClampRotation(transform);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to this angle on the x axis immediately
        /// </summary>
        /// <param name="pitchAngle">Angle to set the x rotation of the transform to Clamping will be applied</param>
        public void SetCameraPitch(float pitchAngle)
        {
            if (arcClamp.x > 0 && pitchAngle != 0) pitchAngle = Mathf.Clamp(pitchAngle, -arcClamp.x, arcClamp.x);

            transform.localRotation = Quaternion.Euler(pitchAngle, transform.localRotation.eulerAngles.y, transform.localRotation.eulerAngles.z);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to this angle on the y axis immediately
        /// </summary>
        /// <param name="tiltAngle">Angle to set the y rotation of the transform to. Clamping will be applied</param>
        public void SetCameraYaw(float yawAngle)
        {
            if (arcClamp.y > 0 && yawAngle != 0) yawAngle = Mathf.Clamp(yawAngle, -arcClamp.y, arcClamp.y);

            transform.localRotation = Quaternion.Euler(transform.localRotation.eulerAngles.x, yawAngle, transform.localRotation.eulerAngles.z);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to this angle on the z axis immediately
        /// </summary>
        /// <param name="rollAngle">Angle to set the z rotation of the transform to. Clamping will be applied</param>
        public void SetCameraRoll(float rollAngle)
        {
            if (arcClamp.z > 0 && rollAngle != 0) rollAngle = Mathf.Clamp(rollAngle, -arcClamp.z, arcClamp.z);

            transform.localRotation = Quaternion.Euler(transform.localRotation.eulerAngles.x, transform.localRotation.eulerAngles.y, rollAngle);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to match the provided euler angles immediately
        /// </summary>
        /// <param name="eulers">Eulers to set the transform to. Clamping will be applied to the provided values</param>
        public void SetCameraRotation(Vector3 eulers)
        {
            eulers = ClampRotation(eulers);

            transform.localRotation = Quaternion.Euler(eulers);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to match the provided euler angles immediately
        /// </summary>
        /// <param name="eulers">Eulers to set the transform to. Clamping will be applied to the provided values</param>
        public void SetCameraRotation(float x, float y, float z)
        {
            ClampRotation(ref x, ref y, ref z);

            transform.localRotation = Quaternion.Euler(x, y, z);
        }
        #endregion

        #region Private Methods
        //TEST clamp functions don't normalize the rotation...make sure this doesnt affect the clamping functionality

        private void ClampRotation(Transform transform) => transform.rotation = ClampRotation(transform.rotation);
        private Quaternion ClampRotation(Quaternion rotation) => Quaternion.Euler(ClampRotation(rotation.eulerAngles));
        private Vector3 ClampRotation(Vector3 euler)
        {
            ClampRotation(ref euler.x, ref euler.y, ref euler.z);
            return euler;

            //Above should function the same as this
            //if (arcClamp.x > 0 && euler.x != 0) euler.x = Mathf.Clamp(euler.x, -arcClamp.x, arcClamp.x);
            //if (arcClamp.y > 0 && euler.y != 0) euler.y = Mathf.Clamp(euler.y, -arcClamp.y, arcClamp.y);
            //if (arcClamp.z > 0 && euler.z != 0) euler.z = Mathf.Clamp(euler.z, -arcClamp.z, arcClamp.z);

            //return euler;
        }

        private void ClampRotation(ref float x, ref float y, ref float z)
        {
            //These if checks might be redundant...is there any negligible performance loss for just executing the clamps if no clamp was set?
            /*if (arcClamp.x > 0 && x != 0) */
            x = Mathf.Clamp(x, -arcClamp.x, arcClamp.x);
            /*if (arcClamp.y > 0 && y != 0) */
            y = Mathf.Clamp(y, -arcClamp.y, arcClamp.y);
            /*if (arcClamp.z > 0 && z != 0) */
            z = Mathf.Clamp(z, -arcClamp.z, arcClamp.z);
        }
        #endregion
    }
}

using Cinemachine;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    [RequireComponent(typeof(CinemachineVirtualCamera)), DisallowMultipleComponent]
    public class PlayerCameraController : MonoBehaviour
    {
        /// <summary>
        /// Rotate the virtual camera's transform to this angle on the x axis immediately
        /// </summary>
        /// <param name="pitchAngle">Angle to set the x rotation of the transform to. Should be a
        /// valid value between 0 and 360, and clamping should be done elsewhere</param>
        public void PitchCamera(float pitchAngle)
        {
            transform.rotation = Quaternion.Euler(pitchAngle, transform.rotation.eulerAngles.y, transform.rotation.eulerAngles.z);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to this angle on the y axis immediately
        /// </summary>
        /// <param name="tiltAngle">Angle to set the y rotation of the transform to. Should be a
        /// valid value between 0 and 360, and clamping should be done elsewhere</param>
        public void YawCamera(float yawAngle)
        {
            transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, yawAngle, transform.rotation.eulerAngles.z);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to this angle on the z axis immediately
        /// </summary>
        /// <param name="rollAngle">Angle to set the z rotation of the transform to. Should be a
        /// valid value between 0 and 360, and clamping should be done elsewhere</param>
        public void RollCamera(float rollAngle)
        {
            transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, transform.rotation.eulerAngles.y, rollAngle);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to match the provided euler angles immediately
        /// </summary>
        /// <param name="eulers">Eulers to set the transform to. Each component should be a
        /// valid value between 0 and 360, and clamping should be done elsewhere</param>
        public void RotateCamera(Vector3 eulers)
        {
            transform.rotation = Quaternion.Euler(eulers);
        }

        /// <summary>
        /// Rotate the virtual camera's transform to match the provided euler angles immediately
        /// </summary>
        /// <param name="eulers">Eulers to set the transform to. Each component should be a
        /// valid value between 0 and 360, and clamping should be done elsewhere</param>
        public void RotateCamera(float x, float y, float z)
        {
            transform.rotation = Quaternion.Euler(x, y, z);
        }
    }
}

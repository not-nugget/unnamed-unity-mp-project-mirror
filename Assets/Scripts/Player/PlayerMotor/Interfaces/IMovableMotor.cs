using UnityEngine;

namespace Nugget.Scripts.Player.Interfaces
{
    /// <summary>
    /// Instance of <see cref="IMotor"/> which can be moved in 3D space
    /// </summary>
    public interface IMovableMotor : IMotor
    {
        /// <summary>
        /// Instruct the motor to move based on the provided delta. Should never be called outside of the fixed timestep
        /// </summary>
        /// <param name="moveDelta">Raw delta the body position should be moved by</param>
        void MoveMotor(Vector3 moveDelta);
        /// <summary>
        /// Instruct the motor to rotate based on the provided delta. Should never be called outside of the fixed timestep
        /// </summary>
        /// <param name="eulerDelta">Raw delta the body rotation should be rotated by</param>
        void RotateMotor(Quaternion eulerDelta);

        /// <summary>
        /// Instruct the motor to update its internal state. Should be called every fixed timestep
        /// </summary>
        public void UpdateState();
    }
}

using UnityEngine;

namespace Nugget.Scripts.Player.Interfaces
{
    /// <summary>
    /// Instance of <see cref="IMotor"/> which can reset itself in 3D space based on provided parameters
    /// </summary>
    public interface IResettableMotor : IMotor
    {
        /// <summary>
        /// Reset the motor's position, leaving the rest of the motor's state intact
        /// </summary>
        /// <param name="resetPosition">Motor's target reset position</param>
        void ResetMotor(Vector3 resetPosition);
        /// <summary>
        /// Reset the motor's rotation, leaving the rest of the motor's state intact
        /// </summary>
        /// <param name="resetRotation">Motor's target reset rotation</param>
        void ResetMotor(Quaternion resetRotation);
        /// <summary>
        /// Reset the motor's position and rotation, leaving the rest of the motor's state intact
        /// </summary>
        /// <param name="resetPosition">Motor's target reset position</param>
        /// <param name="resetRotation">Motor's target reset rotation</param>
        void ResetMotor(Vector3 resetPosition, Quaternion resetRotation);
        /// <summary>
        /// Reset the motor's velocity and angular velocity, leaving the rest of the motor's state intact
        /// </summary>
        /// <param name="velocity">Motor's target reset velocity</param>
        /// <param name="angularVelocity">Motor's target reset angular velocity</param>
        void ResetMotor(Vector3 velocity, Vector3 angularVelocity);
        /// <summary>
        /// Reset the motor's entire state
        /// </summary>
        /// <param name="resetState">Motor's target reset state</param>
        void ResetMotor(IMotorState resetState);
    }
}

using Nugget.Project.Scripts.Player.Interfaces;
using Nugget.Project.Scripts.Player.Motor.Interfaces;
using UnityEngine;

namespace Nugget.Project.Scripts
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
        /// Reset the motor's entire state
        /// </summary>
        /// <param name="resetState">Motor's target reset state</param>
        void ResetMotor(IMotorState resetState);
    }
}

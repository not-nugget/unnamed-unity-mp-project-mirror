using Nugget.Project.Scripts.Player.Interfaces;
using UnityEngine;

namespace Nugget.Project.Scripts.Player.Motor.Interfaces
{
    /// <summary>
    /// Motor which contains a state used to define itself
    /// </summary>
    public interface IMotor
    {
        /// <summary>
        /// Current state of the motor
        /// </summary>
        IMotorState MotorState { get; }
    }
}

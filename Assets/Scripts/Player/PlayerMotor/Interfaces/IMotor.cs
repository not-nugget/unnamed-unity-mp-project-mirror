namespace Nugget.Scripts.Player.Interfaces
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

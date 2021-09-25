using Nugget.Project.Scripts.Player.Interfaces;
using UnityEngine;

namespace Nugget.Project.Scripts.Player.Motor.Interfaces
{
    /// <summary>
    /// Structure defining the state of a motor
    /// </summary>
    public struct MotorState : IMotorState
    {
        public Vector3 Position { get; private set; }
        public Quaternion Rotation { get; private set; }
        public Vector3 Velocity { get; private set; }
        public Vector3 AngularVelocity { get; private set; }

        public MotorState(Vector3 position, Quaternion rotation, Vector3 velocity, Vector3 angularVelocity)
        {
            Position = position;
            Rotation = rotation;
            Velocity = velocity;
            AngularVelocity = angularVelocity;
        }
        public MotorState(MotorState toCopy)
        {
            Position = toCopy.Position;
            Rotation = toCopy.Rotation;
            Velocity = toCopy.Velocity;
            AngularVelocity = toCopy.AngularVelocity;
        }

        //TODO this method should not be trusted as publically modifiable
        public void UpdateState(Vector3 position, Quaternion rotation, Vector3 velocity, Vector3 angularVelocity)
        {
            Position = position;
            Rotation = rotation;
            Velocity = velocity;
            AngularVelocity = angularVelocity;
        }
    }
}
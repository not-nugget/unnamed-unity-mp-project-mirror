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

        //NOTE this method (probably) should not be trusted as publically modifiable, however there would be no other way to have this state update without it
        public void UpdateState(Vector3 position, Quaternion rotation, Vector3 velocity, Vector3 angularVelocity)
        {
            Position = position;
            Rotation = rotation;
            Velocity = velocity;
            AngularVelocity = angularVelocity;
        }

        //TODO because we don't have default interface implementations, this piece of code will likely be copy-pasted
        //NOTE this is likely going to return a lot of false-negatives because the two simulations will never be consistent and there will always be minor divergences...perhaps research this
        //topic to see when float equality returns true and if it is exact then maybe specify a form of leniancy to help with simulation inconsistency
        public bool Equals(IMotorState other)
        {
            if (other is null) return false;

            return (Position == other.Position) && (Rotation == other.Rotation) && (Velocity == other.Velocity) && (AngularVelocity == other.AngularVelocity);
        }
    }
}
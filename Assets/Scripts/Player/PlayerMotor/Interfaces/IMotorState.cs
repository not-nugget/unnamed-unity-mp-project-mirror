using Mirror;
using System;
using UnityEngine;

namespace Nugget.Scripts.Player.Interfaces
{
    public interface IMotorState : IEquatable<IMotorState>
    { 
        Vector3 Position { get; }
        Quaternion Rotation { get; }
        Vector3 Velocity { get; }
        Vector3 AngularVelocity { get; }

        void UpdateState(Vector3 position, Quaternion rotation, Vector3 velocity, Vector3 angularVelocity);
    }

    /// <summary>
    /// Custom serializer and deserializer methods for <see cref="IMotorState"/>
    /// </summary>
    public static class IMotorStateReaderWriter
    {
        /// <summary>
        /// Dummy instance of <see cref="IMotorState"/> that allows this interface type to be serialized and deserialized over Mirror
        /// </summary>
        public struct DummyIMotorState : IMotorState
        {
            public Vector3 Position { get; private set; }
            public Quaternion Rotation { get; private set; }
            public Vector3 Velocity { get; private set; }
            public Vector3 AngularVelocity { get; private set; }

            public void UpdateState(Vector3 position, Quaternion rotation, Vector3 velocity, Vector3 angularVelocity)
            {
                Position = Position;
                Rotation = Rotation;
                Velocity = Velocity;
                AngularVelocity = AngularVelocity;
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

        public static void WriteIMotorState(this NetworkWriter writer, IMotorState motorState)
        {
            writer.WriteVector3(motorState.Position);
            writer.WriteQuaternion(motorState.Rotation);
            writer.WriteVector3(motorState.Velocity);
            writer.WriteVector3(motorState.AngularVelocity);
        }

        public static IMotorState ReadIMotorState(this NetworkReader reader)
        {
            DummyIMotorState motorState = new DummyIMotorState();
            motorState.UpdateState(reader.ReadVector3(), reader.ReadQuaternion(), reader.ReadVector3(), reader.ReadVector3());
            return motorState;
        }
    }
}

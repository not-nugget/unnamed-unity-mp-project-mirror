using Mirror;
using UnityEngine;

namespace Nugget.Project.Scripts.Player.Interfaces
{
    public interface IMotorState
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

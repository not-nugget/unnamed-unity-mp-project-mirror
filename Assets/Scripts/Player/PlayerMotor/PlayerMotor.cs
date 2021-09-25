using Nugget.Project.Scripts.Player.Interfaces;
using Nugget.Project.Scripts.Player.Motor.Interfaces;
using UnityEngine;

namespace Nugget.Project.Scripts.Player.Motor
{
    //TODO will likely develop a complete overhaul that maintains a state machine depending on parameters

    /// <summary>
    /// Responsible for moving the character in 3D space based on provided deltas. Can be forced to roll back to specific positions, rotations,
    /// and velocities either immediately or over time
    /// </summary>
    public class PlayerMotor : IPlayerMotor
    {
        public IMotorState MotorState { get; private set; }

        private readonly Rigidbody body;

        public PlayerMotor(Rigidbody body)
        {
            this.body = body;
            UpdateState();
        }

        //TODO/URGENT obviously re-implement the motor

        public void MoveMotor(Vector3 moveDelta)
        {
            UpdateState();
        }

        public void RotateMotor(Vector3 eulerDelta)
        {
            UpdateState();
        }

        public void ResetMotor(Vector3 resetPosition)
        {
            UpdateState();
        }

        public void ResetMotor(Quaternion resetRotation)
        {
            UpdateState();
        }

        public void ResetMotor(Vector3 resetPosition, Quaternion resetRotation)
        {
            UpdateState();
        }

        public void ResetMotor(IMotorState resetState)
        {
            UpdateState();
        }

        public void AddForce(Vector3 force, ForceMode forceMode = ForceMode.Force, bool relative = true)
        {
            UpdateState();
        }

        public void AddTorque(Vector3 torque, ForceMode forceMode = ForceMode.Force, bool relative = true)
        {
            UpdateState();
        }

        public void AddForceAtPosition(Vector3 position, Vector3 force, ForceMode forceMode = ForceMode.Force)
        {
            UpdateState();
        }

        public void AddExplosionForce(float explosionForce, Vector3 explosionPosition, float explosionRadius, float upwardsModifier = 1, ForceMode forceMode = ForceMode.Force)
        {
            UpdateState();
        }

        public void UpdateState()
        {
            MotorState.UpdateState(body.position, body.rotation, body.velocity, body.angularVelocity);
        }
    }
}
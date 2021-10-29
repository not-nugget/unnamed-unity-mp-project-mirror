using Nugget.Scripts.Player.Interfaces;
using UnityEngine;

namespace Nugget.Scripts.Player
{
    //NOTE The following is NOT the motor's responsibility. The motor should ONLY move the player character in 3D space based on the provided parameters
    //TODO will likely develop a complete overhaul that maintains a state machine depending on parameters

    /// <summary>
    /// Responsible for moving the character in 3D space based on provided deltas. 
    /// Can be forced to roll back to specific positions, rotations, and velocities immediately
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

        public void MoveMotor(Vector3 moveDelta)
        {
            body.MovePosition(moveDelta);
            UpdateState();
        }

        public void RotateMotor(Quaternion rotDelta)
        {
            body.MoveRotation(rotDelta);
            UpdateState();
        }

        public void ResetMotor(Vector3 resetPosition)
        {
            body.position = resetPosition;
            UpdateState();
        }

        public void ResetMotor(Quaternion resetRotation)
        {
            body.rotation = resetRotation;
            UpdateState();
        }

        public void ResetMotor(Vector3 velocity, Vector3 angularVelocity)
        {
            body.velocity = velocity;
            body.angularVelocity = angularVelocity;
            UpdateState();
        }

        public void ResetMotor(Vector3 resetPosition, Quaternion resetRotation)
        {
            ResetMotor(resetPosition);
            ResetMotor(resetRotation);
            UpdateState();
        }

        public void ResetMotor(IMotorState resetState)
        {
            ResetMotor(resetState.Position);
            ResetMotor(resetState.Rotation);
            ResetMotor(resetState.Velocity, resetState.AngularVelocity);
            UpdateState();
        }

        public void AddForce(Vector3 force, ForceMode forceMode = ForceMode.Force, bool relative = false)
        {
            if (relative)
            {
                body.AddRelativeForce(force, forceMode);
                UpdateState();
                return;
            }

            body.AddForce(force, forceMode);
            UpdateState();
        }

        public void AddTorque(Vector3 torque, ForceMode forceMode = ForceMode.Force, bool relative = false)
        {
            if (relative)
            {
                body.AddRelativeTorque(torque, forceMode);
                UpdateState();
                return;
            }

            body.AddRelativeTorque(torque, forceMode);
            UpdateState();
        }

        public void AddForceAtPosition(Vector3 force, Vector3 position, ForceMode forceMode = ForceMode.Force)
        {
            body.AddForceAtPosition(force, position, forceMode);
            UpdateState();
        }

        public void AddExplosionForce(float explosionForce, Vector3 explosionPosition, float explosionRadius, float upwardsModifier = 1, ForceMode forceMode = ForceMode.Force)
        {
            body.AddExplosionForce(explosionForce, explosionPosition, explosionRadius, upwardsModifier, forceMode);
            UpdateState();
        }

        //Do I want this to be public?
        public void UpdateState()
        {
            MotorState.UpdateState(body.position, body.rotation, body.velocity, body.angularVelocity);
        }
    }
}
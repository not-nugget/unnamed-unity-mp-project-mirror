using System;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    /// <summary>
    /// Responsible for moving the character in 3D space based on provided inputs. Can be forced to roll back to specific positions, rotations,
    /// and velocities either immediately or over time
    /// </summary>
    public class PlayerMotor
    {
        public struct MotorState
        {
            public Vector3 Position { get; set; }
            public Vector3 Velocity { get; set; }
        }

        public event Action<MotorState> OnMotorStateChanged;

        //[SerializeField, Tooltip("The total amount of time it will take for the player's speed to reach the desired value in seconds")]
        //private float speedRampTime = .8f;

        private readonly Transform transform;
        private readonly Rigidbody body;
        private MotorState state;

        public PlayerMotor(Rigidbody body)
        {
            this.body = body;
            transform = body.transform;
        }

        public void OnUpdate()
        {
            if (body.IsSleeping()) return; //no need to update the motor's state if the motor is asleep

            state.Position = body.position;
            state.Velocity = body.velocity;

            OnMotorStateChanged?.Invoke(state);
        }

        /// <summary>
        /// Move the 
        /// </summary>
        /// <param name="moveDelta"></param>
        public void MoveMotor(Vector3 moveDelta)
        {
            //Vector3 finalMoveDelta = Vector3.Lerp(body.velocity, moveDelta, speedRampTime * Time.deltaTime);

            //TODO remove magic numbers and also look for different/more preferable ways to do this (maybe with moveposition)
            //body.AddRelativeForce(moveDelta * 3f, ForceMode.VelocityChange);

            if (moveDelta.sqrMagnitude != 0f) //Need to investigate a more elaborate solution that isnt as jolting as this one, and that uses a state machine of sorts
            {
                body.MovePosition(body.position + transform.TransformDirection(3f * Time.fixedDeltaTime * moveDelta));
            }
        }

        public void ResetMotor(Vector3 resetPosition, Quaternion resetOrientation)
        {
            body.transform.SetPositionAndRotation(resetPosition, resetOrientation);
        }
    }
}
using System;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    /// <summary>
    /// Responsible for moving the character in 3D space based on provided inputs. Can be forced to roll back to specific positions, rotations,
    /// and velocities either immediately or over time
    /// </summary>
    [RequireComponent(typeof(Rigidbody))]
    public class PlayerMotor : MonoBehaviour
    {
        public struct MotorState
        {
            public Vector3 Position { get; set; }
            public Vector3 Velocity { get; set; }
        }

        public event Action<MotorState> OnMotorStateChanged;

        [SerializeField, Tooltip("Maximum velocity this body can achieve on the XZ plane")]
        private float maxHorizontalVelocity = 12f;

        //[SerializeField, Tooltip("The total amount of time it will take for the player's speed to reach the desired value in seconds")]
        //private float speedRampTime = .8f;

        private Rigidbody body;
        private MotorState state;

        private void Awake()
        {
            body = GetComponent<Rigidbody>();
        }

        private void Update()
        {
            if (body.IsSleeping()) return; //no need to update the motor's state if the motor is asleep

            state.Position = body.position;
            state.Velocity = body.velocity;

            OnMotorStateChanged?.Invoke(state);
        }

        public void MoveMotor(Vector3 moveDelta)
        {
            //Vector3 finalMoveDelta = Vector3.Lerp(body.velocity, moveDelta, speedRampTime * Time.deltaTime);

            //TODO remove magic numbers and also look for different/more preferable ways to do this (maybe with moveposition)
            //body.AddRelativeForce(moveDelta * 3f, ForceMode.VelocityChange);

            if (moveDelta.sqrMagnitude > 0f)
            {
                body.MovePosition(body.position + transform.TransformDirection(3f * Time.fixedDeltaTime * moveDelta));
                ClampXZVelocity();
            }
        }

        private void ClampXZVelocity()
        {
            Vector3 velocity = body.velocity;
            float y = velocity.y;

            velocity.y = 0f;
            velocity = Vector3.ClampMagnitude(velocity, maxHorizontalVelocity);
            velocity.y = y;

            body.velocity = velocity;
        }
    }
}
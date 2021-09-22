using System;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    //TODO will likely develop a complete overhaul that maintains a state machine depending on parameters

    /// <summary>
    /// Responsible for moving the character in 3D space based on provided inputs. Can be forced to roll back to specific positions, rotations,
    /// and velocities either immediately or over time
    /// </summary>
    public class PlayerMotor : MonoBehaviour
    {
        /// <summary>
        /// Structure defining the state of the motor
        /// </summary>
        public struct MotorData
        {
            public Vector3 Position { get; set; }
            public Quaternion Rotation { get; set; }
            public Vector3 Velocity { get; set; }
        }

        private Rigidbody body;
        private MotorData data;

        private void Start()
        {
            body = GetComponent<Rigidbody>();
        }

        private void Update()
        {
            if (body.IsSleeping()) return; //no need to update the motor's state if the motor is asleep

            data.Position = body.position;
            data.Velocity = body.velocity;
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

        public void ResetMotor(Vector3 resetPosition, Quaternion resetOrientation, Vector3 resetVelocity)
        {
            body.transform.SetPositionAndRotation(resetPosition, resetOrientation);
            body.velocity = resetVelocity;

            data.Position = body.position;
            data.Rotation = body.rotation;
            data.Velocity = body.velocity;
        }
    }
}
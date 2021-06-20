using System;
using System.Collections;
using System.Collections.Generic;
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
            public Quaternion Rotation { get; set; }
            public Vector3 Velocity { get; set; }
            public Vector3 AngularVelocity { get; set; }
        }

        public ref MotorState MotorStateReference { get => ref motorState; }
        private MotorState motorState;

        private Rigidbody body;

        private void Awake()
        {
            body = GetComponent<Rigidbody>();
        }

        private void Update()
        {
            motorState.Position = body.position;
            motorState.Rotation = body.rotation;
            motorState.Velocity = body.velocity;
            motorState.AngularVelocity = body.angularVelocity;
        }

        public void ProccessMoveInputData(InputData inputData)
        {
            Vector3 moveDelta = inputData.MoveDelta;


        }
    }
}
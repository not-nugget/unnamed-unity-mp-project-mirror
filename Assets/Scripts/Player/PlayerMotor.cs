using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
		public Vector3 Rotation { get; set; }
		public Vector3 Velocity { get; set; }
	}

	private MotorState motorState;

	public void GetMotorStateReference(ref MotorState motorState) => motorState = ref this.motorState;

	public void ProccessInputData(InputData inputData)
	{
		Debug.LogFormat("Input data recieved: move:{0} // look:{1}", inputData.MoveDelta, inputData.LookDelta);
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using static InputControls;

/// <summary>
/// Responsible for handling player inputs that the new Input System captures and sending the information to the controller
/// </summary>
public class PlayerInputHandler : IDefaultControlsActions
{
	private InputData inputData = new InputData();

	/// <summary>
	/// Get a reference to this object's <see cref="InputData"/> instace. Only needs to be called once
	/// </summary>
	/// <param name="data">Reference to this handler's instace of <see cref="InputData"/></param>
	public void GetInputData(ref InputData data) => data = ref inputData;

	// Implementation

	public void OnLook(InputAction.CallbackContext context)
	{
		inputData.LookDelta = context.ReadValue<Vector2>();
	}

	public void OnMove(InputAction.CallbackContext context)
	{
		inputData.MoveDelta = context.ReadValue<Vector2>();
	}
}

using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Responsible for controlling the player in the world. Stores all necessary information and ensures the local controller instances are in sync with the
/// instances the server is replicating
/// </summary>
public class PlayerController : NetworkBehaviour
{
	/// <summary>
	/// Instace of this player's 3D motor
	/// </summary>
	public PlayerMotor Motor { get => motor; }
	/// <summary>
	/// Instace of this player's controls input handler, should one exist
	/// </summary>
	public PlayerInputHandler InputHandler { get; private set; }
	/// <summary>
	/// Instace of this player's animation controller for first person animations, should one exist
	/// </summary>
	public PlayerAnimationController FirstPersonAnimationController { get => firstPersonAnimationController; }
	/// <summary>
	/// Instace of this player's animation controller for third person animations
	/// </summary>
	public PlayerAnimationController ThirdPersonAnimationController { get => thirdPersonAnimationController; }

	[Tooltip("Instace of this player's 3D motor")]
	[SerializeField] private PlayerMotor motor = null;
	[Tooltip("Instace of this player's animation controller for first person animations")]
	[SerializeField] private PlayerAnimationController firstPersonAnimationController = null;
	[Tooltip("Instace of this player's animation controller for third person animations")]
	[SerializeField] private PlayerAnimationController thirdPersonAnimationController = null;

	private InputData inputData;

	private void Awake()
	{
		if (motor == null) TryGetComponent(out motor); //Only attempt to get the motor if one does not exist

		//TODO this should only be created when Mirror sends an RPC to the client
		InputHandler = new PlayerInputHandler();
		InputHandler.GetInputData(ref inputData);
	}

	private void Update()
	{
		Motor.ProccessInputData(inputData);
	}
}

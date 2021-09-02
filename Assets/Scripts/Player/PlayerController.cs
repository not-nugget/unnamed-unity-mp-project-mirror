using Mirror;
using Nugget.Project.Scripts.Camera;
using Sirenix.OdinInspector;
using System;
using UnityEngine;
using Zenject;

namespace Nugget.Project.Scripts.Player
{
    /// <summary>
    /// Responsible for controlling the player in the world. Stores all necessary information and ensures the local controller instances are in sync with the
    /// instances the server is replicating
    /// </summary>
    public class PlayerController : NetworkBehaviour
    {
        #region Serialized Fields
        [Tooltip("Child model transform"), Required]
        [SerializeField] private Transform modelTransform = null;

        [Tooltip("The camera target transform"), HorizontalGroup("camera_group", 0, 5, 5), Required]
        [SerializeField] private Transform cameraTarget = null;

        [SerializeField, HorizontalGroup("camera_group", 0, 5, 5), Tooltip("Camera turn sensitivity")]
        private float lookSensitivity = .2f;

        //[Tooltip("Instace of this player's animation controller for first person animations")]
        //[SerializeField] private PlayerAnimationController firstPersonAnimationController = null;

        //[Tooltip("Instace of this player's animation controller for third person animations")]
        //[SerializeField] private PlayerAnimationController thirdPersonAnimationController = null;
        #endregion

        #region Private Fields
        private PlayerInputHandler inputHandler;
        private PlayerInputHandler.InputData inputData;
        private PlayerMotor motor;
        private PlayerMotor.MotorState motorState;
        private CameraController cameraController;
        #endregion

        #region Injection
        [Inject]
        public void Inject(CameraController cameraController)
        {
            this.cameraController = cameraController;
        }
        #endregion

        #region Unity Messages
        private void Update()
        {
            if (!cameraController) { Debug.LogError("camera controller not injected!"); return; }

            if (isLocalPlayer)
            {
                //print($"input: {inputData.LookDelta} // {inputData.MoveDelta}");

                cameraController.RotateCamera(inputData.LookDelta * lookSensitivity);
                RotateTransform();
            }
        }

        private void FixedUpdate()
        {
            if (isLocalPlayer)
            {
                motor.MoveMotor(inputData.MoveDelta);
            }
        }

        private void OnDestroy()
        {
            inputHandler.OnInputDataChanged -= OnInputDataChanged;
            motor.OnMotorStateChanged -= OnMotorStateChanged;
        }
        #endregion

        #region Public Methods

        #endregion

        #region Private Methods
        private void RotateTransform()
        {
            transform.localRotation = Quaternion.Euler(0, cameraController.Camera.transform.localRotation.eulerAngles.y, 0);
        }

        private void OnInputDataChanged(PlayerInputHandler.InputData inputData) => this.inputData = inputData;
        private void OnMotorStateChanged(PlayerMotor.MotorState motorState) => this.motorState = motorState;
        #endregion

        #region Mirror overrides
        public override void OnStartClient()
        {
            //Might not need to do this because of the network transform, however the clients should still not directly move their character's transform in a non-predictive context (meaning their movements should be aesthetic, not physical)
            motor = GetComponent<PlayerMotor>(); //The server should do motor calculations too and correct the client if the client diverges...need to look for a way to send client inputs to the host
            motor.OnMotorStateChanged += OnMotorStateChanged;
        }

        public override void OnStartLocalPlayer()
        {
            inputHandler = new PlayerInputHandler();
            inputHandler.OnInputDataChanged += OnInputDataChanged;

            cameraController.SetCameraTargetTransform(cameraTarget);
        }
        #endregion

        #region Factory Subclass (Necessary for runtime creation injection)
        public class Factory : PlaceholderFactory<PlayerController> { }
        #endregion
    }
}
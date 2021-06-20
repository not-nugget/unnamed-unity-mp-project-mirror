using Mirror;
using Nugget.Project.Scripts.Camera;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    /// <summary>
    /// Responsible for controlling the player in the world. Stores all necessary information and ensures the local controller instances are in sync with the
    /// instances the server is replicating
    /// </summary>
    public class PlayerController : NetworkBehaviour
    {
        #region Public Properties

        /// <summary>
        /// Instace of this player's 3D motor
        /// </summary>
        public PlayerMotor Motor { get => motor; }
        /// <summary>
        /// Instace of this player's controls input handler, should one exist
        /// </summary>
        public PlayerInputHandler InputHandler { get; private set; }
        /// <summary>
        /// Instace of this player's camera controller, should one exist
        /// </summary>
        public CameraController CameraController { get => cameraController; }
        /// <summary>
        /// Instace of this player's animation controller for first person animations, should one exist
        /// </summary>
        public PlayerAnimationController FirstPersonAnimationController { get => firstPersonAnimationController; }
        /// <summary>
        /// Instace of this player's animation controller for third person animations
        /// </summary>
        public PlayerAnimationController ThirdPersonAnimationController { get => thirdPersonAnimationController; }

        #endregion

        #region Serialized Fields

        [Tooltip("Instace of this player's 3D motor. Does not need to be set in the inspector when the motor exists on the same object as the controller")]
        [SerializeField] private PlayerMotor motor = null;

        [HorizontalGroup("camera_group", 0, 5, 5)]
        [Tooltip("The camera target transform"), Required]
        [SerializeField] private Transform cameraTarget = null;

        [HorizontalGroup("camera_group", 0, 5, 5)]
        [Tooltip("The camera controller instance this player will set the target transform of")]
        [SerializeField] private CameraController cameraController = null;

        [Tooltip("Instace of this player's animation controller for first person animations")]
        [SerializeField] private PlayerAnimationController firstPersonAnimationController = null;

        [Tooltip("Instace of this player's animation controller for third person animations")]
        [SerializeField] private PlayerAnimationController thirdPersonAnimationController = null;

        #endregion

        #region Private Fields

        private InputData inputData;

        #endregion

        #region Unity Messages

        private void Update()
        {
            if (isLocalPlayer)
            {
                Motor.ProccessMoveInputData(inputData);
                ProcessLookInputData(inputData);
            }
        }

        #endregion

        #region Public Methods



        #endregion

        #region Private Methods

        void ProcessLookInputData(InputData inputData)
        {
            //Be sure to take sensitivity into account

            //need to re-research the clamp deal
            //then rotate the transform
            //profit?
        }

        #endregion

        #region Mirror overrides

        public override void OnStartLocalPlayer()
        {
            motor = GetComponent<PlayerMotor>();
            inputData = (InputHandler = new PlayerInputHandler()).InputDataReference;
            cameraController.SetSynchronizeTransform(cameraTarget);
        }

        #endregion
    }
}
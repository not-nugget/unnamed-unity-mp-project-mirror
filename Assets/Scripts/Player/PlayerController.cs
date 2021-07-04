using Mirror;
using Nugget.Project.Scripts.Camera;
using Sirenix.OdinInspector;
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

        [Tooltip("The camera target transform"), Required]
        [HorizontalGroup("camera_group", 0, 5, 5)]
        [SerializeField] private Transform cameraTarget = null;

        [Tooltip("Total number of degrees the player is allowed to look on the positive and negative X an Y axis respectively")]
        [HorizontalGroup("camera_group", 0, 5, 5)]
        [SerializeField] private Vector2 rotationClamp = Vector2.zero;

        [Tooltip("The camera controller instance this player will set the target transform of")]
        [HorizontalGroup("camera_group", 0, 5, 5), ReadOnly]
        [SerializeField, Inject] private CameraController cameraController = null;

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
                Motor.MoveMotor(inputData.MoveDelta);
                Motor.RotateMotor(inputData.LookDelta.y);
                cameraController.PitchCamera(inputData.LookDelta.x);
            }
        }

        #endregion

        #region Public Methods



        #endregion

        #region Private Methods



        #endregion

        #region Mirror overrides
        public override void OnStartLocalPlayer()
        {
            motor = GetComponent<PlayerMotor>(); //The server should do motor calculations too and correct the client if the client diverges...need to look for a way to send client inputs to the host
            if (isLocalPlayer) //The server doesn't need to do any camera things, that will end up being client authorative for now
            {
                inputData = (InputHandler = new PlayerInputHandler()).InputDataReference;
                cameraController.SetCameraTargetTransform(cameraTarget);
                cameraController.SetRotationDegreeClamp(rotationClamp);
            }
        }
        #endregion
    }
}
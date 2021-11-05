using Mirror;
using Nugget.Scripts.Camera;
using Nugget.Scripts.Common;
using Nugget.Scripts.Player.Input;
using Nugget.Scripts.Player.Interfaces;
using Sirenix.OdinInspector;
using UnityEngine;
using Zenject;

namespace Nugget.Scripts.Player
{
    /// <summary>
    /// Responsible for controlling the player in the world. Stores all necessary information and ensures the local controller instances are in sync with the
    /// instances the server is replicating
    /// </summary>
    public class PlayerController : NetworkBehaviour
    {
        #region Serialized Fields
        [SerializeField, Tooltip("Scriptable Object Asset to use as an input provider for this player"), Required]
        private InputProviderBase inputProvider = null;
        #endregion

        #region Private Fields
        //private PlayerVisuals modelTransform;
        private PlayerCameraController cameraController;
        private CharacterController characterController;

        private Optional<IMotorState> queuedReset;
        #endregion

        //Currently I removed the dependency, but there will no doubt be other injections in the future so it is smart to keep this bad boy around
        //#region Injection
        //[Inject]
        //public void Inject()
        //{
        //    //this.cameraController = cameraController;
        //}
        //#endregion

        #region Unity Messages
        private void Awake()
        {
            cameraController = GetComponentInChildren<PlayerCameraController>();
            (characterController = GetComponent<CharacterController>()).Construct(new PlayerMotor(GetComponent<Rigidbody>()));
        }

        private void Update()
        {
            if (isLocalPlayer)
            {
                InputState inputState = inputProvider.GetState();
                cameraController.RotateCamera(inputState.LookDelta);
            }
        }

        private void FixedUpdate()
        {
            if (isLocalPlayer)
            {
                if (queuedReset.Enabled)
                {
                    characterController.ResetMotor(queuedReset.Value);
                    queuedReset = Optional<IMotorState>.Empty;
                }

                InputState inputState = inputProvider.GetState();
                characterController.Move(inputState.MoveDelta, inputState.MoveDeltaCanceled, Time.fixedDeltaTime);
                //Cmd_ValidateClientMotorState(characterController.MotorState); //when the time for authorative movement implementation comes in, we can uncomment this line out
            }
        }
        #endregion

        #region Mirror overrides & Methods
        //public override void OnStartLocalPlayer()
        //{
        //    //inputProvder = inputProviderAsset;
        //}

        [Command]
        public void Cmd_ValidateClientMotorState(IMotorState postMoveState) //only executed on the server
        {
            //check if the client and server are out of sync at all and corrects them
            //Rpc_ResetPlayer(characterController.MotorState);
        }

        //TODO this should be better implemented to optimize network traffic
        public void Rpc_ResetPlayer(IMotorState resetState) //only executed on the client
        {
            queuedReset = new Optional<IMotorState>(resetState);
        }
        #endregion

        #region Private Methods
        //bool Approximately(Vector3 a, Vector3 b, float maxDifference) => Mathf.Approximately(a.x, b.x) && Mathf.Approximately(a.y, b.y) && Mathf.Approximately(a.z, b.z);
        #endregion


        #region Factory Subclass (Necessary for runtime injection)
        public class Factory : PlaceholderFactory<PlayerController> { }
        #endregion
    }
}
using Mirror;
using Nugget.Project.Scripts.Player.Motor;
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
        #region Private Fields 
        //TODO Is there a way I can move these into injections instead of GetComponent calls?
        [System.Diagnostics.CodeAnalysis.SuppressMessage("CodeQuality", "IDE0052:Remove unread private members", Justification = "NYI")]
        private PlayerVisuals modelTransform;
        private PlayerCameraController cameraController;
        private PlayerInputHandler inputHandler;
        private NetworkInputHandler networkInput;
        private PlayerCharacterController characterController;
        private PlayerMotor motor;
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
        private void Start()
        {
            //TODO look and see if anything else can be converted into humble objects and further abstracted with interfaces
            motor = new PlayerMotor(GetComponent<Rigidbody>());

            (modelTransform = GetComponentInChildren<PlayerVisuals>()).Construct(motor);
            (characterController = GetComponent<PlayerCharacterController>()).Construct(motor);
            (networkInput = GetComponent<NetworkInputHandler>()).Construct(inputHandler, cameraController, characterController);
            (cameraController = GetComponentInChildren<PlayerCameraController>()).Construct(isLocalPlayer);
        }

        private void OnGUI()
        {   //TODO been wanting to do this for a while, but I want to make a nice debug output for Unity using the in-built GUI system that can display anything (not in this repo, probably in UnityAdditions or its own package)
            if (!isLocalPlayer) return;

            GUILayout.BeginVertical(GUILayout.ExpandHeight(true));
            GUILayout.BeginHorizontal(GUILayout.ExpandWidth(true));

            GUI.Label(new Rect(5f, 5f, 1f, 300f), "");

            GUI.Label(new Rect(5f, 305f, 450f, 20f), $"pos(x:{transform.position.x:F4}  y:{transform.position.y:F4}  z:{transform.position.z:F4})");
            GUI.Label(new Rect(5f, 325f, 450f, 20f), $"rot(x:{transform.GetChild(0).rotation.eulerAngles.x:F4}  y:{transform.GetChild(0).rotation.eulerAngles.y:F4}  z:{transform.GetChild(0).rotation.eulerAngles.z:F4})");
            GUI.Label(new Rect(5f, 345f, 450f, 20f), $"vel(x:{motor.MotorState.Velocity.x:F4}  y:{motor.MotorState.Velocity.y:F4}  z:{motor.MotorState.Velocity.z:F4})");

            GUILayout.EndHorizontal();
            GUILayout.EndVertical();
        }
        #endregion

        #region Mirror overrides
        public override void OnStartClient()
        {
            base.OnStartClient();
        }

        public override void OnStartLocalPlayer()
        {
            inputHandler = new PlayerInputHandler();
        }
        #endregion

        #region Factory Subclass (Necessary for runtime injection)
        public class Factory : PlaceholderFactory<PlayerController> { }
        #endregion
    }
}
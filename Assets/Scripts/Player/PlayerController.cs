﻿using Mirror;
using Nugget.Project.Plugins.Extensions;
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
        private PlayerVisuals modelTransform;
        private PlayerCameraController cameraController;
        private PlayerInputHandler inputHandler;
        private NetworkInputHandler networkInput;
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
            modelTransform = GetComponentInChildren<PlayerVisuals>();
            modelTransform.Construct(motor);

            cameraController = GetComponentInChildren<PlayerCameraController>();
            cameraController.Construct(networkInput, isLocalPlayer);

            networkInput = GetComponent<NetworkInputHandler>();
            networkInput.Construct(inputHandler, cameraController, motor);

            motor = new PlayerMotor(GetComponent<Rigidbody>());
        }

        private void OnGUI()
        {   //TODO been wanting to do this for a while, but I want to make a nice debug output for Unity using the in-built GUI system that can display anything 
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
            //Might not need to do this because of the network transform, however the clients should still not directly move their character's transform in a non-predictive context (meaning their movements should be aesthetic, not physical)
            //motor = GetComponent<PlayerMotor>(); //The server should do motor calculations too and correct the client if the client diverges...need to look for a way to send client inputs to the host
            //motor.OnMotorStateChanged += OnMotorStateChanged;
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
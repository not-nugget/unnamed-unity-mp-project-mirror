using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using static InputControls;

namespace Nugget.Project.Scripts.Player
{
    /// <summary>
    /// Responsible for handling player inputs that the new Input System captures and sending the information to the controller
    /// </summary>
    public class PlayerInputHandler : IDefaultControlsActions
    {
        /// <summary>
        /// Get a reference to this input handler's <see cref="InputData"/> instace
        /// </summary>
        public ref InputData InputDataReference { get => ref inputData; }
        private InputData inputData = new InputData();

        private readonly InputControls controls;

        public PlayerInputHandler()
        {
            (controls = new InputControls()).DefaultControls.SetCallbacks(this); //Create the controls and set the callbacks
            controls.Enable(); //Enable the controls asset
        }

        // Interface Implementation

        public void OnLook(InputAction.CallbackContext context)
        {
            inputData.LookDelta = context.ReadValue<Vector2>();
        }

        public void OnMove(InputAction.CallbackContext context)
        {
            inputData.MoveDelta = context.ReadValue<Vector2>();
        }
    }
}
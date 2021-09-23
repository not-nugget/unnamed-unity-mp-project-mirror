using System;
using UnityEngine;
using UnityEngine.InputSystem;
using static InputControls;

namespace Nugget.Project.Scripts.Player
{
    public class PlayerInputHandler : IDefaultControlsActions
    {
        #region InputState Scruct
        /// <summary>
        /// Container for easy transfer of input data from object to object
        /// </summary>
        public struct InputData
        {
            private Vector3 moveDelta;
            public Vector3 MoveDelta
            {
                get => moveDelta;
                set
                {
                    moveDelta.x = value.x;
                    moveDelta.z = value.y;
                }
            }

            private Vector2 lookDelta;
            public Vector2 LookDelta
            {
                get => lookDelta;
                set
                {
                    lookDelta.x = value.y;
                    lookDelta.y = value.x;
                    lookDelta = -lookDelta;
                }
            }
        }
        #endregion

        #region Public Properties
        /// <summary>
        /// Get the current state of the input system
        /// </summary>
        public InputData Data => inputData;

        /// <summary>
        /// Get or set the enabled state of the underlying <see cref="InputActionAsset"/>
        /// </summary>
        public bool Enabled
        {
            get => controls.asset.enabled;
            set
            {
                if (value)
                {
                    controls.Enable();
                    return;
                }

                controls.Disable();
            }
        }
        #endregion

        #region Private Fields
        private readonly InputControls controls;
        private InputData inputData;
        #endregion

        public PlayerInputHandler()
        {
            inputData = new InputData();

            (controls = new InputControls()).DefaultControls.SetCallbacks(this);
            controls.Enable();
        }

        #region Interface Implementation
        public void OnLook(InputAction.CallbackContext context) => inputData.LookDelta = context.ReadValue<Vector2>();

        public void OnMove(InputAction.CallbackContext context) => inputData.MoveDelta = context.ReadValue<Vector2>();
        #endregion
    }
}
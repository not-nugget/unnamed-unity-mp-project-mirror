using Nugget.Scripts.Player.Input.Interfaces;
using Nugget.Settings.Input;
using System;
using UnityEngine;
using UnityEngine.InputSystem;
using static Nugget.Settings.Input.InputControls;

namespace Nugget.Scripts.Player
{
    public class PlayerInputMiddleware : IDefaultControlsActions, IInputMiddleware
    {
        #region InputData Scruct
        private struct InputData
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

        public PlayerInputMiddleware()
        {
            inputData = new InputData();

            (controls = new InputControls()).DefaultControls.SetCallbacks(this);
            Enable();
        }

        public void Enable() => controls?.Enable();
        public void Disable() => controls?.Disable();

        #region Controls Interface Implementation
        public void OnLook(InputAction.CallbackContext context) => inputData.LookDelta = context.ReadValue<Vector2>();
        public void OnMove(InputAction.CallbackContext context) => inputData.MoveDelta = context.ReadValue<Vector2>();
        #endregion

        #region Middleware Implementation
        public InputState Process(InputState inputState)
        {
            throw new NotImplementedException();
        }
        #endregion
    }
}
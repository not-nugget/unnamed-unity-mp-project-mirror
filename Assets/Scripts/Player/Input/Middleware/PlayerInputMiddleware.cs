﻿using Nugget.Scripts.Common;
using Nugget.Settings.Input;
using System;
using UnityEngine;
using UnityEngine.InputSystem;
using static Nugget.Settings.Input.InputControls;

namespace Nugget.Scripts.Player.Input
{
    [CreateAssetMenu(fileName = nameof(PlayerInputMiddleware), menuName = ProjectConstants.COMPANY_NAME + "/Input/Middleware/" + nameof(PlayerInputMiddleware))]
    public class PlayerInputMiddleware : InputMiddlewareBase, IDefaultControlsActions
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

            public InputState Process(InputState inputState)
            {
                throw new NotImplementedException("InputState struct is not yet implemented");
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
        private InputControls controls;
        private InputData inputData;

        private bool initialized = false;
        #endregion

        #region Unity Messages
        private void OnEnable()
        {
            if (initialized)
            {
                controls.Enable();
                return;
            }

            Initialize();
        }
        private void OnDisable()
        {
            controls?.Disable();
        }
        #endregion

        #region Controls Interface Implementation
        public void OnLook(InputAction.CallbackContext context) => inputData.LookDelta = context.ReadValue<Vector2>();
        public void OnMove(InputAction.CallbackContext context) => inputData.MoveDelta = context.ReadValue<Vector2>();
        #endregion

        #region Middleware Implementation
        public override InputState Process(InputState inputState) => inputData.Process(inputState);
        #endregion

        #region Private Methods
        private void Initialize()
        {
            inputData = new InputData();
            (controls = new InputControls()).DefaultControls.SetCallbacks(this);
            controls.Enable();
            initialized = true;
        }
        #endregion
    }
}
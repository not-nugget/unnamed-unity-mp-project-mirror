using System;
using UnityEngine;
using UnityEngine.InputSystem;
using static InputControls;

namespace Nugget.Project.Scripts.Player
{
    /// <summary>
    /// Responsible for handling player inputs and building the data the controller uses
    /// </summary>
    public class PlayerInputHandler : IDefaultControlsActions
    {
        #region InputData Subclass
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

        public event Action<InputData> OnInputDataChanged;

        private readonly InputControls controls;
        private InputData inputData;

        public PlayerInputHandler()
        {
            inputData = new InputData();

            (controls = new InputControls()).DefaultControls.SetCallbacks(this);
            controls.Enable();
        }

        #region Interface Implementation
        public void OnLook(InputAction.CallbackContext context)
        {
            inputData.LookDelta = context.ReadValue<Vector2>();

            OIDC();
        }

        public void OnMove(InputAction.CallbackContext context)
        {
            inputData.MoveDelta = context.ReadValue<Vector2>();

            OIDC();
        }
        #endregion

        #region Private methods
        private void OIDC() //"OnInputDataChanged"
        {
            OnInputDataChanged?.Invoke(inputData);
        }
        #endregion
    }
}
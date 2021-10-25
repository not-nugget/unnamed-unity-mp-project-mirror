using Mirror;
using Nugget.Scripts.Camera;
using UnityEngine;

namespace Nugget.Scripts.Player
{
    public class NetworkInputHandler : NetworkBehaviour
    {
        public Transform clientRotationTransform = null;

        private PlayerInputHandler playerInput;
        private PlayerCameraController cameraController;
        private PlayerCharacterController characterController;

        private bool jumpIssued = false;

        public void Construct(PlayerInputHandler playerInput, PlayerCameraController cameraController, PlayerCharacterController characterController)
        {
            this.playerInput = playerInput;
            this.cameraController = cameraController;
            this.characterController = characterController;
        }

        private void Update()
        {
            jumpIssued = false;
        }

        private void FixedUpdate()
        {
            MoveMotor();
        }

        private void MoveMotor()
        {
            characterController.Move(playerInput.Data.MoveDelta);
        }
    }
}

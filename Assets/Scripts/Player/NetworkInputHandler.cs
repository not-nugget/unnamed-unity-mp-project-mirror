using Mirror;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    public class NetworkInputHandler : NetworkBehaviour
    {
        //i could probably achieve the pitch dealio with a SyncVar
        //the rest I might want to set up with Commands(client -> server) and RPCs(server -> client)
        //or....just use a network transfrorm child?

        public bool ReceiveMouseInput { get => !isLocalPlayer; }
        public bool NewDataReceived { get; private set; }

        public Transform clientRotationTransform = null;

        [SerializeField, Tooltip("Time to pause after sending an input event to the server")]
        private float inputSendInterval = .2f;

        //this object likely wont need to handle the parent rotation as the network transform and rigidbody will make sure those don't go out of sync, so we will likely be able to send just a pitch float
        public Quaternion ServerParentRotation { get; private set; }
        public Quaternion ServerCameraRotation { get; private set; }

        private PlayerInputHandler playerInput;
        private PlayerCameraController cameraController;
        private PlayerMotor motor;

        private float inputSendIntervalTimer = 0;

        public void Construct(PlayerInputHandler playerInput, PlayerCameraController cameraController, PlayerMotor motor)
        {
            this.playerInput = playerInput;
            this.cameraController = cameraController;
            this.motor = motor;
        }

        private void Update()
        {
            if (playerInput is null) return;

            //inputSendIntervalTimer -= Time.deltaTime;
            ////move this to a coroutine that executes every x frames or every y seconds
            //if (inputSendIntervalTimer <= 0)
            //{
            //    InputMoveCommand(playerInput.State.MoveDelta);

            //    inputSendIntervalTimer = inputSendInterval;
            //}

            cameraController.RotateCameraPitch(playerInput.State.LookDelta.x);
            clientRotationTransform.Rotate(clientRotationTransform.up, -playerInput.State.LookDelta.y);
            //motor.RotateMotor(-playerInput.State.LookDelta.y);
        }

        private void FixedUpdate()
        {
            if (playerInput is null) return;

            Vector3 moveDelta = 5f * Time.fixedDeltaTime * playerInput.State.MoveDelta;
            InputMoveCommand(moveDelta); //Queue the command to be sent
            motor.MoveMotor(moveDelta); //Move the motor locally
        }

        private void LateUpdate()
        {
            //Assume data has been handled when LateUpdate is invoked (probably not smart, should look into a better way to do this)
            NewDataReceived = false;
        }

        [Command]
        public void InputMoveCommand(Vector3 moveDelta)
        {
            //if i understand commands correctly, when this is called on the local client, the vector3 will be passed to the server and the method body will only be executed on the server
            motor.MoveMotor(moveDelta);

            //check if a reset state should occur, and if one should, send an RPC call to the client with the reset data
        }

        [ClientRpc]
        public void ResetMotorToState(PlayerMotor.MotorData resetState)
        {
            //if i understand rpc calls correctly, when this is called on the server the motor state will be sent to the coresponding object on the client and it will execute its method body
            motor.ResetMotor(resetState);
        }

        //This class should do the following:
        //  Send player inputs
        //      I have no idea how this should be done. Because I want the server to send and receieve updates at an interval, the clients should not just dump all their information on the wire
        //      and expect responses immediately from the server. Subsequently, I do not know how the server should react to getting sent multiple requests between it's interval period...
        //
        //  Receive corrections and information from the server:
        //      This class should receive information from the server that allows the client to properly render other players in the game world. Ideally, this would only be the current pitch value
        //      from the remote endpoint given to the client at ever server update interval
        //
        //  Instruct the motor and camera to move and/or rotate respectively based on provided input
        //      This is pretty self-explanitory
    }
}

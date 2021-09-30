using Mirror;
using Nugget.Project.Scripts.Player.Interfaces;
using Nugget.Project.Scripts.Player.Motor.Interfaces;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    public class NetworkInputHandler : NetworkBehaviour
    {
        //we don't need to worry about the mouse movement, only the per-frame instructions to move the character
        public struct SyncInput //gross and needs to go. I think for now i decided on the updates only occuring every fixed timestep so we can roll with those punches for now
        {
            public Vector3 move;
            public float dt; // i dont need to send the delta time, as I can just calculate it based on the total number of frames elapsed and the send interval, but it might be smart to send it for undeniable determinism between the client and server

            public SyncInput(PlayerInputHandler.InputData input, float dt)
            {
                move = input.MoveDelta;
                this.dt = dt;
            }
        }

        public Transform clientRotationTransform = null;

        [SerializeField, Tooltip("Time to pause after sending an input event to the server")]
        private float inputSendInterval = .2f;

        private PlayerInputHandler playerInput;
        private PlayerCameraController cameraController;
        private IPlayerMotor motor;

        private readonly Queue<SyncInput> inputQueue = new Queue<SyncInput>();
        private float inputSendIntervalTimer = 0;
        private int framesSinceLastInputCommandSent = 0;

        public void Construct(PlayerInputHandler playerInput, PlayerCameraController cameraController, IPlayerMotor motor)
        {
            this.playerInput = playerInput;
            this.cameraController = cameraController;
            this.motor = motor;
        }

        private void Update()
        {
            if (playerInput is null) return;

            //NOTE Interval-based command send
            //inputSendIntervalTimer -= Time.deltaTime;
            //framesSinceLastInputCommandSent++;

            //if (playerInput.Data.MoveDelta.sqrMagnitude > 0f)
            //    inputQueue.Enqueue(new SyncInput(playerInput.Data, Time.deltaTime));

            //cameraController.RotateCameraPitch(playerInput.Data.LookDelta.x);
            //clientRotationTransform.Rotate(clientRotationTransform.up, -playerInput.Data.LookDelta.y);

            //if (inputSendIntervalTimer <= 0f)
            //{
            //    print("Sending input queue command to server");
            //    Cmd_InputQueue(framesSinceLastInputCommandSent, inputQueue.ToArray(), motor.MotorState.Position);

            //    inputSendIntervalTimer = inputSendInterval;
            //    framesSinceLastInputCommandSent = 0;
            //    inputQueue.Clear();
            //}

            //Per rame command send
            Cmd_InputAction(playerInput.Data, motor.MotorState);
        }

        private void FixedUpdate()
        {
            if (playerInput is null) return;

            Vector3 moveDelta = 5f * Time.fixedDeltaTime * playerInput.Data.MoveDelta;

            //motor.MoveMotor(moveDelta); //Move the motor locally

            motor.AddForce(moveDelta, ForceMode.VelocityChange, true); //Relative doesn't matter right now, as the motor's body is axis aligned, we can rotate the delta later
        }

        [Command]
        public void Cmd_InputQueue(int totalInputFramesSinceLastCommand, SyncInput[] inputQueue, Vector3 currentBodyPosition)
        {
            print("Received input command");
            print($"Current player position on server: {motor.MotorState.Position}");
            print($"Current player position on client: {currentBodyPosition}");

            if (totalInputFramesSinceLastCommand > 0)
            {
                Vector3 finalBodyPosition = motor.MotorState.Position;
                print($"Motor position on server: {finalBodyPosition}");

                foreach (SyncInput input in inputQueue)
                {
                    finalBodyPosition += (5f * input.dt * input.move);
                }

                if (Vector3.Distance(finalBodyPosition, currentBodyPosition) > .3f)
                {
                    print("Sending motor correction to client");

                    //issue a correction
                    IMotorState motorState = new MotorState(finalBodyPosition, motor.MotorState.Rotation, motor.MotorState.Velocity, motor.MotorState.AngularVelocity);
                    Rpc_ResetMotorToState(motorState);
                    motor.ResetMotor(motorState);
                }
            }
        }

        [Command]
        public void Cmd_InputAction(PlayerInputHandler.InputData input, IMotorState clientMotorState)
        {
            //i just realized...there will likely be a desynchronization between the fixed update calls on the client and server, regardless if mirror synchronizes it or not...
            //we might have to do some preemptive calculation on these inputs on the server when we get them or something...idk but this gets more complicated the more I look into it
        }

        [ClientRpc]
        public void Rpc_ResetMotorToState(IMotorState resetState)
        {
            print("Motor correction received");

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

using UnityEngine;

namespace Nugget.Project.Scripts.Player.Motor
{
    public class MotorStateMachine
    {
        IMotorState currentState = null;

        public void MoveMotor(Vector3 moveDelta)
        {
            currentState.MoveMotor(moveDelta);
        }

        public bool SetState(IMotorState newState)
        {
            if (currentState == newState) return false;

            currentState = newState;
            return true;
        }
    }
}

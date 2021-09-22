using UnityEngine;

namespace Nugget.Project.Scripts.Player.Motor
{
    public abstract class MotorState : IMotorState
    {
        public abstract void MoveMotor(Vector3 moveDelta);
    }
}

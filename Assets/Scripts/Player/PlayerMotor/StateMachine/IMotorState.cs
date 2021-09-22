using UnityEngine;

namespace Nugget.Project.Scripts.Player.Motor
{
    public interface IMotorState
    {
        void MoveMotor(Vector3 moveDelta);
    }
}
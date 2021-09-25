using Nugget.Project.Scripts.Player.Motor.Interfaces;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    public class PlayerVisuals : MonoBehaviour
    {
        #region Private Fields
        private IMotor motor;
        #endregion

        #region Manual Dependency Construction
        public void Construct(IMotor motor)
        {
            this.motor = motor;
        }
        #endregion
    }
}

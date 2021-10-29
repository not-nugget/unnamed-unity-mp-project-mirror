using Nugget.Scripts.Player.Interfaces;
using UnityEngine;

namespace Nugget.Scripts.Player
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

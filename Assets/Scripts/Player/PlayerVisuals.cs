using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    public class PlayerVisuals : MonoBehaviour
    {
        #region Private Fields
        private PlayerMotor motor;
        #endregion

        #region Manual Dependency Construction
        public void Construct(PlayerMotor motor)
        {
            this.motor = motor;
        }
        #endregion
    }
}

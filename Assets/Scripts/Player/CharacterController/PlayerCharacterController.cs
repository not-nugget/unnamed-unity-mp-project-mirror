using Nugget.Project;
using Nugget.Project.Scripts.Player.Motor.Interfaces;
using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    public class PlayerCharacterController : MonoBehaviour
    {
        private IPlayerMotor motor;

        public void Construct(IPlayerMotor motor)
        {
            this.motor = motor;
        }

        /// <summary>
        /// Moves the controller in the delta direction based on the configured parameters of the controller
        /// </summary>
        /// <param name="moveDelta">Delta direction to move the character</param>
        public void Move(Vector3 moveDelta)
        {

        }

        public void Rotate(Quaternion rotation)
        {

        }
    }

    [CreateAssetMenu(fileName = "PlayerCharacterControllerSettings", menuName = "")]
    public class PlayerCharacterControllerSettings : ScriptableObject
    {

    }

    [CreateAssetMenu(fileName = "PlayerCharacterControllerModifier", menuName = "")]
    public class PlayerCharacterControllerModifier : ScriptableObject
    {

    }
}

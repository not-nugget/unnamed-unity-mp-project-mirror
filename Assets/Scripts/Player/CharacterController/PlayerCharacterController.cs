using Nugget.Scripts.Player.Interfaces;
using UnityEngine;

namespace Nugget.Scripts.Player
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

        /// <summary>
        /// Rotate the controller by the provided rotation
        /// </summary>
        /// <param name="rotation">Rotation used to effect the controller</param>
        public void Rotate(Quaternion rotation)
        {

        }
    }

    [CreateAssetMenu(fileName = "PlayerCharacterControllerSettings", menuName = "NuggetProd/Character Controller Settings")]
    public class PlayerCharacterControllerSettings : ScriptableObject
    {

    }

    [CreateAssetMenu(fileName = "PlayerCharacterControllerModifier", menuName = "NuggetProd/Character Controller Modifier")]
    public class PlayerCharacterControllerModifier : ScriptableObject
    {

    }
}

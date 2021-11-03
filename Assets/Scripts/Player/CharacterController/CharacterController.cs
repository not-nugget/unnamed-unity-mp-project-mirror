using Nugget.Scripts.Common;
using Nugget.Scripts.Player.Interfaces;
using UnityEngine;

namespace Nugget.Scripts.Player
{
    public class CharacterController : MonoBehaviour
    {
        #region Serialized Fields
        [SerializeField, Tooltip("Character controller settings object")]
        private PlayerCharacterControllerSettings settings = null;
        #endregion

        #region Public Properties
        /// <summary>
        /// The current state of the Motor
        /// </summary>
        public IMotorState MotorState { get => motor.MotorState; }
        #endregion

        #region Private Fields
        private IPlayerMotor motor;
        #endregion

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

        /// <summary>
        /// Reset the motor to the provided state
        /// </summary>
        /// <param name="resetState">State to reset the motor to</param>
        public void ResetMotor(IMotorState resetState)
        {
            motor.ResetMotor(resetState);
        }
    }

    [CreateAssetMenu(fileName = nameof(PlayerCharacterControllerSettings), menuName = ProjectConstants.COMPANY_NAME + "/Player/" + nameof(PlayerCharacterControllerSettings))]
    public class PlayerCharacterControllerSettings : ScriptableObject
    {

    }

    //This is an extra thing that will basically mirror a settings object that can be dynamically applied to a character during runtime, like a potion effect
    //[CreateAssetMenu(fileName = "PlayerCharacterControllerModifier", menuName = "NuggetProd/Character Controller Modifier")]
    //public class PlayerCharacterControllerModifier : ScriptableObject
    //{

    //}
}

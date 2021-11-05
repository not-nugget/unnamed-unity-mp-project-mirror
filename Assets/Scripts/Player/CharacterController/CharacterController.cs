using Nugget.Scripts.Common;
using Nugget.Scripts.Player.Interfaces;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Nugget.Scripts.Player
{
    public class CharacterController : MonoBehaviour
    {
        #region Serialized Fields
        [SerializeField, Tooltip("Character controller settings object"), Required("A character controller cannot function without a valid settings asset")]
        private CharacterControllerSettings settings = null;
        #endregion

        #region Public Properties
        /// <summary>
        /// The current state of the Motor
        /// </summary>
        public IMotorState MotorState { get => motor.MotorState; }
        #endregion

        #region Private Fields
        private IPlayerMotor motor;

        private float inputExecutionDuration = 0f;
        #endregion

        public void Construct(IPlayerMotor motor)
        {
            this.motor = motor;
        }

        /// <summary>
        /// Moves the controller in the delta direction based on the configured parameters of the controller
        /// </summary>
        /// <param name="moveDelta">Delta direction to move the character</param>
        /// <param name="moveDeltaCancelled">Indicates when movement was cancelled, allowing time-based force modulation to be tracked</param>
        /// <param name="timeStep">Time step since last move event</param>
        public void Move(Vector3 moveDelta, bool moveDeltaCancelled, float timeStep)
        {
            float forceMultiplier = 1;

            Vector3 lateralVelocity = motor.MotorState.Velocity;
            lateralVelocity.y = 0;

            forceMultiplier *= settings.inputTimeForceMultiplierCurve.Value.Evaluate(inputExecutionDuration);
            inputExecutionDuration += moveDeltaCancelled ? -inputExecutionDuration : timeStep;

            float inputDotVelocity = Vector3.Dot(moveDelta, lateralVelocity);
            forceMultiplier *= settings.inputDirectionDifferenceForceMultiplierCurve.Value.Evaluate(inputDotVelocity);

            float normalizedSqrMagnitude = 1 - (lateralVelocity.sqrMagnitude / settings.lateralVelocitySqrMagnitudecSalar);
            forceMultiplier *= settings.lateralVelocityInputForceMultiplierCurve.Value.Evaluate(normalizedSqrMagnitude);

            //apply motion to the body using the force multiplier
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

    //This is an extra thing that will basically mirror a settings object that can be dynamically applied to a character during runtime, like a potion effect
    //[CreateAssetMenu(fileName = "PlayerCharacterControllerModifier", menuName = "NuggetProd/Character Controller Modifier")]
    //public class PlayerCharacterControllerModifier : ScriptableObject
    //{

    //}
}

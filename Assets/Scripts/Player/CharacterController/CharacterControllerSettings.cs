using Nugget.Scripts.Common;
using UnityEngine;

namespace Nugget.Scripts.Player
{
    /// <summary>
    /// Settings used to control the physical behavior of a <see cref="CharacterController"/>
    /// </summary>
    [CreateAssetMenu(fileName = nameof(CharacterControllerSettings), menuName = ProjectConstants.COMPANY_NAME + "/Player/" + nameof(CharacterControllerSettings))]
    public class CharacterControllerSettings : ScriptableObject
    {
        /// <summary>
        /// When an input occurs, the time since the input began is evaluated against this curve, allowing for movement to be eased instead of instant
        /// 
        /// <para>
        /// I.E. When pressing A, instead if immediately moving the character to the left at full speed, we can slowly increase the character's momentum in the direction
        /// until a maximum speed is reached. Subsequently, when we press the opposite key, our speed should not be nullified but instead slowly decreased until the new
        /// direction is realistically achievable
        /// </para>
        /// </summary>
        [Tooltip("Force multiplication applied to the character based on the duration of an input")]
        public Optional<AnimationCurve> inputTimeForceMultiplierCurve;

        /// <summary>
        /// When an input occurs, the preexisting velocity will determine at which speed the character should be affected.
        /// 
        /// <para>
        /// I.E. When a character is already in motion, we should not ease additional motion in the same direction but instead should maintain that motion
        /// </para>
        /// </summary>
        [Tooltip("Force multiplication applied to the character based on the lateral velocity of the character")]
        public Optional<AnimationCurve> lateralVelocityInputForceMultiplierCurve;

        /// <summary>
        /// When passing a value into <see cref="lateralVelocityInputForceMultiplierCurve"/>, it will first be normalized based on this value
        /// 
        /// <para>
        /// I.E. When comparing the sqare magnitude of the current velocity vector to the input vector, the value will be brought between 0 and 1 based on this value.
        /// When both vector's square magnitudes are equal, the value given to the curve for evaluation will be 1, and when one square magnitude is half the other's,
        /// the value passed to the curve will be 0.5, etc
        /// </para>
        /// </summary>
        [Tooltip("Value of the velocity's squared magnitude which would apply maximum force to the character when an input is applied after a prior cancellation")]
        public Optional<float> lateralVelocitySqrMagnitudecSalar;

        /// <summary>
        /// When a new input is recieved, the force will be multiplied based on the dot product of the current lateral velocity and the new input
        /// 
        /// <para>
        /// I.E. When a player has reached maximum velocity moving forward, they cannot immediately start moving backward and instead need to slightly slow down before
        /// being able to accelerate in the opposite direction
        /// </para>
        /// </summary>
        [Tooltip("Force multiplication applied to the character based on the difference of the input direction versus the direction of the current velocity")]
        public Optional<AnimationCurve> inputDirectionDifferenceForceMultiplierCurve;
    }
}

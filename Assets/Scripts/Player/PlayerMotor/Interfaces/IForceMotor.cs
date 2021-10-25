using UnityEngine;

namespace Nugget.Scripts.Player.Interfaces
{
    /// <summary>
    /// An instance of <see cref="IMotor"/> which can additionally have forces applied to them
    /// </summary>
    public interface IForceMotor : IMotor
    {
        /// <summary>
        /// Adds a force to the motor
        /// </summary>
        /// <param name="force">Force to add</param>
        /// <param name="forceMode">Method of applying the force</param>
        /// <param name="relative">Should the force be applied relative to the motor</param>
        void AddForce(Vector3 force, ForceMode forceMode = ForceMode.Force, bool relative = false);
        /// <summary>
        /// Adds a torque to the motor
        /// </summary>
        /// <param name="torque">Torque to add</param>
        /// <param name="forceMode">Method of applying the force</param>
        /// <param name="relative">Should the force be applied relative to the motor</param>
        void AddTorque(Vector3 torque, ForceMode forceMode = ForceMode.Force, bool relative = false);

        /// <summary>
        /// Adds a force and torque to the motor originating from a given position
        /// </summary>
        /// <param name="position">Position of the force to apply</param>
        /// <param name="force">Force to add</param>
        /// <param name="forceMode">Method of applying the force</param>
        void AddForceAtPosition(Vector3 position, Vector3 force, ForceMode forceMode = ForceMode.Force);
        /// <summary>
        /// Adds an explosion force to the motor
        /// </summary>
        /// <param name="explosionForce">Outward force of the explosion</param>
        /// <param name="explosionPosition">Origination position of the explosion in world space</param>
        /// <param name="explosionRadius">Total radius of the explosion</param>
        /// <param name="upwardsModifier">Upward force modifier</param>
        /// <param name="forceMode">Method of applying the force</param>
        void AddExplosionForce(float explosionForce, Vector3 explosionPosition, float explosionRadius, float upwardsModifier = 1f, ForceMode forceMode = ForceMode.Force);
    }
}

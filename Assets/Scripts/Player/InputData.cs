using UnityEngine;

namespace Nugget.Project.Scripts.Player
{
    /// <summary>
    /// Container for easy transfer of input data from object to object
    /// </summary>
    public struct InputData
    {
        private Vector2 moveDelta;
        public Vector2 MoveDelta { get => moveDelta; set => moveDelta = value; }

        private Vector2 lookDelta;
        public Vector2 LookDelta { get => lookDelta; set => lookDelta = value; }
    }
}
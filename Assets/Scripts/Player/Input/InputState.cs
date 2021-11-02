using Nugget.Scripts.Player.Input.Interfaces;
using UnityEngine;

namespace Nugget.Scripts.Player
{
    public struct InputState
    {
        public Vector3 MoveDelta { get; set; }
        public Vector3 LookDelta { get; set; }
    }
}

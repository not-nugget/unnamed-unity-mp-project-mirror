using Nugget.Scripts.Player.Input.Interfaces;
using UnityEngine;

namespace Nugget.Scripts.Player.Input
{
    public abstract class InputProviderBase : ScriptableObject, IInputProvider
    {
        public abstract InputState GetState();
    }
}

using Nugget.Scripts.Player.Input.Interfaces;
using UnityEngine;

namespace Nugget.Scripts.Player.Input
{
    public abstract class InputMiddlewareBase : ScriptableObject, IInputMiddleware
    {
        public abstract InputState Process(InputState inputState);
    }
}

using Nugget.Scripts.Common;
using Nugget.Scripts.Player.Input.Interfaces;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Scripts.Player.Input
{
    [CreateAssetMenu(fileName = nameof(PlayerInputChainProvider), menuName = ProjectConstants.COMPANY_NAME + "/Input/" + nameof(PlayerInputChainProvider))]
    public class PlayerInputChainProvider : InputProviderBase
    {
        public IEnumerable<IInputMiddleware> RegisterredMiddleware => middleware;

        private readonly List<IInputMiddleware> middleware;

        public void AddMiddleware(IEnumerable<IInputMiddleware> toAdd) => middleware.AddRange(toAdd);
        public void AddMiddleware(IInputMiddleware toAdd) => middleware.Add(toAdd);

        public override InputState GetState()
        {
            InputState state = new InputState();

            foreach(IInputMiddleware mdw in middleware)
            {
                state = mdw.Process(state);
            }

            return state;
        }
    }
}

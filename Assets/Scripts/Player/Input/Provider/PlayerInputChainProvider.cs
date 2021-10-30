using Nugget.Scripts.Common;
using UnityEngine;

namespace Nugget.Scripts.Player.Input
{
    [CreateAssetMenu(fileName = nameof(PlayerInputChainProvider), menuName = ProjectConstants.COMPANY_NAME + "/Input/" + nameof(PlayerInputChainProvider))]
    public class PlayerInputChainProvider : InputProviderBase
    {
        [SerializeField, Tooltip("Input Middleware chain")] //TEST just make sure this array's order remains fixed or support a better implementation for ordering the contents (later elemtns will always take precedence over earlier ones)
        private InputMiddlewareBase[] middleware = null;

        public override InputState GetState()
        {
            InputState state = new InputState();

            foreach (InputMiddlewareBase mdw in middleware)
            {
                state = mdw.Process(state);
            }

            return state;
        }
    }
}

using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Project.Scripts
{
    public class NetworkInputHandler : NetworkBehaviour
    {
        public bool ReceiveMouseInput { get => !isLocalPlayer; }

        //command and rpc stuff...
        //this will definitely send the player rotation but should not receive (or should ignore) the mouse input for the local player
    }
}

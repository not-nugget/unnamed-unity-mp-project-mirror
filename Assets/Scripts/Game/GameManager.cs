using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Project.Scripts.Game
{
    public class GameManager : Manager
    {
        private void Awake()
        {
            if (!Managers.RegisterManager(this)) Destroy(this);
        }
    }
}
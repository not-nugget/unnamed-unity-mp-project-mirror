using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Project.Scripts
{
    //TODO
    public interface ICameraInfluence
    {
        event Action<ICameraInfluence> OnComplete;

        IEnumerator Execute(float deltaTime);
    }
}

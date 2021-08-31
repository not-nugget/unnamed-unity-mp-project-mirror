using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Project.Scripts.Scenes
{
    [CreateAssetMenu(fileName = "SceneContainer", menuName = "Scenes/SceneContainer")]
    public class SceneContainerAsset : ScriptableObject
    {
        [Tooltip("Base scene this asset references. This asset MUST have a base scene")]
        [Required] public SceneField baseScene = null;

        [Tooltip("Any additional scenes this scene requires to be loaded in addition to itself")]
        public SceneField[] additionalScenes = null;
    }
}

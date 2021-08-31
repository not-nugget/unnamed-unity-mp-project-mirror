using System;
using UnityEngine;

namespace Nugget.Project.Scripts.Scenes
{
    [Serializable]
    public class SceneField
    {
        [SerializeField] private UnityEngine.Object sceneAsset;
        [SerializeField] private string sceneName = "";

        public string SceneName { get => sceneName; }

        public static implicit operator string(SceneField sceneField) => sceneField.SceneName;
    }
}

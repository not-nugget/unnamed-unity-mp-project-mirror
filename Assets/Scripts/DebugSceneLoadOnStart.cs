using Nugget.Scripts.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Nugget.Scripts
{
    public class DebugSceneLoadOnStart : MonoBehaviour
    {
        public SceneField[] toLoad;

        void Start()
        {
            foreach (SceneField scene in toLoad)
            {
                if (scene is null || string.IsNullOrWhiteSpace(scene.SceneName)) continue;

                SceneManager.LoadSceneAsync(scene.SceneName, LoadSceneMode.Additive);
            }

            Destroy(gameObject);
        }

        private void OnValidate()
        {
            gameObject.name = nameof(DebugSceneLoadOnStart);
        }
    }
}
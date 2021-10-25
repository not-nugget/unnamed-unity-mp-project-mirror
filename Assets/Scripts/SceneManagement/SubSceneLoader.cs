using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Nugget.Scripts.SceneManagement
{
    /// <summary>
    /// Base sub scene loader class. This object acts as a container for any and all logic that needs to be completed when loading a new scene, as well
    /// as any extra scenes that are required to be loaded to complete the original scene's content. Be sure any extra scenes which are being loaded are
    /// added to the build settings, or are stored in an AssetBundle
    /// </summary>
    public class SubSceneLoader : MonoBehaviour
    {
        [SerializeField, Tooltip("A main scene which will rarely (if ever) get unloaded. This scene should contain game states and other managers")]
        protected SceneField managerScene;

        [SerializeField, Tooltip("A main scene which should never be unloaded. This scene should contain all the render cameras the game will use")]
        protected SceneField cameraScene;

        [SerializeField, Tooltip("A list of sub-scenes which need to be loaded in addition to the main scene. These scenes will be addatively to the original scene")]
        protected SceneField[] subScenes;

        private void Awake()
        {
            StartCoroutine(LoadSubScenes());
        }

        private IEnumerator LoadSubScenes()
        {
            yield return SceneManager.LoadSceneAsync(managerScene, LoadSceneMode.Additive);
            yield return SceneManager.LoadSceneAsync(cameraScene, LoadSceneMode.Additive);

            foreach (SceneField scene in subScenes)
            {
                yield return SceneManager.LoadSceneAsync(scene, LoadSceneMode.Additive);
            }
        }
    }
}

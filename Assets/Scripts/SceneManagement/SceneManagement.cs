using System.Collections.Generic;
using System.Linq;
using UnityEngine;

//public class SceneManagement
//{
//    ///// <summary>
//    ///// Allows to access a dictionary of scenes implictly by <see cref="int"/> and <see cref="string"/>. Needs testing
//    ///// </summary>
//    //private struct SceneAssociator : IEquatable<SceneAssociator>
//    //{
//    //    public readonly int buildIndex;
//    //    public readonly string sceneName;

//    //    SceneAssociator(Scene scene)
//    //    {
//    //        buildIndex = scene.buildIndex;
//    //        sceneName = scene.name;
//    //    }
//    //    SceneAssociator(int buildIndex)
//    //    {
//    //        this.buildIndex = buildIndex;
//    //        sceneName = null;
//    //    }
//    //    SceneAssociator(string sceneName)
//    //    {
//    //        buildIndex = -1;
//    //        this.sceneName = sceneName;
//    //    }

//    //    public bool Equals(SceneAssociator other)
//    //    {
//    //        if (!(buildIndex == -1 || other.buildIndex == -1))
//    //        {
//    //            return buildIndex == other.buildIndex;
//    //        }

//    //        if (!(string.IsNullOrWhiteSpace(sceneName) || string.IsNullOrWhiteSpace(other.sceneName)))
//    //        {
//    //            return sceneName == other.sceneName;
//    //        }

//    //        return false;
//    //    }

//    //    public static implicit operator SceneAssociator(Scene scene) => new SceneAssociator(scene);
//    //    public static implicit operator int(SceneAssociator sa) => sa.buildIndex;
//    //    public static implicit operator SceneAssociator(int i) => new SceneAssociator(i);
//    //    public static implicit operator string(SceneAssociator sa) => sa.sceneName;
//    //    public static implicit operator SceneAssociator(string s) => new SceneAssociator(s);

//    //    public override int GetHashCode()
//    //    {
//    //        if (buildIndex != -1) return buildIndex.GetHashCode();
//    //        if (!(sceneName is null)) return sceneName.GetHashCode();
//    //        return base.GetHashCode();
//    //    }
//    //}
//    //private struct LoadedSceneAssociator
//    //{
//    //    public readonly SceneAssociator associator;



//    //    public LoadedSceneAssociator(Scene scene)
//    //    {
//    //        associator = scene;
//    //    }
//    //}

//    public Scene[] BuildScenes { get; }
//    readonly Dictionary<SceneAssociator, Scene> Scenes = null;

//    public SceneManagement()
//    {
//        BuildScenes = GetBuildScenes();
//        Scenes = BuildSceneAssociators();
//    }

//    private Scene[] GetBuildScenes()
//    {
//        Scene[] scenes = new Scene[SceneManager.sceneCount];
//        for (int i = 0; i < scenes.Length; i++)
//        {
//            scenes[i] = SceneManager.GetSceneAt(i);
//        }
//        return scenes;
//    }
//    private Dictionary<SceneAssociator, Scene> BuildSceneAssociators()
//    {
//        var scenes = new Dictionary<SceneAssociator, Scene>();
//        foreach (Scene scene in BuildScenes)
//        {
//            scenes.Add(scene, scene);
//        }
//        return scenes;
//    }

//    public AsyncOperation LoadSceneAsync(int buildIndex, bool additive = false)
//    {
//        return LoadSceneAsync(Scenes[buildIndex], additive);
//    }
//    public AsyncOperation LoadSceneAsync(string sceneName, bool additive = false)
//    {
//        return LoadSceneAsync(Scenes[sceneName], additive);
//    }
//    private AsyncOperation LoadSceneAsync(Scene scene, bool additive)
//    {
//        return SceneManager.LoadSceneAsync(scene.buildIndex, additive ? LoadSceneMode.Additive : LoadSceneMode.Single);
//    }

//    public AsyncOperation UnloadSceneAsync(int buildIndex)
//    {
//        return null;
//    }
//    public AsyncOperation UnloadSceneAsync(string sceneName)
//    {
//        return null;
//    }
//}

namespace Nugget.Scripts.SceneManagement
{
    public static class SceneManagement
    {
        private static readonly Dictionary<string, SceneContainerAsset> activeScenes = new Dictionary<string, SceneContainerAsset>();

        /// <summary>
        /// Get all active scenes by their name in the order they were loaded
        /// </summary>
        public static string[] ActiveScenesByName { get => activeScenes.Keys.ToArray(); }

        public static AsyncOperation LoadSceneAsync(SceneField scene)
        {
            return null;
        }
        public static AsyncOperation LoadSceneByAssetAsync(SceneContainerAsset sceneAsset)
        {
            return null;
        }

        public static AsyncOperation UnloadSceneAsync(SceneField scene)
        {
            return null;
        }
        public static AsyncOperation UnloadSceneByAssetAsync(SceneContainerAsset scene)
        {
            return null;
        }
    }
}
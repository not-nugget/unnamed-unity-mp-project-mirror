using Nugget.Project.Scripts.Scenes;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TestSceneLoad : MonoBehaviour
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
}

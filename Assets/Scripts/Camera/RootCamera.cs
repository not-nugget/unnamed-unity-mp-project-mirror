using Cinemachine;
using Sirenix.OdinInspector;
using System;
using System.Linq;
using UnityEngine;

namespace Nugget.Project.Scripts.Camera
{
    [RequireComponent(typeof(UnityEngine.Camera)), ExecuteAlways]
    public class RootCamera : MonoBehaviour
    {
        /// <summary>
        /// The main <see cref="UnityEngine.Camera"/> attached to this <see cref="RootCamera"/> object
        /// </summary>
        public UnityEngine.Camera Main => main;

        /// <summary>
        /// A collection of every child <see cref="UnityEngine.Camera"/> this <see cref="RootCamera"/> is the parent of. Includes disabled cameras
        /// </summary>
        public UnityEngine.Camera[] Children => children;

        [ReadOnly, TitleGroup("Root Camera Info")]
        [SerializeField] private UnityEngine.Camera main = null;

        [ReadOnly, TitleGroup("Root Camera Info")]
        [SerializeField] private UnityEngine.Camera[] children = null;

        private void Awake()
        {
            main = GetComponent<UnityEngine.Camera>();
            children = GetComponentsInChildren<UnityEngine.Camera>(true).Where(cam => cam != main).ToArray();
        }

        //TODO this is something we will control on a per-virtual camera basis i believe
        //public void SetPositionAndRotation(Vector3 position, Quaternion rotation)
        //{
        //    transform.SetPositionAndRotation(position, rotation);
        //}

        //If we are in the editor, we want to ensure the children are completely up to date. In a build, it is safe to assume that all children will be assigned to this object on awake. This is not the case in the editor
#if UNITY_EDITOR
        private void Update()
        {
            children = GetComponentsInChildren<UnityEngine.Camera>(true).Where(cam => cam != main).ToArray();

            foreach (var camera in children)
            {
                camera.fieldOfView = main.fieldOfView;
                camera.nearClipPlane = main.nearClipPlane;
            }
        }
#endif
    }
}

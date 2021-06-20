using Sirenix.OdinInspector;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Project.Scripts.Camera
{
    public class CameraController : MonoBehaviour
    {
        [Flags]
        enum CameraStateSynchronizationOptions : byte
        {
            None = 0,
            Position = 1,
            Rotation = 2,
            All = Position | Rotation,
        }

        [Tooltip("Should the primary camera auto-populate with the main camera on awake?")]
        [SerializeField] private bool useMainCamera = false;

        [Tooltip("Primary render camera. Typically the Main Camera (Camera.Main)"), HideIf("useMainCamera")]
        [SerializeField] private UnityEngine.Camera primaryCamera = null;

        [Tooltip("An arbitrary number of secondary cameras. Typically these cameras will be responsible for rendering a single layer or detail within the scene")]
        [SerializeField] private UnityEngine.Camera[] secondaryCameras = null;

        [Tooltip("How should this camera controller synchronize all the provided cameras?"), DisableInPlayMode]
        [SerializeField] private CameraStateSynchronizationOptions synchronizationOptions = CameraStateSynchronizationOptions.All;

        [Tooltip("The transform to synchronize the cameras based on. If this is null, will synchronize based on the main camera")]
        [SerializeField] private Transform synchronizeTransform = null;

        Action perFrameProcess = null;

        private void Awake() 
        {
            if (useMainCamera) primaryCamera = UnityEngine.Camera.main;
            if (secondaryCameras is null) secondaryCameras = new UnityEngine.Camera[0];

            Action pos = null, rot = null;
            if (synchronizationOptions.HasFlag(CameraStateSynchronizationOptions.Position)) pos = SynchronizePostions;
            if (synchronizationOptions.HasFlag(CameraStateSynchronizationOptions.Rotation)) rot = SynchronizeRotations;

            perFrameProcess = () => { pos?.Invoke(); rot?.Invoke(); }; //this is definitely over-engineered but hey it works
        }

        private void Update() => perFrameProcess();

        void SynchronizePostions()
        {
            Transform transformRoot = synchronizeTransform == null ? primaryCamera.transform : synchronizeTransform;

            primaryCamera.transform.position = transformRoot.position;
            foreach (UnityEngine.Camera camera in secondaryCameras) camera.transform.position = transformRoot.position;
        }
        void SynchronizeRotations()
        {
            Transform transformRoot = synchronizeTransform == null ? primaryCamera.transform : synchronizeTransform;

            primaryCamera.transform.rotation = transformRoot.rotation;
            foreach (UnityEngine.Camera camera in secondaryCameras) camera.transform.rotation = transformRoot.rotation;
        }

        public void SetSynchronizeTransform(Transform transform) => synchronizeTransform = transform;
    }
}
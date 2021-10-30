using Mirror;
using Nugget.Scripts.Camera;
using Nugget.Scripts.Player.Input;
using Sirenix.OdinInspector;
using UnityEngine;
using Zenject;

namespace Nugget.Scripts.Player
{
    /// <summary>
    /// Responsible for controlling the player in the world. Stores all necessary information and ensures the local controller instances are in sync with the
    /// instances the server is replicating
    /// </summary>
    public class PlayerController : NetworkBehaviour
    {
        #region Serialized Fields
        [SerializeField, Tooltip("Scriptable Object Asset to use as an input provider for this player"), Required]
        private InputProviderBase inputProviderAsset = null;
        #endregion

        #region Private Fields
        //private PlayerVisuals modelTransform;
        private PlayerCameraController cameraController;
        private CharacterController characterController;
        #endregion

        //Currently I removed the dependency, but there will no doubt be other injections in the future so it is smart to keep this bad boy around
        //#region Injection
        //[Inject]
        //public void Inject()
        //{
        //    //this.cameraController = cameraController;
        //}
        //#endregion

        #region Unity Messages
        private void Awake()
        {
            cameraController = GetComponentInChildren<PlayerCameraController>();
            characterController = GetComponent<CharacterController>();
        }
        #endregion

        #region Mirror overrides
        public override void OnStartLocalPlayer()
        {
            //inputProvder = inputProviderAsset;
        }
        #endregion

        #region Factory Subclass (Necessary for runtime injection)
        public class Factory : PlaceholderFactory<PlayerController> { }
        #endregion
    }
}
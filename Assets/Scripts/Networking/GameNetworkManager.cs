using Mirror;
using Nugget.Project.Scripts.Player;
using System;
using UnityEngine;
using Zenject;

namespace Nugget.Project.Scripts.Networking
{

    /*
        Documentation: https://mirror-networking.com/docs/Components/NetworkManager.html
        API Reference: https://mirror-networking.com/docs/api/Mirror.NetworkManager.html
    */

    /// <summary>
    /// Custom network manager. Intended to be used with Injection
    /// </summary>
    public class GameNetworkManager : NetworkManager
    {
        #region Events
        /// <summary>
        /// Invoked whenever the running state of the manager changes. Will always be invoked first
        /// </summary>
        public event Action<bool> OnRunningStateChanged;

        /// <summary>
        /// Invoked whenever the server state of the manager changes. Will always be invoked after the Running state changes
        /// </summary>
        public event Action<bool> OnServerStateChanged;

        /// <summary>
        /// Invoked whenever the host state of the manager changes. Will always be invoked after the Sever state changes
        /// </summary>
        public event Action<bool> OnHostStateChanged;

        /// <summary>
        /// Invoked whenever the host state of the manager changes. Will always be invoked after the Host state changes if this client is acting as the host
        /// </summary>
        public event Action<bool> OnClientStateChanged;
        #endregion

        #region Public Properties
        /// <summary>
        /// Is this manager running?
        /// </summary>
        public bool IsRunning { get => isRunning; private set { isRunning = value; OnRunningStateChanged?.Invoke(value); } }
        private bool isRunning = false;

        /// <summary>
        /// Is this running manager a server? Note: A manager can be a Server, Host and Client at the same time
        /// </summary>
        public bool IsServer { get => isServer; private set { isServer = value; OnServerStateChanged?.Invoke(value); } }
        private bool isServer = false;

        /// <summary>
        /// Is this running manager a server and client? Note: A manager can be a Server, Host and Client at the same time
        /// </summary>
        public bool IsHost { get => isHost; private set { isHost = value; OnHostStateChanged?.Invoke(value); } }
        private bool isHost = false;

        /// <summary>
        /// Is this running manager a client? Note: A manager can be a Server, Host and Client at the same time
        /// </summary>
        public bool IsClient { get => isClient; private set { isClient = value; OnClientStateChanged?.Invoke(value); } }
        private bool isClient = false;

        /// <summary>
        /// The number of times per second the server will update
        /// </summary>
        public int ServerTickRate { get => serverTickRate; }
        #endregion

        #region Private Fields
        private PlayerController.Factory playerFactory = null;
        #endregion

        #region Injection
        [Inject]
        public void Inject(PlayerController.Factory playerFactory)
        {
            this.playerFactory = playerFactory;
        }
        #endregion

        #region Unity Callbacks
        public override void OnValidate()
        {
            base.OnValidate();
        }

        /// <summary>
        /// Runs on both Server and Client
        /// Networking is NOT initialized when this fires
        /// </summary>
        public override void Awake()
        {
            base.Awake();
        }

        /// <summary>
        /// Runs on both Server and Client
        /// Networking is NOT initialized when this fires
        /// </summary>
        public override void Start()
        {
            base.Start();
        }

        /// <summary>
        /// Runs on both Server and Client
        /// </summary>
        public override void LateUpdate()
        {
            base.LateUpdate();
        }

        /// <summary>
        /// Runs on both Server and Client
        /// </summary>
        public override void OnDestroy()
        {
            base.OnDestroy();
        }
        #endregion

        #region Start & Stop
        /// <summary>
        /// Disable physics auto-simulation and match the physics timestep to the server tickrate for any server. Additionally sets the target application framerate for a headless server
        /// </summary>
        public override void ConfigureServerFrameRate()
        {
            if (isServer) //If this network manager is acting as a server, we need to disable auto-simulation and make sure the physics timestep matches the tick rate. Otherwise, do nothing.
            {
#if UNITY_SERVER
            Application.targetFrameRate = serverTickRate;
#endif
                Time.fixedDeltaTime = 1 / serverTickRate;
                Physics.autoSimulation = false;
            }
        }

        /// <summary>
        /// called when quitting the application by closing the window / pressing stop in the editor
        /// </summary>
        public override void OnApplicationQuit()
        {
            base.OnApplicationQuit();
        }
        #endregion

        #region Scene Management
        /// <summary>
        /// This causes the server to switch scenes and sets the networkSceneName.
        /// <para>Clients that connect to this server will automatically switch to this scene. This is called automatically if onlineScene or offlineScene are set, but it can be called from user code to switch scenes again while the game is in progress. This automatically sets clients to be not-ready. The clients must call NetworkClient.Ready() again to participate in the new scene.</para>
        /// </summary>
        /// <param name="newSceneName"></param>
        public override void ServerChangeScene(string newSceneName)
        {
            base.ServerChangeScene(newSceneName);
        }

        /// <summary>
        /// Called from ServerChangeScene immediately before SceneManager.LoadSceneAsync is executed
        /// <para>This allows server to do work / cleanup / prep before the scene changes.</para>
        /// </summary>
        /// <param name="newSceneName">Name of the scene that's about to be loaded</param>
        public override void OnServerChangeScene(string newSceneName) { }

        /// <summary>
        /// Called on the server when a scene is completed loaded, when the scene load was initiated by the server with ServerChangeScene().
        /// </summary>
        /// <param name="sceneName">The name of the new scene.</param>
        public override void OnServerSceneChanged(string sceneName) { }

        /// <summary>
        /// Called from ClientChangeScene immediately before SceneManager.LoadSceneAsync is executed
        /// <para>This allows client to do work / cleanup / prep before the scene changes.</para>
        /// </summary>
        /// <param name="newSceneName">Name of the scene that's about to be loaded</param>
        /// <param name="sceneOperation">Scene operation that's about to happen</param>
        /// <param name="customHandling">true to indicate that scene loading will be handled through overrides</param>
        public override void OnClientChangeScene(string newSceneName, SceneOperation sceneOperation, bool customHandling) { }

        /// <summary>
        /// Called on clients when a scene has completed loaded, when the scene load was initiated by the server.
        /// <para>Scene changes can cause player objects to be destroyed. The default implementation of OnClientSceneChanged in the NetworkManager is to add a player object for the connection if no player object exists.</para>
        /// </summary>
        /// <param name="conn">The network connection that the scene change message arrived on.</param>
        public override void OnClientSceneChanged(NetworkConnection conn)
        {
            base.OnClientSceneChanged(conn);
        }
        #endregion

        #region Server System Callbacks
        /// <summary>
        /// Called on the server when a new client connects.
        /// <para>Unity calls this on the Server when a Client connects to the Server. Use an override to tell the NetworkManager what to do when a client connects to the server.</para>
        /// </summary>
        /// <param name="conn">Connection from client.</param>
        public override void OnServerConnect(NetworkConnection conn) { }

        /// <summary>
        /// Called on the server when a client is ready.
        /// <para>The default implementation of this function calls NetworkServer.SetClientReady() to continue the network setup process.</para>
        /// </summary>
        /// <param name="conn">Connection from client.</param>
        public override void OnServerReady(NetworkConnection conn)
        {
            base.OnServerReady(conn);
        }

        /// <summary>
        /// Called on the server when a client adds a new player with ClientScene.AddPlayer.
        /// <para>The default implementation for this function creates a new player object from the playerPrefab.</para>
        /// </summary>
        /// <param name="conn">Connection from client.</param>
        public override void OnServerAddPlayer(NetworkConnection conn)
        {
            //base.OnServerAddPlayer(conn);

            //Because we are creating from a factory now, the created object will have it's dependencies injected
            GameObject player = playerFactory.Create().gameObject;
            player.name = player.name.Replace("(Clone)", $"[connId={conn.connectionId}]");
            NetworkServer.AddPlayerForConnection(conn, player);
        }

        /// <summary>
        /// Called on the server when a client disconnects.
        /// <para>This is called on the Server when a Client disconnects from the Server. Use an override to decide what should happen when a disconnection is detected.</para>
        /// </summary>
        /// <param name="conn">Connection from client.</param>
        public override void OnServerDisconnect(NetworkConnection conn)
        {
            base.OnServerDisconnect(conn);
        }
        #endregion

        #region Client System Callbacks
        /// <summary>
        /// Called on the client when connected to a server.
        /// <para>The default implementation of this function sets the client as ready and adds a player. Override the function to dictate what happens when the client connects.</para>
        /// </summary>
        /// <param name="conn">Connection to the server.</param>
        public override void OnClientConnect(NetworkConnection conn)
        {
            //base.OnClientConnect(conn);

            if (!clientLoadedScene)
            {
                if (!NetworkClient.ready) NetworkClient.Ready();

                NetworkClient.AddPlayer();
            }
        }

        /// <summary>
        /// Called on clients when disconnected from a server.
        /// <para>This is called on the client when it disconnects from the server. Override this function to decide what happens when the client disconnects.</para>
        /// </summary>
        /// <param name="conn">Connection to the server.</param>
        public override void OnClientDisconnect(NetworkConnection conn)
        {
            base.OnClientDisconnect(conn);
        }

        /// <summary>
        /// Called on clients when a servers tells the client it is no longer ready.
        /// <para>This is commonly used when switching scenes.</para>
        /// </summary>
        /// <param name="conn">Connection to the server.</param>
        public override void OnClientNotReady(NetworkConnection conn) { }
        #endregion

        #region Start & Stop Callbacks
        // Since there are multiple versions of StartServer, StartClient and StartHost, to reliably customize
        // their functionality, users would need override all the versions. Instead these callbacks are invoked
        // from all versions, so users only need to implement this one case.

        /// <summary>
        /// This is invoked when a host is started.
        /// <para>StartHost has multiple signatures, but they all cause this hook to be called.</para>
        /// </summary>
        public override void OnStartHost()
        {
            SetIsRunning(true);
            SetIsHost(true);
        }

        /// <summary>
        /// This is invoked when a server is started - including when a host is started.
        /// <para>StartServer has multiple signatures, but they all cause this hook to be called.</para>
        /// </summary>
        public override void OnStartServer()
        {
            SetIsRunning(true);
            SetIsServer(true);
        }

        /// <summary>
        /// This is invoked when the client is started.
        /// </summary>
        public override void OnStartClient()
        {
            SetIsRunning(true);
            SetIsClient(true);
        }

        //TODO this is dumb, hosts can potentially stop while server remains...rething this OnStop approach
        /// <summary>
        /// This is called when a host is stopped.
        /// </summary>
        public override void OnStopHost() => OnStop();

        /// <summary>
        /// This is called when a server is stopped - including when a host is stopped.
        /// </summary>
        public override void OnStopServer() => OnStop();

        /// <summary>
        /// This is called when a client is stopped.
        /// </summary>
        public override void OnStopClient() => OnStop();
        #endregion

        #region Private Methods
        private void SetIsRunning(bool value) => IsRunning = value;
        private void SetIsServer(bool value) => IsServer = value;
        private void SetIsHost(bool value) => IsHost = value;
        private void SetIsClient(bool value) => IsClient = value;
        private void OnStop() { SetIsRunning(false); SetIsServer(false); SetIsHost(false); SetIsClient(false); }
        #endregion
    }
}
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Project.Scripts.Game
{
    public static class Managers
    {
        static readonly Dictionary<Type, object> registerredManagers = new Dictionary<Type, object>();

        /// <summary>
        /// Register a manager for easy access throughout the code
        /// </summary>
        /// <typeparam name="T">Type of the manager to register</typeparam>
        /// <param name="instance">Manager instace to register</param>
        /// <param name="overwrite">If an instace exists, should you overwrite the existing value?</param>
        /// <returns>true if the manager is successfully added or overwritten, false if otherwise</returns>
        public static bool RegisterManager<T>(T instance, bool overwrite = false) where T : Manager
        {
            Type t = typeof(T);

            if (registerredManagers.ContainsKey(t))
            {
                if (overwrite)
                {
                    registerredManagers[t] = instance;
                    return true;
                }

                return false;
            }

            registerredManagers.Add(t, instance);
            return true;
        }

        /// <summary>
        /// Get a manager of a specific type
        /// </summary>
        /// <typeparam name="T">Type of the manager to retrieve</typeparam>
        /// <returns>The manager instance if it has been registered, otherwise null</returns>
        public static T GetManager<T>() where T : Manager
        {
            Type t = typeof(T);

            if (registerredManagers.ContainsKey(t)) return registerredManagers[t] as T;

            return null;
        }
    }

    //TODO could manually come up with a singleton implementation but could also take this opportunity to learn about DI
    public abstract class Manager : MonoBehaviour { }
}
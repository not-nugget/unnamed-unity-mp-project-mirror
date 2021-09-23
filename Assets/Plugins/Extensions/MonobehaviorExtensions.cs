using UnityEngine;

namespace Nugget.Project.Plugins.Extensions
{
    public static class MonobehaviorExtensions
    {
        /// <summary>
        /// Get a component on the root <see cref="GameObject"/> or create and add a new component should one not exist
        /// </summary>
        /// <typeparam name="T">Component type to search for or add</typeparam>
        /// <param name="go"><see cref="GameObject"/> to get the component from or add the component to</param>
        /// <returns>The existing or newly created component</returns>
        public static T GetOrAddComponent<T>(this GameObject go) where T : MonoBehaviour
        {
            if (go.TryGetComponent(out T component)) return component;

            return go.AddComponent<T>();
        }
    }
}

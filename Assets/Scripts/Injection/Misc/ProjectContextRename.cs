using UnityEngine;

namespace Nugget.Project.Scripts
{
    public class ProjectContextRename : MonoBehaviour
    {
        void Start()
        {
            gameObject.name = gameObject.name.Replace("(Clone)", string.Empty);
            Destroy(this);
        }
    }
}

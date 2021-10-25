using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Scripts.Camera
{
    public class CameraShake : MonoBehaviour
    {
        //IDEA::To execute a camera shake, one can pass in three different animation curves (one for the pitch over time, yaw over time, and roll over time) and using coroutines,
        //the camera can be rotated based on the evaluated curves. Perhaps create a CameraShakeProfile struct that defines a camera shake in its entirety that can be used to easily
        //execute a shake. These shake profiles should introduce noise parameters, and could even randomly swap which dimensions what curves represent dynamically so one single shake
        //can be functionally unique every time it is observed. Finally, research a method where a shake can be "rotated" or "oriented" in a specific direction so shakes arent completely
        //arbitrary and instead offer some visual indication of direction in the event a shake could be coming from an important source. Fun fun stuff to look into :)
    }
}

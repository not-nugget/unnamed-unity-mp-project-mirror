using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nugget.Project.Scripts.Camera
{
    public class CameraRecoil : MonoBehaviour
    {
        //IDEA::To execute a recoil pattern on the camera, we can pass in two animation curves (one for the X translation and one for the Y translation).
        //Additionally, a curve can be provided that specifies the return-to-origin behavior once the recoil is no longer being observed. NOTE: the origin location will change based on
        //the mouse input that is received while the recoil is being observed, so the camera controller should track it's rotation per frame based on INPUT DELTAS and not
        //the raw rotations of the camera itself i.e. rotations that are caused from shake or recoil or other external influences. Perhaps create a RecoilProfile class or struct that
        //defines either a functional recoil pattern or visual recoil behavior and can be observed, terminated, allowed to decay and then reobserved dynamically. These patterns should also
        //have noise so that each observation iteration isn't identical and they sport enough uniqueness such that they are not completely identical thorugh each observation
    }
}

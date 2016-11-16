# openvr_string

openvr_string extends the C++ [OpenVR](https://github.com/ValveSoftware/openvr) SDK by making it easy to convert OpenVR objects into strings.  These strings are helpful for logging, tracing and debugging your VR applications.

## Interfaces
* **openvr_string.h** defines the complete set of struct and enum to string conversion routines. This covers all openvr structs and enums.
* **openvr_string_std.h** provides a ***to_string()*** converter that works with all of the openvr structs and enums to make std::strings.
* **openvr_string_qstring.h** provides a ***to_qstring()*** converter that works with all of the openvr structs and enums to make Qt strings.

The **to_string** and **to_qstring** functions work by encoding into a buffer on the stack (falling back onto heap on failure).

## Example 1: Controller States 
Suppose you wanted to look at controller states with every frame.
```
for( vr::TrackedDeviceIndex_t unDevice = 0; unDevice < vr::k_unMaxTrackedDeviceCount; unDevice++ ) {
  vr::VRControllerState_t state;
  if( m_pHMD->GetControllerState( unDevice, &state ) )
    dprintf("Polled Controller %d State:\n%s", unDevice, to_string(state).c_str());
}
```
Will give you output like the following:

```
Polled Controller 3 State:
              unPacketNum: 1827
          ulButtonPressed: k_EButton_Axis0 (100000000)
          ulButtonTouched: k_EButton_Axis0 (100000000)
                 rAxis[0]: 0.065527 -0.724208
                 rAxis[1]: 0.000000 0.000000
                 rAxis[2]: 0.000000 0.000000
                 rAxis[3]: 0.000000 0.000000
                 rAxis[4]: 0.000000 0.000000
```

For a full example of this, build and enable the **g_print_polled_controller_state** of the following [hellovr_opengl](https://github.com/spayne/openvr_strings/tree/master/samples/hellovr_opengl) sample.

## Example 2: Events

Suppose you want to log all events processed by the following function:
```cpp
void CMainApplication::ProcessVREvent( const vr::VREvent_t & event )
```

There are nearly 20 different event subtypes, each with their own parameters and enums.  You could convert this by hand... or you could use the openvr_string std::string wrapper:
```
void CMainApplication::ProcessVREvent( const vr::VREvent_t & event )
{
	dprintf("%s\n", to_string(event).c_str());
}
```

And that's all it takes to get:
```
                 eventType: VREvent_TrackedCamera_ResumeVideoStream (1503)
        trackedDeviceIndex: 0
           eventAgeSeconds: 1.601475
                  dataType: None (0)

                 eventType: VREvent_ChaperoneUniverseHasChanged (801)
        trackedDeviceIndex: 0
           eventAgeSeconds: 0.000315
                  dataType: Chaperone (11)
       m_nPreviousUniverse: 0
        m_nCurrentUniverse: 579ad90c

                 eventType: VREvent_ButtonTouch (202)
        trackedDeviceIndex: 3
           eventAgeSeconds: 0.463968
                  dataType: Controller (2)
              eventDetails: k_EButton_Grip (2)
```

## Example 3: Compositor Frame Timing

As another example, output the the Compositor frame timing like this:
```cpp
Compositor_FrameTiming timing;
timing.m_nSize = sizeof(timing);
vr::VRCompositor()->GetFrameTiming(&timing);
dprintf("Frame Timing\n%s\n", to_string(timing).c_str());
```
To get:
```
Frame Timing
                           m_nSize: 176
                     m_nFrameIndex: 31137
               m_nNumFramePresents: 1
               m_nNumDroppedFrames: 0
              m_nReprojectionFlags: 0
           m_flSystemTimeInSeconds: 353.053773
                m_flPreSubmitGpuMs: 0.000000
               m_flPostSubmitGpuMs: 0.000000
              m_flTotalRenderGpuMs: 1.442112
         m_flCompositorRenderGpuMs: 1.242112
         m_flCompositorRenderCpuMs: 0.401727
     m_flCompositorRenderIdleCpuMs: 7.827824
         m_flClientFrameIntervalMs: 0.000000
              m_flPresentCallCpuMs: 0.062197
           m_flWaitForPresentCpuMs: 0.007211
                 m_flSubmitFrameMs: 0.000000
          m_flWaitGetPosesCalledMs: 0.000000
               m_flNewPosesReadyMs: -3.017913
               m_flNewFrameReadyMs: 0.000000
       m_flCompositorUpdateStartMs: -3.016410
         m_flCompositorUpdateEndMs: -3.009500
       m_flCompositorRenderStartMs: -3.008898
                         m_HmdPose:
                 mDeviceToAbsoluteTracking: -0.195222 -0.973346 -0.120360 -0.042309
                                             0.654561 -0.037917 -0.755058  1.000905
                                             0.730369 -0.226187  0.644516  0.292073
                                 vVelocity: -0.001909 -0.001982 0.003239
                          vAngularVelocity: 0.040071 -0.028047 0.000863
                           eTrackingResult: TrackingResult_Running_OK (200)
                              bPoseIsValid: true
                        bDeviceIsConnected: true
   ```
   
         


## Implementation
* At the lowest level, the openvr_strings uses snprintf functions to write into buffers provided by the caller.  You can access these apis directly from the openvr_string.h header file.
* For enum conversions, Valve does provide some enum conversions for about 10 enums, in these cases their APIs are used. For the remainder custom generated enum code is included.
* The struct conversions are hand rolled and call down into the enum and snprintf encoders.
* **to_string** and **to_qstring** functions work by encode into a buffer on the stack before falling back onto heap.
 
There is no global state or heap allocated internally.  This means it's thread-safe and lighter weight than solutions that alloc from the heap.

## More Examples
The hellovr_opengl example and the tracked_camera_openvr_sample have been modified and included to show using the openvr_strings.

* [hellovr_opengl](https://github.com/spayne/openvr_strings/tree/master/samples/hellovr_opengl) now defines a set of global flags that turns on or off the level of logging desired for events, controller and render state.  It uses the std::string to_string conversion routines.
* [tracked_camera_openvr_sample](https://github.com/spayne/openvr_strings/tree/master/samples/tracked_camera_openvr_sample) has been modified to use the to_qstring conversion routines instead of the pre-existing Qt formatting for the frame header pose matrix, velocity and anggular velocities.

   

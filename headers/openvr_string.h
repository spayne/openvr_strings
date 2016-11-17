//
// openvr_string.h 
// 
//  * Function prototypes for the low-level enum->char* and struct->char* converters
//  * Use these to map into your Engine's string functions. 
//  * See also openvr_string_std.h and openvr_string_qstring.h for examples on how
//    to map to C++ string classes 
//  	
#pragma once
#include <openvr.h>

namespace openvr_string
{
	using namespace vr;
	uint32_t GetAsString(const VREvent_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Controller_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Mouse_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Scroll_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_TouchPadMove_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Notification_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Process_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Overlay_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Status_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Keyboard_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Ipd_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Chaperone_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Reserved_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_PerformanceTest_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_SeatedZeroPoseReset_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_Screenshot_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_ScreenshotProgress_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_ApplicationLaunch_t &e, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VREvent_EditingCameraSurface_t &e, VR_OUT_STRING() char *s, uint32_t n);


	uint32_t GetAsString(const HmdMatrix34_t h, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const HmdMatrix44_t h, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const HmdVector2_t v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const HmdVector3_t v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const HmdVector4_t v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const HmdColor_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const HmdQuad_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const HmdRect2_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const DistortionCoordinates_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const Texture_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const TrackedDevicePose_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VRTextureBounds_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const HiddenAreaMesh_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VRControllerAxis_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VRControllerState_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const Compositor_OverlaySettings &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const CameraVideoStreamFrameHeader_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const Compositor_FrameTiming &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const Compositor_CumulativeStats &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const NotificationBitmap_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VROverlayIntersectionParams_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VROverlayIntersectionResults_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const IntersectionMaskCircle_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const IntersectionMaskRectangle_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const VROverlayIntersectionMaskPrimitive_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const RenderModel_ComponentState_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const RenderModel_Vertex_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const RenderModel_TextureMap_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const RenderModel_t &v, VR_OUT_STRING() char *s, uint32_t n);
	uint32_t GetAsString(const RenderModel_ControllerMode_State_t &v, VR_OUT_STRING() char *s, uint32_t n);

	const char *EVRInitErrorToString(vr::EVRInitError e);
	const char *EVRTrackedCameraErrorToString(vr::EVRTrackedCameraError e);
	const char *EVRRenderModelErrorToString(vr::EVRRenderModelError e);
	const char *EVROverlayErrorToString(vr::EVROverlayError e);
	const char *EVRSettingsErrorToString(vr::EVRSettingsError e);
	const char *EVRApplicationErrorToString(vr::EVRApplicationError e);
	const char *EVRControllerAxisTypeToString(vr::EVRControllerAxisType e);
	const char *EVRButtonIdToString(vr::EVRButtonId e);
	const char *ETrackedPropertyErrorToString(vr::ETrackedPropertyError e);
	const char *EVREventTypeToString(vr::EVREventType e);

	const char *EVREyeToString(vr::EVREye e);
	const char *EGraphicsAPIConventionToString(vr::EGraphicsAPIConvention e);
	const char *EColorSpaceToString(vr::EColorSpace e);
	const char *ETrackingResultToString(vr::ETrackingResult e);
	const char *ETrackedControllerRoleToString(vr::ETrackedControllerRole e);
	const char *ETrackingUniverseOriginToString(vr::ETrackingUniverseOrigin e);
	const char *EVRSubmitFlagsToString(vr::EVRSubmitFlags e);
	const char *EVRStateToString(vr::EVRState e);
	const char *EDeviceActivityLevelToString(vr::EDeviceActivityLevel e);
	const char *EVRMouseButtonToString(vr::EVRMouseButton e);
	const char *EHiddenAreaMeshTypeToString(vr::EHiddenAreaMeshType e);
	const char *EVRControllerEventOutputTypeToString(vr::EVRControllerEventOutputType e);
	const char *ECollisionBoundsStyleToString(vr::ECollisionBoundsStyle e);
	const char *EVRApplicationTypeToString(vr::EVRApplicationType e);
	const char *EVRFirmwareErrorToString(vr::EVRFirmwareError e);
	const char *EVRScreenshotTypeToString(vr::EVRScreenshotType e);
	const char *EVRScreenshotPropertyFilenamesToString(vr::EVRScreenshotPropertyFilenames e);
	const char *EVRTrackedCameraFrameTypeToString(vr::EVRTrackedCameraFrameType e);
	const char *EVRApplicationPropertyToString(vr::EVRApplicationProperty e);
	const char *EVRApplicationTransitionStateToString(vr::EVRApplicationTransitionState e);
	const char *EChaperoneConfigFileToString(vr::EChaperoneConfigFile e);
	const char *EChaperoneImportFlagsToString(vr::EChaperoneImportFlags e);
	const char *VROverlayInputMethodToString(vr::VROverlayInputMethod e);
	const char *VROverlayTransformTypeToString(vr::VROverlayTransformType e);
	const char *VROverlayFlagsToString(vr::VROverlayFlags e);
	const char *EGamepadTextInputModeToString(vr::EGamepadTextInputMode e);
	const char *EGamepadTextInputLineModeToString(vr::EGamepadTextInputLineMode e);
	const char *EOverlayDirectionToString(vr::EOverlayDirection e);
	const char *EVROverlayIntersectionMaskPrimitiveTypeToString(vr::EVROverlayIntersectionMaskPrimitiveType e);
	const char *EVRComponentPropertyToString(vr::EVRComponentProperty e);
	const char *EVRNotificationTypeToString(vr::EVRNotificationType e);
	const char* ETrackedDeviceClassToString(vr::ETrackedDeviceClass e);
	const char* ETrackedDevicePropertyToString(vr::ETrackedDeviceProperty e);
	const char* EVRNotificationErrorToString(vr::EVRNotificationError e);
	const char* ChaperoneCalibrationStateToString(vr::ChaperoneCalibrationState e);
	const char* EVRCompositorErrorToString(vr::EVRCompositorError e);
	const char* EVRNotificationStyleToString(vr::EVRNotificationStyle e);
	const char* EVRScreenshotErrorToString(vr::EVRScreenshotError e);


	inline const char *GetAsString(vr::EVRInitError e) { return EVRInitErrorToString(e); }
	inline const char *GetAsString(vr::EVRTrackedCameraError e) { return EVRTrackedCameraErrorToString(e); }
	inline const char *GetAsString(vr::EVRRenderModelError e) { return EVRRenderModelErrorToString(e); }
	inline const char *GetAsString(vr::EVROverlayError e) { return EVROverlayErrorToString(e); }
	inline const char *GetAsString(vr::EVRSettingsError e) { return EVRSettingsErrorToString(e); }
	inline const char *GetAsString(vr::EVRApplicationError e) { return EVRApplicationErrorToString(e); }
	inline const char *GetAsString(vr::EVRControllerAxisType e) { return EVRControllerAxisTypeToString(e); }
	inline const char *GetAsString(vr::EVRButtonId e) { return EVRButtonIdToString(e); }
	inline const char *GetAsString(vr::ETrackedPropertyError e) { return ETrackedPropertyErrorToString(e); }
	inline const char *GetAsString(vr::EVREventType e) { return EVREventTypeToString(e); }

	inline const char *GetAsString(vr::ETrackedDeviceClass e) { return ETrackedDeviceClassToString(e); }
	inline const char *GetAsString(vr::ETrackedDeviceProperty e) { return ETrackedDevicePropertyToString(e); }
	inline const char *GetAsString(vr::EVRNotificationError e) { return EVRNotificationErrorToString(e); }
	inline const char *GetAsString(vr::ChaperoneCalibrationState e) { return ChaperoneCalibrationStateToString(e); }
	inline const char *GetAsString(vr::EVRCompositorError e) { return EVRCompositorErrorToString(e); }
	inline const char *GetAsString(vr::EVRNotificationStyle e) { return EVRNotificationStyleToString(e); }
	inline const char *GetAsString(vr::EVRScreenshotError e) { return EVRScreenshotErrorToString(e); }
	inline const char *GetAsString(vr::EVREye e) { return EVREyeToString(e); }
	inline const char *GetAsString(vr::EGraphicsAPIConvention e) { return EGraphicsAPIConventionToString(e); }
	inline const char *GetAsString(vr::EColorSpace e) { return EColorSpaceToString(e); }
	inline const char *GetAsString(vr::ETrackingResult e) { return ETrackingResultToString(e); }
	inline const char *GetAsString(vr::ETrackedControllerRole e) { return ETrackedControllerRoleToString(e); }
	inline const char *GetAsString(vr::ETrackingUniverseOrigin e) { return ETrackingUniverseOriginToString(e); }
	inline const char *GetAsString(vr::EVRSubmitFlags e) { return EVRSubmitFlagsToString(e); }
	inline const char *GetAsString(vr::EVRState e) { return EVRStateToString(e); }
	inline const char *GetAsString(vr::EDeviceActivityLevel e) { return EDeviceActivityLevelToString(e); }
	inline const char *GetAsString(vr::EVRMouseButton e) { return EVRMouseButtonToString(e); }
	inline const char *GetAsString(vr::EHiddenAreaMeshType e) { return EHiddenAreaMeshTypeToString(e); }
	inline const char *GetAsString(vr::EVRControllerEventOutputType e) { return EVRControllerEventOutputTypeToString(e); }
	inline const char *GetAsString(vr::ECollisionBoundsStyle e) { return ECollisionBoundsStyleToString(e); }
	inline const char *GetAsString(vr::EVRApplicationType e) { return EVRApplicationTypeToString(e); }
	inline const char *GetAsString(vr::EVRFirmwareError e) { return EVRFirmwareErrorToString(e); }
	inline const char *GetAsString(vr::EVRScreenshotType e) { return EVRScreenshotTypeToString(e); }
	inline const char *GetAsString(vr::EVRScreenshotPropertyFilenames e) { return EVRScreenshotPropertyFilenamesToString(e); }
	inline const char *GetAsString(vr::EVRTrackedCameraFrameType e) { return EVRTrackedCameraFrameTypeToString(e); }
	inline const char *GetAsString(vr::EVRApplicationProperty e) { return EVRApplicationPropertyToString(e); }
	inline const char *GetAsString(vr::EVRApplicationTransitionState e) { return EVRApplicationTransitionStateToString(e); }
	inline const char *GetAsString(vr::EChaperoneConfigFile e) { return EChaperoneConfigFileToString(e); }
	inline const char *GetAsString(vr::EChaperoneImportFlags e) { return EChaperoneImportFlagsToString(e); }
	inline const char *GetAsString(vr::VROverlayInputMethod e) { return VROverlayInputMethodToString(e); }
	inline const char *GetAsString(vr::VROverlayTransformType e) { return VROverlayTransformTypeToString(e); }
	inline const char *GetAsString(vr::VROverlayFlags e) { return VROverlayFlagsToString(e); }
	inline const char *GetAsString(vr::EGamepadTextInputMode e) { return EGamepadTextInputModeToString(e); }
	inline const char *GetAsString(vr::EGamepadTextInputLineMode e) { return EGamepadTextInputLineModeToString(e); }
	inline const char *GetAsString(vr::EOverlayDirection e) { return EOverlayDirectionToString(e); }
	inline const char *GetAsString(vr::EVROverlayIntersectionMaskPrimitiveType e) { return EVROverlayIntersectionMaskPrimitiveTypeToString(e); }
	inline const char *GetAsString(vr::EVRComponentProperty e) { return EVRComponentPropertyToString(e); }
	inline const char *GetAsString(vr::EVRNotificationType e) { return EVRNotificationTypeToString(e); }
};

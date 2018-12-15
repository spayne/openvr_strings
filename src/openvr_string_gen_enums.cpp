//========= Copyright Sean Payne (2018) ============//
//
// this file is auto generated.
//
// Convert enum to C-style strings.
//
//
//
#include <openvr.h>
using namespace vr;

namespace openvr_string
{
	const char *EVREyeToString(vr::EVREye e)
	{
		static const char * const EVREye_strings[] =
		{
		"Eye_Left","Eye_Right"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVREye_strings) / sizeof(EVREye_strings[0]))
			return nullptr;
		return EVREye_strings[offset];
	}

	const char *ETextureTypeToString(vr::ETextureType e)
	{
		static const char * const ETextureType_strings[] =
		{
		"TextureType_Invalid","TextureType_DirectX","TextureType_OpenGL","TextureType_Vulkan","TextureType_IOSurface","TextureType_DirectX12","TextureType_DXGISharedHandle","TextureType_Metal"
		};

		int offset = (int)e - (-1);
		if (offset < 0 || offset >= sizeof(ETextureType_strings) / sizeof(ETextureType_strings[0]))
			return nullptr;
		return ETextureType_strings[offset];
	}

	const char *EColorSpaceToString(vr::EColorSpace e)
	{
		switch (e)
		{
		case (ColorSpace_Auto): return "ColorSpace_Auto";
		case (ColorSpace_Gamma): return "ColorSpace_Gamma";
		case (ColorSpace_Linear): return "ColorSpace_Linear";
		default: return nullptr;
		}
	}

	static const vr::ETrackingResult ETrackingResult_check_table[] =
	{ TrackingResult_Running_OutOfRange,TrackingResult_Running_OK,TrackingResult_Calibrating_OutOfRange,TrackingResult_Calibrating_InProgress,TrackingResult_Fallback_RotationOnly,TrackingResult_Uninitialized, };

	static const char * const ETrackingResult_string_table[] =
	{ "TrackingResult_Running_OutOfRange","TrackingResult_Running_OK","TrackingResult_Calibrating_OutOfRange","TrackingResult_Calibrating_InProgress","TrackingResult_Fallback_RotationOnly","TrackingResult_Uninitialized", };

	const char* ETrackingResultToString(vr::ETrackingResult e)
	{
		static const unsigned char LUT[] =
		{
		  6, 5, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 4, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  3, 2, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  1, 0, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		  6, 6, 6, 6, 6, 6
		};
		int offset = LUT[(unsigned char)e];
		if (offset < (sizeof(ETrackingResult_check_table) / sizeof(ETrackingResult_check_table[0])) &&
			(e == ETrackingResult_check_table[offset]))
		{
			return ETrackingResult_string_table[offset];
		}
		return nullptr;
	}

	const char *ETrackedDeviceClassToString(vr::ETrackedDeviceClass e)
	{
		static const char * const ETrackedDeviceClass_strings[] =
		{
		"TrackedDeviceClass_Invalid","TrackedDeviceClass_HMD","TrackedDeviceClass_Controller","TrackedDeviceClass_GenericTracker","TrackedDeviceClass_TrackingReference","TrackedDeviceClass_DisplayRedirect","TrackedDeviceClass_Max"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(ETrackedDeviceClass_strings) / sizeof(ETrackedDeviceClass_strings[0]))
			return nullptr;
		return ETrackedDeviceClass_strings[offset];
	}

	const char *ETrackedControllerRoleToString(vr::ETrackedControllerRole e)
	{
		static const char * const ETrackedControllerRole_strings[] =
		{
		"TrackedControllerRole_Invalid","TrackedControllerRole_LeftHand","TrackedControllerRole_RightHand","TrackedControllerRole_OptOut","TrackedControllerRole_Treadmill"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(ETrackedControllerRole_strings) / sizeof(ETrackedControllerRole_strings[0]))
			return nullptr;
		return ETrackedControllerRole_strings[offset];
	}

	const char *ETrackingUniverseOriginToString(vr::ETrackingUniverseOrigin e)
	{
		static const char * const ETrackingUniverseOrigin_strings[] =
		{
		"TrackingUniverseSeated","TrackingUniverseStanding","TrackingUniverseRawAndUncalibrated"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(ETrackingUniverseOrigin_strings) / sizeof(ETrackingUniverseOrigin_strings[0]))
			return nullptr;
		return ETrackingUniverseOrigin_strings[offset];
	}

	static const vr::ETrackedDeviceProperty ETrackedDeviceProperty_check_table[] =
	{ Prop_NamedIconPathControllerLeftDeviceOff_String,Prop_DeviceCanPowerOff_Bool,Prop_ExpectedControllerCount_Int32,Prop_DeviceProvidesBatteryStatus_Bool,Prop_WillDriftInYaw_Bool,Prop_BlockServerShutdown_Bool,Prop_CameraFirmwareDescription_String,Prop_ImageBridgeFirmwareVersion_Uint64,Prop_NeverTracked_Bool,Prop_DriverRequestsApplicationPause_Bool,Prop_ParentDriver_Uint64,Prop_DisplayHiddenArea_Binary_Start,Prop_RadioVersion_Uint64,Prop_VRCVersion_Uint64,Prop_GraphicsAdapterLuid_Uint64,Prop_DisplayDebugMode_Bool,Prop_FPGAVersion_Uint64,Prop_FirmwareVersion_Uint64,Prop_DriverDirectModeSendsVsyncEvents_Bool,Prop_SecondsFromPhotonsToVblank_Float,Prop_HardwareRevision_Uint64,Prop_Firmware_ManualUpdateURL_String,Prop_DisplayMCImageData_Binary,Prop_DisplayMCImageNumChannels_Int32,Prop_Firmware_ManualUpdate_Bool,Prop_Firmware_UpdateAvailable_Bool,Prop_DisplayMCImageHeight_Int32,Prop_DisplayMCImageWidth_Int32,Prop_StatusDisplayTransform_Matrix34,Prop_DeviceBatteryPercentage_Float,Prop_DisplayAllowNightMode_Bool,Prop_DisplaySuppressed_Bool,Prop_DeviceIsCharging_Bool,Prop_DeviceIsWireless_Bool,Prop_ScreenshotVerticalFieldOfViewDegrees_Float,Prop_ScreenshotHorizontalFieldOfViewDegrees_Float,Prop_ConnectedWirelessDongle_String,Prop_AllWirelessDongleDescriptions_String,Prop_CameraCompatibilityMode_Int32,Prop_AudioFirmwareVersion_Uint64,Prop_HardwareRevision_String,Prop_TrackingFirmwareVersion_String,Prop_DisplayHardwareVersion_Uint64,Prop_DisplayBootloaderVersion_Uint64,Prop_ManufacturerName_String,Prop_RenderModelName_String,Prop_DisplayFPGAVersion_Uint64,Prop_CameraFirmwareVersion_Uint64,Prop_SerialNumber_String,Prop_ModelNumber_String,Prop_UserHeadToEyeDepthMeters_Float,Prop_LensCenterRightV_Float,Prop_TrackingSystemName_String,Prop_DriverRequestedMuraFeather_OuterBottom_Int32,Prop_LensCenterRightU_Float,Prop_ImuFactoryAccelerometerScale_Vector3,Prop_Identifiable_Bool,Prop_ImuFactoryAccelerometerBias_Vector3,Prop_AdditionalDeviceSettingsPath_String,Prop_ImuFactoryGyroScale_Vector3,Prop_CameraStreamFormat_Int32,Prop_DongleVersion_Uint64,Prop_FieldOfViewLeftDegrees_Float,Prop_ImuFactoryGyroBias_Vector3,Prop_CameraFrameLayout_Int32,Prop_ImuToHeadTransform_Matrix34,Prop_NumCameras_Int32,Prop_AudioBridgeFirmwareVersion_Uint64,Prop_InputProfilePath_String,Prop_MinimumIpdStepMeters_Float,Prop_RegisteredDeviceType_String,Prop_DriverRequestsReducedRendering_Bool,Prop_ResourceRoot_String,Prop_DriverIsDrawingControllers_Bool,Prop_ViveSystemButtonFixRequired_Bool,Prop_DistortionMeshResolution_Int32,Prop_Firmware_ForceUpdateRequired_Bool,Prop_CameraToHeadTransforms_Matrix34_Array,Prop_DriverVersion_String,Prop_DoNotApplyPrediction_Bool,Prop_HasCamera_Bool,Prop_NamedIconPathTrackingReferenceDeviceOff_String,Prop_DeviceClass_Int32,Prop_NamedIconPathControllerRightDeviceOff_String,Prop_Firmware_ProgrammingTarget_String,Prop_ExpectedTrackingReferenceCount_Int32,Prop_ContainsProximitySensor_Bool,Prop_DriverProvidedChaperonePath_String,Prop_CanUnifyCoordinateSystemWithHmd_Bool,Prop_LensCenterLeftV_Float,Prop_LensCenterLeftU_Float,Prop_DisplayGCImage_String,Prop_DisplayGCPrescale_Float,Prop_DisplayGCScale_Float,Prop_DisplayGCOffset_Float,Prop_DisplayGCType_Int32,Prop_CameraToHeadTransform_Matrix34,Prop_EdidProductID_Int32,Prop_DisplayGCBlackClamp_Float,Prop_DisplayMCImageRight_String,Prop_DisplayMCImageLeft_String,Prop_EdidVendorID_Int32,Prop_DisplayMCScale_Float,Prop_DisplayMCOffset_Float,Prop_DisplayMCType_Int32,Prop_IsOnDesktop_Bool,Prop_DisplayFirmwareVersion_Uint64,Prop_PreviousUniverseId_Uint64,Prop_CurrentUniverseId_Uint64,Prop_UserIpdMeters_Float,Prop_DisplayFrequency_Float,Prop_SecondsFromVsyncToPhotons_Float,Prop_ReportsTimeSinceVSync_Bool,Prop_ControllerRoleHint_Int32,Prop_Axis4Type_Int32,Prop_Axis3Type_Int32,Prop_Axis2Type_Int32,Prop_Axis1Type_Int32,Prop_Axis0Type_Int32,Prop_SupportedButtons_Uint64,Prop_AttachedDeviceId_String,Prop_ModeLabel_String,Prop_TrackingRangeMaximumMeters_Float,Prop_TrackingRangeMinimumMeters_Float,Prop_FieldOfViewBottomDegrees_Float,Prop_FieldOfViewTopDegrees_Float,Prop_FieldOfViewRightDegrees_Float,Prop_DriverRequestedMuraFeather_OuterTop_Int32,Prop_DriverRequestedMuraFeather_OuterRight_Int32,Prop_DriverRequestedMuraFeather_OuterLeft_Int32,Prop_DriverRequestedMuraFeather_InnerBottom_Int32,Prop_DriverRequestedMuraFeather_InnerTop_Int32,Prop_DriverRequestedMuraFeather_InnerRight_Int32,Prop_DriverRequestedMuraFeather_InnerLeft_Int32,Prop_DriverRequestedMuraCorrectionMode_Int32,Prop_NamedIconPathDeviceAlertLow_String,Prop_NamedIconPathDeviceStandby_String,Prop_NamedIconPathDeviceNotReady_String,Prop_NamedIconPathDeviceReadyAlert_String,Prop_NamedIconPathDeviceReady_String,Prop_NamedIconPathDeviceSearchingAlert_String,Prop_NamedIconPathDeviceSearching_String,Prop_NamedIconPathDeviceOff_String,Prop_IconPathName_String,Prop_HasSpatialAnchorsSupport_Bool,Prop_HasVirtualDisplayComponent_Bool,Prop_HasDriverDirectModeComponent_Bool,Prop_HasCameraComponent_Bool,Prop_HasControllerComponent_Bool,Prop_HasDisplayComponent_Bool,Prop_InstallPath_String,Prop_UserConfigPath_String,Prop_ControllerHandSelectionPriority_Int32,Prop_LegacyInputProfile_String,Prop_ControllerType_String,Prop_TrackedDeviceProperty_Max,Prop_VendorSpecific_Reserved_End,Prop_VendorSpecific_Reserved_Start,Prop_ParentContainer,Prop_DisplayHiddenArea_Binary_End,Prop_ConfigurationIncludesLighthouse20Features_Bool,Prop_Invalid, };

	static const char * const ETrackedDeviceProperty_string_table[] =
	{ "Prop_NamedIconPathControllerLeftDeviceOff_String","Prop_DeviceCanPowerOff_Bool","Prop_ExpectedControllerCount_Int32","Prop_DeviceProvidesBatteryStatus_Bool","Prop_WillDriftInYaw_Bool","Prop_BlockServerShutdown_Bool","Prop_CameraFirmwareDescription_String","Prop_ImageBridgeFirmwareVersion_Uint64","Prop_NeverTracked_Bool","Prop_DriverRequestsApplicationPause_Bool","Prop_ParentDriver_Uint64","Prop_DisplayHiddenArea_Binary_Start","Prop_RadioVersion_Uint64","Prop_VRCVersion_Uint64","Prop_GraphicsAdapterLuid_Uint64","Prop_DisplayDebugMode_Bool","Prop_FPGAVersion_Uint64","Prop_FirmwareVersion_Uint64","Prop_DriverDirectModeSendsVsyncEvents_Bool","Prop_SecondsFromPhotonsToVblank_Float","Prop_HardwareRevision_Uint64","Prop_Firmware_ManualUpdateURL_String","Prop_DisplayMCImageData_Binary","Prop_DisplayMCImageNumChannels_Int32","Prop_Firmware_ManualUpdate_Bool","Prop_Firmware_UpdateAvailable_Bool","Prop_DisplayMCImageHeight_Int32","Prop_DisplayMCImageWidth_Int32","Prop_StatusDisplayTransform_Matrix34","Prop_DeviceBatteryPercentage_Float","Prop_DisplayAllowNightMode_Bool","Prop_DisplaySuppressed_Bool","Prop_DeviceIsCharging_Bool","Prop_DeviceIsWireless_Bool","Prop_ScreenshotVerticalFieldOfViewDegrees_Float","Prop_ScreenshotHorizontalFieldOfViewDegrees_Float","Prop_ConnectedWirelessDongle_String","Prop_AllWirelessDongleDescriptions_String","Prop_CameraCompatibilityMode_Int32","Prop_AudioFirmwareVersion_Uint64","Prop_HardwareRevision_String","Prop_TrackingFirmwareVersion_String","Prop_DisplayHardwareVersion_Uint64","Prop_DisplayBootloaderVersion_Uint64","Prop_ManufacturerName_String","Prop_RenderModelName_String","Prop_DisplayFPGAVersion_Uint64","Prop_CameraFirmwareVersion_Uint64","Prop_SerialNumber_String","Prop_ModelNumber_String","Prop_UserHeadToEyeDepthMeters_Float","Prop_LensCenterRightV_Float","Prop_TrackingSystemName_String","Prop_DriverRequestedMuraFeather_OuterBottom_Int32","Prop_LensCenterRightU_Float","Prop_ImuFactoryAccelerometerScale_Vector3","Prop_Identifiable_Bool","Prop_ImuFactoryAccelerometerBias_Vector3","Prop_AdditionalDeviceSettingsPath_String","Prop_ImuFactoryGyroScale_Vector3","Prop_CameraStreamFormat_Int32","Prop_DongleVersion_Uint64","Prop_FieldOfViewLeftDegrees_Float","Prop_ImuFactoryGyroBias_Vector3","Prop_CameraFrameLayout_Int32","Prop_ImuToHeadTransform_Matrix34","Prop_NumCameras_Int32","Prop_AudioBridgeFirmwareVersion_Uint64","Prop_InputProfilePath_String","Prop_MinimumIpdStepMeters_Float","Prop_RegisteredDeviceType_String","Prop_DriverRequestsReducedRendering_Bool","Prop_ResourceRoot_String","Prop_DriverIsDrawingControllers_Bool","Prop_ViveSystemButtonFixRequired_Bool","Prop_DistortionMeshResolution_Int32","Prop_Firmware_ForceUpdateRequired_Bool","Prop_CameraToHeadTransforms_Matrix34_Array","Prop_DriverVersion_String","Prop_DoNotApplyPrediction_Bool","Prop_HasCamera_Bool","Prop_NamedIconPathTrackingReferenceDeviceOff_String","Prop_DeviceClass_Int32","Prop_NamedIconPathControllerRightDeviceOff_String","Prop_Firmware_ProgrammingTarget_String","Prop_ExpectedTrackingReferenceCount_Int32","Prop_ContainsProximitySensor_Bool","Prop_DriverProvidedChaperonePath_String","Prop_CanUnifyCoordinateSystemWithHmd_Bool","Prop_LensCenterLeftV_Float","Prop_LensCenterLeftU_Float","Prop_DisplayGCImage_String","Prop_DisplayGCPrescale_Float","Prop_DisplayGCScale_Float","Prop_DisplayGCOffset_Float","Prop_DisplayGCType_Int32","Prop_CameraToHeadTransform_Matrix34","Prop_EdidProductID_Int32","Prop_DisplayGCBlackClamp_Float","Prop_DisplayMCImageRight_String","Prop_DisplayMCImageLeft_String","Prop_EdidVendorID_Int32","Prop_DisplayMCScale_Float","Prop_DisplayMCOffset_Float","Prop_DisplayMCType_Int32","Prop_IsOnDesktop_Bool","Prop_DisplayFirmwareVersion_Uint64","Prop_PreviousUniverseId_Uint64","Prop_CurrentUniverseId_Uint64","Prop_UserIpdMeters_Float","Prop_DisplayFrequency_Float","Prop_SecondsFromVsyncToPhotons_Float","Prop_ReportsTimeSinceVSync_Bool","Prop_ControllerRoleHint_Int32","Prop_Axis4Type_Int32","Prop_Axis3Type_Int32","Prop_Axis2Type_Int32","Prop_Axis1Type_Int32","Prop_Axis0Type_Int32","Prop_SupportedButtons_Uint64","Prop_AttachedDeviceId_String","Prop_ModeLabel_String","Prop_TrackingRangeMaximumMeters_Float","Prop_TrackingRangeMinimumMeters_Float","Prop_FieldOfViewBottomDegrees_Float","Prop_FieldOfViewTopDegrees_Float","Prop_FieldOfViewRightDegrees_Float","Prop_DriverRequestedMuraFeather_OuterTop_Int32","Prop_DriverRequestedMuraFeather_OuterRight_Int32","Prop_DriverRequestedMuraFeather_OuterLeft_Int32","Prop_DriverRequestedMuraFeather_InnerBottom_Int32","Prop_DriverRequestedMuraFeather_InnerTop_Int32","Prop_DriverRequestedMuraFeather_InnerRight_Int32","Prop_DriverRequestedMuraFeather_InnerLeft_Int32","Prop_DriverRequestedMuraCorrectionMode_Int32","Prop_NamedIconPathDeviceAlertLow_String","Prop_NamedIconPathDeviceStandby_String","Prop_NamedIconPathDeviceNotReady_String","Prop_NamedIconPathDeviceReadyAlert_String","Prop_NamedIconPathDeviceReady_String","Prop_NamedIconPathDeviceSearchingAlert_String","Prop_NamedIconPathDeviceSearching_String","Prop_NamedIconPathDeviceOff_String","Prop_IconPathName_String","Prop_HasSpatialAnchorsSupport_Bool","Prop_HasVirtualDisplayComponent_Bool","Prop_HasDriverDirectModeComponent_Bool","Prop_HasCameraComponent_Bool","Prop_HasControllerComponent_Bool","Prop_HasDisplayComponent_Bool","Prop_InstallPath_String","Prop_UserConfigPath_String","Prop_ControllerHandSelectionPriority_Int32","Prop_LegacyInputProfile_String","Prop_ControllerType_String","Prop_TrackedDeviceProperty_Max","Prop_VendorSpecific_Reserved_End","Prop_VendorSpecific_Reserved_Start","Prop_ParentContainer","Prop_DisplayHiddenArea_Binary_End","Prop_ConfigurationIncludesLighthouse20Features_Bool","Prop_Invalid", };

	const char* ETrackedDevicePropertyToString(vr::ETrackedDeviceProperty e)
	{
		static const unsigned char LUT[] =
		{
		   74, 162, 162,   0,   1,  87,  85,   2,   0,  83,
		   81,  79,  77,  75,  73,   9,  71,  69,  67,   7,
		   65,  63,  59,  57,  55, 162, 160,  76, 162, 162,
		  162, 162, 162, 162, 162,  94,  93, 162, 162,  94,
		  162, 162, 132, 162, 162, 162, 162, 162, 162, 162,
		  162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
		  162, 162, 162, 162, 162, 162,  78, 162, 162,  77,
		  162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
		  162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
		  162, 162, 162,  78,  77,  76, 162, 162, 162, 162,
		  162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
		  162, 162, 162, 162, 162, 162, 162,  94,  93,  92,
		   91,  90,  89,  88,  87, 162, 162, 162, 162, 162,
		  162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
		  162, 136, 135, 134, 133, 132, 131, 130, 129, 128,
		  162, 162, 162, 162, 162, 162, 162, 134, 133, 132,
		  131, 130, 129, 128, 127,  53, 117, 116, 115, 114,
		  113, 112, 162, 162, 162, 162, 162, 162, 162, 162,
		  162, 162, 162, 162, 162, 162, 162, 162, 162,  41,
		   40,  39,  38,  37,  36,  35,  34, 162, 162, 162,
		  162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
		  162, 162, 162, 110, 109, 108, 107, 106, 105, 104,
		  103, 102, 101, 100,  99,  98,  97,  96,  95,  94,
		   93,  92,  91,  90,  89,  88,  87,  52,  49,  48,
		   45,   4,  44,  41,  40,  37,  36,  33,  32,  29,
		   28,  25,  24,  21,  20,  17,  16,  13,  12,  61,
			5
		};
		int offset = LUT[(unsigned char)(((unsigned int)e & 0xFF00) >> 8)] + LUT[(unsigned char)e + 5];
		if (offset < (sizeof(ETrackedDeviceProperty_check_table) / sizeof(ETrackedDeviceProperty_check_table[0])) &&
			(e == ETrackedDeviceProperty_check_table[offset]))
		{
			return ETrackedDeviceProperty_string_table[offset];
		}
		return nullptr;
	}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *ETrackedPropertyErrorToString(vr::ETrackedPropertyError e)
	{
		static const char * const ETrackedPropertyError_strings[] =
		{
		"TrackedProp_Success","TrackedProp_WrongDataType","TrackedProp_WrongDeviceClass","TrackedProp_BufferTooSmall","TrackedProp_UnknownProperty","TrackedProp_InvalidDevice","TrackedProp_CouldNotContactServer","TrackedProp_ValueNotProvidedByDevice","TrackedProp_StringExceedsMaximumLength","TrackedProp_NotYetAvailable","TrackedProp_PermissionDenied","TrackedProp_InvalidOperation","TrackedProp_CannotWriteToWildcards","TrackedProp_IPCReadFailure"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(ETrackedPropertyError_strings) / sizeof(ETrackedPropertyError_strings[0]))
			return nullptr;
		return ETrackedPropertyError_strings[offset];
	}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRSubmitFlagsToString(vr::EVRSubmitFlags e)
	{
		static const char * const EVRSubmitFlags_strings[] =
		{
		"Submit_Default","Submit_LensDistortionAlreadyApplied","Submit_GlRenderBuffer",nullptr,"Submit_Reserved",nullptr,nullptr,nullptr,"Submit_TextureWithPose",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"Submit_TextureWithDepth"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRSubmitFlags_strings) / sizeof(EVRSubmitFlags_strings[0]))
			return nullptr;
		return EVRSubmitFlags_strings[offset];
	}

	const char *EVRStateToString(vr::EVRState e)
	{
		static const char * const EVRState_strings[] =
		{
		"VRState_Undefined","VRState_Off","VRState_Searching","VRState_Searching_Alert","VRState_Ready","VRState_Ready_Alert","VRState_NotReady","VRState_Standby","VRState_Ready_Alert_Low"
		};

		int offset = (int)e - (-1);
		if (offset < 0 || offset >= sizeof(EVRState_strings) / sizeof(EVRState_strings[0]))
			return nullptr;
		return EVRState_strings[offset];
	}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

	static const vr::EVREventType EVREventType_check_table[] =
	{ VREvent_DualAnalog_Cancel,VREvent_DualAnalog_ModeSwitch2,VREvent_None,VREvent_OverlayGamepadFocusGained,VREvent_DualAnalog_ModeSwitch1,VREvent_HideKeyboard,VREvent_DualAnalog_Move,VREvent_ShowKeyboard,VREvent_DualAnalog_Untouch,VREvent_ImageLoaded,VREvent_DualAnalog_Touch,VREvent_RenderToast,VREvent_DualAnalog_Unpress,VREvent_ResetDashboard,VREvent_DualAnalog_Press,VREvent_OverlaySharedTextureChanged,VREvent_OverlayGamepadFocusLost,VREvent_DashboardOverlayCreated,VREvent_ConsoleClosed,VREvent_ConsoleOpened,VREvent_Input_BindingLoadFailed,VREvent_Input_HapticVibration,VREvent_Notification_Destroyed,VREvent_NullSectionSettingChanged,VREvent_Notification_BeginInteraction,VREvent_LighthouseSectionSettingChanged,VREvent_Notification_Hidden,VREvent_SteamVRSectionSettingChanged,VREvent_Notification_Shown,VREvent_EnableHomeAppSettingsHaveChanged,VREvent_ReloadOverlays,VREvent_TrackedCamera_EditingSurface,VREvent_SwitchGamepadFocus,VREvent_SubmitScreenshotToDashboard,VREvent_ScreenshotFailed,VREvent_SpatialAnchors_RequestDescriptorUpdate,VREvent_SpatialAnchors_RequestPoseUpdate,VREvent_ScreenshotTaken,VREvent_RequestScreenshot,VREvent_SpatialAnchors_DescriptorUpdated,VREvent_SpatialAnchors_PoseUpdated,VREvent_DashboardRequested,VREvent_DashboardThumbSelected,VREvent_DashboardDeactivated,VREvent_RoomViewShown,VREvent_DashboardActivated,VREvent_AudioSettingsHaveChanged,VREvent_OverlayHidden,VREvent_OverlayShown,VREvent_MCImageUpdated,VREvent_ImageFailed,VREvent_TrackedCamera_ResumeVideoStream,VREvent_TrackedCamera_PauseVideoStream,VREvent_TrackedCamera_StopVideoStream,VREvent_TrackedCamera_StartVideoStream,VREvent_ButtonUntouch,VREvent_ButtonTouch,VREvent_ButtonUnpress,VREvent_ButtonPress,VREvent_DriverRequestedQuit,VREvent_QuitAcknowledged,VREvent_QuitAborted_UserPrompt,VREvent_ProcessQuit,VREvent_Quit,VREvent_WebInterface_InstallDriverCompleted,VREvent_ScreenshotTriggered,VREvent_KeyboardDone,VREvent_KeyboardCharInput,VREvent_KeyboardClosed,VREvent_Input_TrackerActivated,VREvent_Input_ProgressUpdate,VREvent_Input_ActionManifestLoadFailed,VREvent_Input_ActionManifestReloaded,VREvent_Input_BindingLoadSuccessful,VREvent_ShowRenderModels,VREvent_HideRenderModels,VREvent_ActionBindingReloaded,VREvent_SceneApplicationUsingWrongGraphicsAdapter,VREvent_SceneApplicationSecondaryRenderingStarted,VREvent_InputFocusChanged,VREvent_SceneFocusChanged,VREvent_SceneApplicationChanged,VREvent_SceneFocusGained,VREvent_SceneFocusLost,VREvent_InputFocusReleased,VREvent_InputFocusCaptured,VREvent_StatusUpdate,VREvent_Compositor_ChaperoneBoundsHidden,VREvent_Compositor_ChaperoneBoundsShown,VREvent_Compositor_MirrorWindowHidden,VREvent_Compositor_MirrorWindowShown,VREvent_MessageOverlayCloseRequested,VREvent_MessageOverlay_Closed,VREvent_WirelessReconnect,VREvent_WirelessDisconnect,VREvent_PropertyChanged,VREvent_LensDistortionChanged,VREvent_WatchdogWakeUpRequested,VREvent_TrackedDeviceRoleChanged,VREvent_LeaveStandbyMode,VREvent_EnterStandbyMode,VREvent_IpdChanged,VREvent_TrackedDeviceUserInteractionEnded,VREvent_TrackedDeviceUserInteractionStarted,VREvent_TrackedDeviceUpdated,VREvent_TrackedDeviceDeactivated,VREvent_TrackedDeviceActivated,VREvent_LastKnownSectionSettingChanged,VREvent_TrackersSectionSettingChanged,VREvent_WebInterfaceSectionSettingChanged,VREvent_DashboardSectionSettingChanged,VREvent_PerfSectionSettingChanged,VREvent_KeyboardSectionSettingChanged,VREvent_NotificationsSectionSettingChanged,VREvent_UserInterfaceSectionSettingChanged,VREvent_PowerSettingsHaveChanged,VREvent_EnvironmentSettingsHaveChanged,VREvent_ModelSkinSettingsHaveChanged,VREvent_ReprojectionSettingHasChanged,VREvent_CameraSettingsHaveChanged,VREvent_BackgroundSettingHasChanged,VREvent_FirmwareUpdateFinished,VREvent_FirmwareUpdateStarted,VREvent_PerformanceTest_FidelityLevel,VREvent_PerformanceTest_DisableCapture,VREvent_PerformanceTest_EnableCapture,VREvent_OverlayFocusChanged,VREvent_TouchPadMove,VREvent_Scroll,VREvent_FocusLeave,VREvent_FocusEnter,VREvent_MouseButtonUp,VREvent_MouseButtonDown,VREvent_MouseMove,VREvent_ShowUI,VREvent_VendorSpecific_Reserved_Start,VREvent_ChaperoneFlushCache,VREvent_SeatedZeroPoseReset,VREvent_ChaperoneSettingsHaveChanged,VREvent_ChaperoneTempDataHasChanged,VREvent_ChaperoneUniverseHasChanged,VREvent_ChaperoneDataHasChanged,VREvent_VendorSpecific_Reserved_End,VREvent_ProcessDisconnected,VREvent_ProcessConnected,VREvent_ApplicationTransitionNewAppLaunchComplete,VREvent_ApplicationMimeTypeLoad,VREvent_ApplicationListUpdated,VREvent_ApplicationTransitionNewAppStarted,VREvent_ApplicationTransitionAborted,VREvent_ApplicationTransitionStarted,VREvent_RoomViewHidden,VREvent_PrimaryDashboardDeviceChanged,VREvent_ScreenshotProgressToDashboard, };

	static const char * const EVREventType_string_table[] =
	{ "VREvent_DualAnalog_Cancel","VREvent_DualAnalog_ModeSwitch2","VREvent_None","VREvent_OverlayGamepadFocusGained","VREvent_DualAnalog_ModeSwitch1","VREvent_HideKeyboard","VREvent_DualAnalog_Move","VREvent_ShowKeyboard","VREvent_DualAnalog_Untouch","VREvent_ImageLoaded","VREvent_DualAnalog_Touch","VREvent_RenderToast","VREvent_DualAnalog_Unpress","VREvent_ResetDashboard","VREvent_DualAnalog_Press","VREvent_OverlaySharedTextureChanged","VREvent_OverlayGamepadFocusLost","VREvent_DashboardOverlayCreated","VREvent_ConsoleClosed","VREvent_ConsoleOpened","VREvent_Input_BindingLoadFailed","VREvent_Input_HapticVibration","VREvent_Notification_Destroyed","VREvent_NullSectionSettingChanged","VREvent_Notification_BeginInteraction","VREvent_LighthouseSectionSettingChanged","VREvent_Notification_Hidden","VREvent_SteamVRSectionSettingChanged","VREvent_Notification_Shown","VREvent_EnableHomeAppSettingsHaveChanged","VREvent_ReloadOverlays","VREvent_TrackedCamera_EditingSurface","VREvent_SwitchGamepadFocus","VREvent_SubmitScreenshotToDashboard","VREvent_ScreenshotFailed","VREvent_SpatialAnchors_RequestDescriptorUpdate","VREvent_SpatialAnchors_RequestPoseUpdate","VREvent_ScreenshotTaken","VREvent_RequestScreenshot","VREvent_SpatialAnchors_DescriptorUpdated","VREvent_SpatialAnchors_PoseUpdated","VREvent_DashboardRequested","VREvent_DashboardThumbSelected","VREvent_DashboardDeactivated","VREvent_RoomViewShown","VREvent_DashboardActivated","VREvent_AudioSettingsHaveChanged","VREvent_OverlayHidden","VREvent_OverlayShown","VREvent_MCImageUpdated","VREvent_ImageFailed","VREvent_TrackedCamera_ResumeVideoStream","VREvent_TrackedCamera_PauseVideoStream","VREvent_TrackedCamera_StopVideoStream","VREvent_TrackedCamera_StartVideoStream","VREvent_ButtonUntouch","VREvent_ButtonTouch","VREvent_ButtonUnpress","VREvent_ButtonPress","VREvent_DriverRequestedQuit","VREvent_QuitAcknowledged","VREvent_QuitAborted_UserPrompt","VREvent_ProcessQuit","VREvent_Quit","VREvent_WebInterface_InstallDriverCompleted","VREvent_ScreenshotTriggered","VREvent_KeyboardDone","VREvent_KeyboardCharInput","VREvent_KeyboardClosed","VREvent_Input_TrackerActivated","VREvent_Input_ProgressUpdate","VREvent_Input_ActionManifestLoadFailed","VREvent_Input_ActionManifestReloaded","VREvent_Input_BindingLoadSuccessful","VREvent_ShowRenderModels","VREvent_HideRenderModels","VREvent_ActionBindingReloaded","VREvent_SceneApplicationUsingWrongGraphicsAdapter","VREvent_SceneApplicationSecondaryRenderingStarted","VREvent_InputFocusChanged","VREvent_SceneFocusChanged","VREvent_SceneApplicationChanged","VREvent_SceneFocusGained","VREvent_SceneFocusLost","VREvent_InputFocusReleased","VREvent_InputFocusCaptured","VREvent_StatusUpdate","VREvent_Compositor_ChaperoneBoundsHidden","VREvent_Compositor_ChaperoneBoundsShown","VREvent_Compositor_MirrorWindowHidden","VREvent_Compositor_MirrorWindowShown","VREvent_MessageOverlayCloseRequested","VREvent_MessageOverlay_Closed","VREvent_WirelessReconnect","VREvent_WirelessDisconnect","VREvent_PropertyChanged","VREvent_LensDistortionChanged","VREvent_WatchdogWakeUpRequested","VREvent_TrackedDeviceRoleChanged","VREvent_LeaveStandbyMode","VREvent_EnterStandbyMode","VREvent_IpdChanged","VREvent_TrackedDeviceUserInteractionEnded","VREvent_TrackedDeviceUserInteractionStarted","VREvent_TrackedDeviceUpdated","VREvent_TrackedDeviceDeactivated","VREvent_TrackedDeviceActivated","VREvent_LastKnownSectionSettingChanged","VREvent_TrackersSectionSettingChanged","VREvent_WebInterfaceSectionSettingChanged","VREvent_DashboardSectionSettingChanged","VREvent_PerfSectionSettingChanged","VREvent_KeyboardSectionSettingChanged","VREvent_NotificationsSectionSettingChanged","VREvent_UserInterfaceSectionSettingChanged","VREvent_PowerSettingsHaveChanged","VREvent_EnvironmentSettingsHaveChanged","VREvent_ModelSkinSettingsHaveChanged","VREvent_ReprojectionSettingHasChanged","VREvent_CameraSettingsHaveChanged","VREvent_BackgroundSettingHasChanged","VREvent_FirmwareUpdateFinished","VREvent_FirmwareUpdateStarted","VREvent_PerformanceTest_FidelityLevel","VREvent_PerformanceTest_DisableCapture","VREvent_PerformanceTest_EnableCapture","VREvent_OverlayFocusChanged","VREvent_TouchPadMove","VREvent_Scroll","VREvent_FocusLeave","VREvent_FocusEnter","VREvent_MouseButtonUp","VREvent_MouseButtonDown","VREvent_MouseMove","VREvent_ShowUI","VREvent_VendorSpecific_Reserved_Start","VREvent_ChaperoneFlushCache","VREvent_SeatedZeroPoseReset","VREvent_ChaperoneSettingsHaveChanged","VREvent_ChaperoneTempDataHasChanged","VREvent_ChaperoneUniverseHasChanged","VREvent_ChaperoneDataHasChanged","VREvent_VendorSpecific_Reserved_End","VREvent_ProcessDisconnected","VREvent_ProcessConnected","VREvent_ApplicationTransitionNewAppLaunchComplete","VREvent_ApplicationMimeTypeLoad","VREvent_ApplicationListUpdated","VREvent_ApplicationTransitionNewAppStarted","VREvent_ApplicationTransitionAborted","VREvent_ApplicationTransitionStarted","VREvent_RoomViewHidden","VREvent_PrimaryDashboardDeviceChanged","VREvent_ScreenshotProgressToDashboard", };

	const char* EVREventTypeToString(vr::EVREventType e)
	{
		static const unsigned char LUT[] =
		{
			1,   0,  15,  16,  50,  35,   2,  17,  23,  22,
		   19,  18, 138, 137,  29, 136, 119, 154, 154, 154,
		  115, 114, 113, 112, 111, 110, 109, 108, 154, 154,
		  154,  71, 125, 124, 123, 122, 121, 120, 154,  16,
		  154, 154, 154, 154, 133, 132, 131, 130, 129, 128,
		  127, 126,  30, 154, 154, 154, 154, 154, 154, 154,
		  154, 154, 154, 154, 123, 122, 121, 154, 154, 154,
		  154, 154, 154, 154, 154, 154,  72,  71,  71, 154,
		  154, 154, 104, 103, 102, 101, 100,  99,  13,  11,
			9,   7,  98,  97,  96,  95,  94,  93,  92,  91,
		  105, 104, 103, 102, 101, 100,  99,  98,  97,  96,
		   95,  94,  93,  92,  90,  89, 154, 154, 154, 154,
		   55,  54, 154, 154, 154, 154, 154, 154, 154, 154,
		   53,  52,  70, 154, 154, 154, 154, 154, 154, 154,
		  154, 154, 154, 154,  85,  84,  83,  82,  81,  80,
		   79,  78,  77,  76,  75,  74, 154, 154, 154, 154,
		  154, 154, 154, 154,  19,  18,  71,  70,  69,  68,
		   67, 154, 154, 154, 154, 154,  18,  17,  16, 154,
		  154, 154,  48, 154, 154, 154, 154, 154,  48,  47,
		   46,  45,  44, 154, 154, 154, 154, 154, 154, 154,
		   57,  56,  55,  54, 154, 154, 154, 154, 154, 154,
		  154, 154, 154, 154, 154, 154, 154, 154, 154, 154,
		   19,  18,  17,  16, 154, 154, 154, 154, 154, 154,
		  154, 154,  33, 154, 154, 154, 154, 154, 154, 154,
		  154, 154, 154, 154,  48,  47,  45,  43,  42,  41,
		   13,  11,   9,   7,   5,   3
		};
		int offset = LUT[(unsigned char)(((unsigned int)e & 0xFF00) >> 8)] + LUT[(unsigned char)e];
		if (offset < (sizeof(EVREventType_check_table) / sizeof(EVREventType_check_table[0])) &&
			(e == EVREventType_check_table[offset]))
		{
			return EVREventType_string_table[offset];
		}
		return nullptr;
	}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EDeviceActivityLevelToString(vr::EDeviceActivityLevel e)
	{
		static const char * const EDeviceActivityLevel_strings[] =
		{
		"k_EDeviceActivityLevel_Unknown","k_EDeviceActivityLevel_Idle","k_EDeviceActivityLevel_UserInteraction","k_EDeviceActivityLevel_UserInteraction_Timeout","k_EDeviceActivityLevel_Standby"
		};

		int offset = (int)e - (-1);
		if (offset < 0 || offset >= sizeof(EDeviceActivityLevel_strings) / sizeof(EDeviceActivityLevel_strings[0]))
			return nullptr;
		return EDeviceActivityLevel_strings[offset];
	}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRButtonIdToString(vr::EVRButtonId e)
	{
		static const char * const EVRButtonId_strings[] =
		{
		"k_EButton_System","k_EButton_ApplicationMenu","k_EButton_Grip","k_EButton_DPad_Left","k_EButton_DPad_Up","k_EButton_DPad_Right","k_EButton_DPad_Down","k_EButton_A",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"k_EButton_ProximitySensor","k_EButton_Axis0","k_EButton_Axis1","k_EButton_Axis2","k_EButton_Axis3","k_EButton_Axis4",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"k_EButton_Max"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRButtonId_strings) / sizeof(EVRButtonId_strings[0]))
			return nullptr;
		return EVRButtonId_strings[offset];
	}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRMouseButtonToString(vr::EVRMouseButton e)
	{
		static const char * const EVRMouseButton_strings[] =
		{
		"VRMouseButton_Left","VRMouseButton_Right",nullptr,"VRMouseButton_Middle"
		};

		int offset = (int)e - (1);
		if (offset < 0 || offset >= sizeof(EVRMouseButton_strings) / sizeof(EVRMouseButton_strings[0]))
			return nullptr;
		return EVRMouseButton_strings[offset];
	}

	const char *EDualAnalogWhichToString(vr::EDualAnalogWhich e)
	{
		static const char * const EDualAnalogWhich_strings[] =
		{
		"k_EDualAnalog_Left","k_EDualAnalog_Right"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EDualAnalogWhich_strings) / sizeof(EDualAnalogWhich_strings[0]))
			return nullptr;
		return EDualAnalogWhich_strings[offset];
	}

	const char *EShowUITypeToString(vr::EShowUIType e)
	{
		static const char * const EShowUIType_strings[] =
		{
		"ShowUI_ControllerBinding","ShowUI_ManageTrackers","ShowUI_QuickStart"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EShowUIType_strings) / sizeof(EShowUIType_strings[0]))
			return nullptr;
		return EShowUIType_strings[offset];
	}

	const char *EVRInputErrorToString(vr::EVRInputError e)
	{
		static const char * const EVRInputError_strings[] =
		{
		"VRInputError_None","VRInputError_NameNotFound","VRInputError_WrongType","VRInputError_InvalidHandle","VRInputError_InvalidParam","VRInputError_NoSteam","VRInputError_MaxCapacityReached","VRInputError_IPCError","VRInputError_NoActiveActionSet","VRInputError_InvalidDevice","VRInputError_InvalidSkeleton","VRInputError_InvalidBoneCount","VRInputError_InvalidCompressedData","VRInputError_NoData","VRInputError_BufferTooSmall","VRInputError_MismatchedActionManifest","VRInputError_MissingSkeletonData","VRInputError_InvalidBoneIndex"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRInputError_strings) / sizeof(EVRInputError_strings[0]))
			return nullptr;
		return EVRInputError_strings[offset];
	}

	const char *EVRSpatialAnchorErrorToString(vr::EVRSpatialAnchorError e)
	{
		static const char * const EVRSpatialAnchorError_strings[] =
		{
		"VRSpatialAnchorError_Success","VRSpatialAnchorError_Internal","VRSpatialAnchorError_UnknownHandle","VRSpatialAnchorError_ArrayTooSmall","VRSpatialAnchorError_InvalidDescriptorChar","VRSpatialAnchorError_NotYetAvailable","VRSpatialAnchorError_NotAvailableInThisUniverse","VRSpatialAnchorError_PermanentlyUnavailable","VRSpatialAnchorError_WrongDriver","VRSpatialAnchorError_DescriptorTooLong","VRSpatialAnchorError_Unknown","VRSpatialAnchorError_NoRoomCalibration","VRSpatialAnchorError_InvalidArgument","VRSpatialAnchorError_UnknownDriver"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRSpatialAnchorError_strings) / sizeof(EVRSpatialAnchorError_strings[0]))
			return nullptr;
		return EVRSpatialAnchorError_strings[offset];
	}

	const char *EHiddenAreaMeshTypeToString(vr::EHiddenAreaMeshType e)
	{
		static const char * const EHiddenAreaMeshType_strings[] =
		{
		"k_eHiddenAreaMesh_Standard","k_eHiddenAreaMesh_Inverse","k_eHiddenAreaMesh_LineLoop","k_eHiddenAreaMesh_Max"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EHiddenAreaMeshType_strings) / sizeof(EHiddenAreaMeshType_strings[0]))
			return nullptr;
		return EHiddenAreaMeshType_strings[offset];
	}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRControllerAxisTypeToString(vr::EVRControllerAxisType e)
	{
		static const char * const EVRControllerAxisType_strings[] =
		{
		"k_eControllerAxis_None","k_eControllerAxis_TrackPad","k_eControllerAxis_Joystick","k_eControllerAxis_Trigger"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRControllerAxisType_strings) / sizeof(EVRControllerAxisType_strings[0]))
			return nullptr;
		return EVRControllerAxisType_strings[offset];
	}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRControllerEventOutputTypeToString(vr::EVRControllerEventOutputType e)
	{
		static const char * const EVRControllerEventOutputType_strings[] =
		{
		"ControllerEventOutput_OSEvents","ControllerEventOutput_VREvents"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRControllerEventOutputType_strings) / sizeof(EVRControllerEventOutputType_strings[0]))
			return nullptr;
		return EVRControllerEventOutputType_strings[offset];
	}

	const char *ECollisionBoundsStyleToString(vr::ECollisionBoundsStyle e)
	{
		static const char * const ECollisionBoundsStyle_strings[] =
		{
		"COLLISION_BOUNDS_STYLE_BEGINNER","COLLISION_BOUNDS_STYLE_INTERMEDIATE","COLLISION_BOUNDS_STYLE_SQUARES","COLLISION_BOUNDS_STYLE_ADVANCED","COLLISION_BOUNDS_STYLE_NONE","COLLISION_BOUNDS_STYLE_COUNT"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(ECollisionBoundsStyle_strings) / sizeof(ECollisionBoundsStyle_strings[0]))
			return nullptr;
		return ECollisionBoundsStyle_strings[offset];
	}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVROverlayErrorToString(vr::EVROverlayError e)
	{
		static const char * const EVROverlayError_strings[] =
		{
		"VROverlayError_None",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VROverlayError_UnknownOverlay","VROverlayError_InvalidHandle","VROverlayError_PermissionDenied","VROverlayError_OverlayLimitExceeded","VROverlayError_WrongVisibilityType","VROverlayError_KeyTooLong","VROverlayError_NameTooLong","VROverlayError_KeyInUse","VROverlayError_WrongTransformType","VROverlayError_InvalidTrackedDevice","VROverlayError_InvalidParameter","VROverlayError_ThumbnailCantBeDestroyed","VROverlayError_ArrayTooSmall","VROverlayError_RequestFailed","VROverlayError_InvalidTexture","VROverlayError_UnableToLoadFile","VROverlayError_KeyboardAlreadyInUse","VROverlayError_NoNeighbor",nullptr,"VROverlayError_TooManyMaskPrimitives","VROverlayError_BadMaskPrimitive","VROverlayError_TextureAlreadyLocked","VROverlayError_TextureLockCapacityReached","VROverlayError_TextureNotLocked"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVROverlayError_strings) / sizeof(EVROverlayError_strings[0]))
			return nullptr;
		return EVROverlayError_strings[offset];
	}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRApplicationTypeToString(vr::EVRApplicationType e)
	{
		static const char * const EVRApplicationType_strings[] =
		{
		"VRApplication_Other","VRApplication_Scene","VRApplication_Overlay","VRApplication_Background","VRApplication_Utility","VRApplication_VRMonitor","VRApplication_SteamWatchdog","VRApplication_Bootstrapper","VRApplication_WebHelper","VRApplication_Max"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRApplicationType_strings) / sizeof(EVRApplicationType_strings[0]))
			return nullptr;
		return EVRApplicationType_strings[offset];
	}

	const char *EVRFirmwareErrorToString(vr::EVRFirmwareError e)
	{
		static const char * const EVRFirmwareError_strings[] =
		{
		"VRFirmwareError_None","VRFirmwareError_Success","VRFirmwareError_Fail"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRFirmwareError_strings) / sizeof(EVRFirmwareError_strings[0]))
			return nullptr;
		return EVRFirmwareError_strings[offset];
	}

	const char *EVRNotificationErrorToString(vr::EVRNotificationError e)
	{
		switch (e)
		{
		case (VRNotificationError_OK): return "VRNotificationError_OK";
		case (VRNotificationError_InvalidNotificationId): return "VRNotificationError_InvalidNotificationId";
		case (VRNotificationError_NotificationQueueFull): return "VRNotificationError_NotificationQueueFull";
		case (VRNotificationError_InvalidOverlayHandle): return "VRNotificationError_InvalidOverlayHandle";
		case (VRNotificationError_SystemWithUserValueAlreadyExists): return "VRNotificationError_SystemWithUserValueAlreadyExists";
		default: return nullptr;
		}
	}

	const char *EVRSkeletalMotionRangeToString(vr::EVRSkeletalMotionRange e)
	{
		switch (e)
		{
		case (VRSkeletalMotionRange_WithController): return "VRSkeletalMotionRange_WithController";
		case (VRSkeletalMotionRange_WithoutController): return "VRSkeletalMotionRange_WithoutController";
		default: return nullptr;
		}
	}

	const char *EVRSkeletalTrackingLevelToString(vr::EVRSkeletalTrackingLevel e)
	{
		static const char * const EVRSkeletalTrackingLevel_strings[] =
		{
		"VRSkeletalTracking_Estimated","VRSkeletalTracking_Partial","VRSkeletalTracking_Full","VRSkeletalTrackingLevel_Count"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRSkeletalTrackingLevel_strings) / sizeof(EVRSkeletalTrackingLevel_strings[0]))
			return nullptr;
		return EVRSkeletalTrackingLevel_strings[offset];
	}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

	static const vr::EVRInitError EVRInitError_check_table[] =
	{ VRInitError_VendorSpecific_WindowsNotInDevMode,VRInitError_VendorSpecific_UnableToConnectToOculusRuntime,VRInitError_None,VRInitError_Driver_HmdDisplayMirrored,VRInitError_Driver_HmdDriverIdOutOfBounds,VRInitError_Driver_TrackedDeviceInterfaceUnknown,VRInitError_Driver_HmdDisplayNotFound,VRInitError_Driver_CalibrationInvalid,VRInitError_Driver_NotCalibrated,VRInitError_Driver_HmdInUse,VRInitError_Driver_RuntimeOutOfDate,VRInitError_Driver_NotLoaded,VRInitError_Driver_HmdUnknown,VRInitError_Driver_Unknown,VRInitError_Driver_Failed,VRInitError_Unknown,VRInitError_Compositor_UnableToCreateDevice,VRInitError_Compositor_ScreenshotsInitFailed,VRInitError_Compositor_OverlayInitFailed,VRInitError_Compositor_FirmwareRequiresUpdate,VRInitError_Compositor_D3D11HardwareRequired,VRInitError_Compositor_Failed,VRInitError_Init_TrackerManagerInitFailed,VRInitError_Init_VRWebHelperStartupFailed,VRInitError_Init_USBServiceBusy,VRInitError_Init_FirmwareRecoveryBusy,VRInitError_Init_FirmwareUpdateBusy,VRInitError_Init_RebootingBusy,VRInitError_Init_VRHomeStartupFailed,VRInitError_Init_VRHomeNotFound,VRInitError_Init_VRDashboardStartupFailed,VRInitError_Init_VRDashboardNotFound,VRInitError_Init_WatchdogDisabledInSettings,VRInitError_Init_NotAvailableToWatchdogApps,VRInitError_Init_InvalidApplicationType,VRInitError_Init_LowPowerWatchdogNotSupported,VRInitError_Init_VRMonitorStartupFailed,VRInitError_Init_VRMonitorNotFound,VRInitError_Init_HmdNotFoundPresenceFailed,VRInitError_Init_HmdDriverIdIsNone,VRInitError_Init_Internal,VRInitError_Init_NotAvailableToUtilityApps,VRInitError_Init_NotSupportedWithCompositor,VRInitError_Init_NoServerForBackgroundApp,VRInitError_Init_TooManyObjects,VRInitError_Init_ShuttingDown,VRInitError_Init_SettingsInitFailed,VRInitError_Init_AnotherAppLaunching,VRInitError_Init_InitCanceledByUser,VRInitError_Init_Retry,VRInitError_Init_AppInfoInitFailed,VRInitError_Init_PathRegistryNotWritable,VRInitError_Init_NoLogPath,VRInitError_Init_NoConfigPath,VRInitError_Init_PathRegistryNotFound,VRInitError_Init_NotInitialized,VRInitError_Init_HmdNotFound,VRInitError_Init_UserConfigDirectoryInvalid,VRInitError_Init_InvalidInterface,VRInitError_Init_InterfaceNotFound,VRInitError_Init_FactoryNotFound,VRInitError_Init_FileNotFound,VRInitError_Init_VRClientDLLNotFound,VRInitError_Init_InstallationCorrupt,VRInitError_Init_InstallationNotFound,VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck,VRInitError_VendorSpecific_HmdFound_UserDataError,VRInitError_VendorSpecific_HmdFound_UserDataAddressRange,VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext,VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart,VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart,VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion,VRInitError_VendorSpecific_HmdFound_UnableToInitZLib,VRInitError_VendorSpecific_HmdFound_ConfigTooSmall,VRInitError_VendorSpecific_HmdFound_ConfigTooBig,VRInitError_VendorSpecific_HmdFound_NoStoredConfig,VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart,VRInitError_VendorSpecific_HmdFound_CantOpenDevice,VRInitError_IPC_ConnectFailedAfterMultipleAttempts,VRInitError_IPC_CompositorInvalidConnectResponse,VRInitError_IPC_CompositorConnectFailed,VRInitError_IPC_Failed,VRInitError_IPC_MutexInitFailed,VRInitError_IPC_CompositorInitFailed,VRInitError_IPC_SharedStateInitFailed,VRInitError_IPC_ConnectFailed,VRInitError_IPC_ServerInitFailed,VRInitError_Steam_SteamInstallationNotFound, };

	static const char * const EVRInitError_string_table[] =
	{ "VRInitError_VendorSpecific_WindowsNotInDevMode","VRInitError_VendorSpecific_UnableToConnectToOculusRuntime","VRInitError_None","VRInitError_Driver_HmdDisplayMirrored","VRInitError_Driver_HmdDriverIdOutOfBounds","VRInitError_Driver_TrackedDeviceInterfaceUnknown","VRInitError_Driver_HmdDisplayNotFound","VRInitError_Driver_CalibrationInvalid","VRInitError_Driver_NotCalibrated","VRInitError_Driver_HmdInUse","VRInitError_Driver_RuntimeOutOfDate","VRInitError_Driver_NotLoaded","VRInitError_Driver_HmdUnknown","VRInitError_Driver_Unknown","VRInitError_Driver_Failed","VRInitError_Unknown","VRInitError_Compositor_UnableToCreateDevice","VRInitError_Compositor_ScreenshotsInitFailed","VRInitError_Compositor_OverlayInitFailed","VRInitError_Compositor_FirmwareRequiresUpdate","VRInitError_Compositor_D3D11HardwareRequired","VRInitError_Compositor_Failed","VRInitError_Init_TrackerManagerInitFailed","VRInitError_Init_VRWebHelperStartupFailed","VRInitError_Init_USBServiceBusy","VRInitError_Init_FirmwareRecoveryBusy","VRInitError_Init_FirmwareUpdateBusy","VRInitError_Init_RebootingBusy","VRInitError_Init_VRHomeStartupFailed","VRInitError_Init_VRHomeNotFound","VRInitError_Init_VRDashboardStartupFailed","VRInitError_Init_VRDashboardNotFound","VRInitError_Init_WatchdogDisabledInSettings","VRInitError_Init_NotAvailableToWatchdogApps","VRInitError_Init_InvalidApplicationType","VRInitError_Init_LowPowerWatchdogNotSupported","VRInitError_Init_VRMonitorStartupFailed","VRInitError_Init_VRMonitorNotFound","VRInitError_Init_HmdNotFoundPresenceFailed","VRInitError_Init_HmdDriverIdIsNone","VRInitError_Init_Internal","VRInitError_Init_NotAvailableToUtilityApps","VRInitError_Init_NotSupportedWithCompositor","VRInitError_Init_NoServerForBackgroundApp","VRInitError_Init_TooManyObjects","VRInitError_Init_ShuttingDown","VRInitError_Init_SettingsInitFailed","VRInitError_Init_AnotherAppLaunching","VRInitError_Init_InitCanceledByUser","VRInitError_Init_Retry","VRInitError_Init_AppInfoInitFailed","VRInitError_Init_PathRegistryNotWritable","VRInitError_Init_NoLogPath","VRInitError_Init_NoConfigPath","VRInitError_Init_PathRegistryNotFound","VRInitError_Init_NotInitialized","VRInitError_Init_HmdNotFound","VRInitError_Init_UserConfigDirectoryInvalid","VRInitError_Init_InvalidInterface","VRInitError_Init_InterfaceNotFound","VRInitError_Init_FactoryNotFound","VRInitError_Init_FileNotFound","VRInitError_Init_VRClientDLLNotFound","VRInitError_Init_InstallationCorrupt","VRInitError_Init_InstallationNotFound","VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck","VRInitError_VendorSpecific_HmdFound_UserDataError","VRInitError_VendorSpecific_HmdFound_UserDataAddressRange","VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext","VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart","VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart","VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion","VRInitError_VendorSpecific_HmdFound_UnableToInitZLib","VRInitError_VendorSpecific_HmdFound_ConfigTooSmall","VRInitError_VendorSpecific_HmdFound_ConfigTooBig","VRInitError_VendorSpecific_HmdFound_NoStoredConfig","VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart","VRInitError_VendorSpecific_HmdFound_CantOpenDevice","VRInitError_IPC_ConnectFailedAfterMultipleAttempts","VRInitError_IPC_CompositorInvalidConnectResponse","VRInitError_IPC_CompositorConnectFailed","VRInitError_IPC_Failed","VRInitError_IPC_MutexInitFailed","VRInitError_IPC_CompositorInitFailed","VRInitError_IPC_SharedStateInitFailed","VRInitError_IPC_ConnectFailed","VRInitError_IPC_ServerInitFailed","VRInitError_Steam_SteamInstallationNotFound", };

	const char* EVRInitErrorToString(vr::EVRInitError e)
	{
		static const unsigned char LUT[] =
		{
		   1, 14, 88,  0, 33, 88, 88, 82, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 72, 71, 70, 69, 68, 67,
		  66, 65, 64, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 44, 43, 42,
		  41, 40, 39, 38, 37, 36, 35, 34, 33, 32,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  63, 62, 61, 60, 59, 58, 57, 56, 55, 54,
		  53, 52, 51, 50, 49, 48, 47, 46, 45, 44,
		  43, 42, 41, 40, 39, 38, 37, 36, 35, 34,
		  33, 32, 31, 30, 29, 28, 27, 26, 25, 24,
		  23, 22, 21, 88,  7,  6,  5,  4,  3,  2,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  13, 12, 11, 10,  9,  8,  7,  6,  5,  4,
		  88,  3,  2, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  88, 88,  1,  0, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88, 88, 88, 88, 88,
		  88, 88, 88, 88, 88, 88
		};
		int offset = LUT[(unsigned char)(((unsigned int)e & 0xFF00) >> 8)] + LUT[(unsigned char)e];
		if (offset < (sizeof(EVRInitError_check_table) / sizeof(EVRInitError_check_table[0])) &&
			(e == EVRInitError_check_table[offset]))
		{
			return EVRInitError_string_table[offset];
		}
		return nullptr;
	}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRScreenshotTypeToString(vr::EVRScreenshotType e)
	{
		static const char * const EVRScreenshotType_strings[] =
		{
		"VRScreenshotType_None","VRScreenshotType_Mono","VRScreenshotType_Stereo","VRScreenshotType_Cubemap","VRScreenshotType_MonoPanorama","VRScreenshotType_StereoPanorama"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRScreenshotType_strings) / sizeof(EVRScreenshotType_strings[0]))
			return nullptr;
		return EVRScreenshotType_strings[offset];
	}

	const char *EVRScreenshotPropertyFilenamesToString(vr::EVRScreenshotPropertyFilenames e)
	{
		static const char * const EVRScreenshotPropertyFilenames_strings[] =
		{
		"VRScreenshotPropertyFilenames_Preview","VRScreenshotPropertyFilenames_VR"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRScreenshotPropertyFilenames_strings) / sizeof(EVRScreenshotPropertyFilenames_strings[0]))
			return nullptr;
		return EVRScreenshotPropertyFilenames_strings[offset];
	}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

	static const vr::EVRTrackedCameraError EVRTrackedCameraError_check_table[] =
	{ VRTrackedCameraError_InvalidFrameBufferSize,VRTrackedCameraError_InvalidArgument,VRTrackedCameraError_NoFrameAvailable,VRTrackedCameraError_SharedTextureFailure,VRTrackedCameraError_FailedToGetGLTextureId,VRTrackedCameraError_InvalidSharedTextureHandle,VRTrackedCameraError_InvalidGLTextureId,VRTrackedCameraError_StreamSetupFailure,VRTrackedCameraError_FrameBufferingFailure,VRTrackedCameraError_SharedMemoryFailure,VRTrackedCameraError_NotSupportedForThisDevice,VRTrackedCameraError_IPCFailure,VRTrackedCameraError_OutOfHandles,VRTrackedCameraError_InvalidFrameHeaderVersion,VRTrackedCameraError_InvalidHandle,VRTrackedCameraError_OperationFailed,VRTrackedCameraError_None, };

	static const char * const EVRTrackedCameraError_string_table[] =
	{ "VRTrackedCameraError_InvalidFrameBufferSize","VRTrackedCameraError_InvalidArgument","VRTrackedCameraError_NoFrameAvailable","VRTrackedCameraError_SharedTextureFailure","VRTrackedCameraError_FailedToGetGLTextureId","VRTrackedCameraError_InvalidSharedTextureHandle","VRTrackedCameraError_InvalidGLTextureId","VRTrackedCameraError_StreamSetupFailure","VRTrackedCameraError_FrameBufferingFailure","VRTrackedCameraError_SharedMemoryFailure","VRTrackedCameraError_NotSupportedForThisDevice","VRTrackedCameraError_IPCFailure","VRTrackedCameraError_OutOfHandles","VRTrackedCameraError_InvalidFrameHeaderVersion","VRTrackedCameraError_InvalidHandle","VRTrackedCameraError_OperationFailed","VRTrackedCameraError_None", };

	const char* EVRTrackedCameraErrorToString(vr::EVRTrackedCameraError e)
	{
		static const unsigned char LUT[] =
		{
		  16, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  15, 14, 13, 12, 11, 10,  9,  8,  7,  6,
		   5,  4,  3,  2,  1,  0, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
		  17, 17, 17, 17, 17, 17
		};
		int offset = LUT[(unsigned char)e];
		if (offset < (sizeof(EVRTrackedCameraError_check_table) / sizeof(EVRTrackedCameraError_check_table[0])) &&
			(e == EVRTrackedCameraError_check_table[offset]))
		{
			return EVRTrackedCameraError_string_table[offset];
		}
		return nullptr;
	}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRTrackedCameraFrameLayoutToString(vr::EVRTrackedCameraFrameLayout e)
	{
		static const char * const EVRTrackedCameraFrameLayout_strings[] =
		{
		"EVRTrackedCameraFrameLayout_Mono","EVRTrackedCameraFrameLayout_Stereo",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"EVRTrackedCameraFrameLayout_VerticalLayout",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"EVRTrackedCameraFrameLayout_HorizontalLayout"
		};

		int offset = (int)e - (1);
		if (offset < 0 || offset >= sizeof(EVRTrackedCameraFrameLayout_strings) / sizeof(EVRTrackedCameraFrameLayout_strings[0]))
			return nullptr;
		return EVRTrackedCameraFrameLayout_strings[offset];
	}

	const char *EVRTrackedCameraFrameTypeToString(vr::EVRTrackedCameraFrameType e)
	{
		static const char * const EVRTrackedCameraFrameType_strings[] =
		{
		"VRTrackedCameraFrameType_Distorted","VRTrackedCameraFrameType_Undistorted","VRTrackedCameraFrameType_MaximumUndistorted","MAX_CAMERA_FRAME_TYPES"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRTrackedCameraFrameType_strings) / sizeof(EVRTrackedCameraFrameType_strings[0]))
			return nullptr;
		return EVRTrackedCameraFrameType_strings[offset];
	}

	const char *EVRDistortionFunctionTypeToString(vr::EVRDistortionFunctionType e)
	{
		static const char * const EVRDistortionFunctionType_strings[] =
		{
		"VRDistortionFunctionType_None","VRDistortionFunctionType_FTheta","VRDistortionFucntionType_Extended_FTheta","MAX_DISTORTION_FUNCTION_TYPES"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRDistortionFunctionType_strings) / sizeof(EVRDistortionFunctionType_strings[0]))
			return nullptr;
		return EVRDistortionFunctionType_strings[offset];
	}

	const char *EVSyncToString(vr::EVSync e)
	{
		static const char * const EVSync_strings[] =
		{
		"VSync_None","VSync_WaitRender","VSync_NoWaitRender"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVSync_strings) / sizeof(EVSync_strings[0]))
			return nullptr;
		return EVSync_strings[offset];
	}

	const char *EVRMuraCorrectionModeToString(vr::EVRMuraCorrectionMode e)
	{
		static const char * const EVRMuraCorrectionMode_strings[] =
		{
		"EVRMuraCorrectionMode_Default","EVRMuraCorrectionMode_NoCorrection"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRMuraCorrectionMode_strings) / sizeof(EVRMuraCorrectionMode_strings[0]))
			return nullptr;
		return EVRMuraCorrectionMode_strings[offset];
	}

	const char *Imu_OffScaleFlagsToString(vr::Imu_OffScaleFlags e)
	{
		static const char * const Imu_OffScaleFlags_strings[] =
		{
		"OffScale_AccelX","OffScale_AccelY",nullptr,"OffScale_AccelZ",nullptr,nullptr,nullptr,"OffScale_GyroX",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"OffScale_GyroY",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"OffScale_GyroZ"
		};

		int offset = (int)e - (1);
		if (offset < 0 || offset >= sizeof(Imu_OffScaleFlags_strings) / sizeof(Imu_OffScaleFlags_strings[0]))
			return nullptr;
		return Imu_OffScaleFlags_strings[offset];
	}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

	static const vr::EVRApplicationError EVRApplicationError_check_table[] =
	{ VRApplicationError_InvalidParameter,VRApplicationError_UnknownProperty,VRApplicationError_PropertyNotSet,VRApplicationError_BufferTooSmall,VRApplicationError_SteamVRIsExiting,VRApplicationError_IsTemplate,VRApplicationError_TransitionAborted,VRApplicationError_OldApplicationQuitting,VRApplicationError_LaunchInProgress,VRApplicationError_ApplicationAlreadyStarting,VRApplicationError_LaunchFailed,VRApplicationError_InvalidApplication,VRApplicationError_InvalidManifest,VRApplicationError_ApplicationAlreadyRunning,VRApplicationError_IPCFailed,VRApplicationError_UnknownApplication,VRApplicationError_InvalidIndex,VRApplicationError_NoApplication,VRApplicationError_NoManifest,VRApplicationError_AppKeyAlreadyExists,VRApplicationError_None, };

	static const char * const EVRApplicationError_string_table[] =
	{ "VRApplicationError_InvalidParameter","VRApplicationError_UnknownProperty","VRApplicationError_PropertyNotSet","VRApplicationError_BufferTooSmall","VRApplicationError_SteamVRIsExiting","VRApplicationError_IsTemplate","VRApplicationError_TransitionAborted","VRApplicationError_OldApplicationQuitting","VRApplicationError_LaunchInProgress","VRApplicationError_ApplicationAlreadyStarting","VRApplicationError_LaunchFailed","VRApplicationError_InvalidApplication","VRApplicationError_InvalidManifest","VRApplicationError_ApplicationAlreadyRunning","VRApplicationError_IPCFailed","VRApplicationError_UnknownApplication","VRApplicationError_InvalidIndex","VRApplicationError_NoApplication","VRApplicationError_NoManifest","VRApplicationError_AppKeyAlreadyExists","VRApplicationError_None", };

	const char* EVRApplicationErrorToString(vr::EVRApplicationError e)
	{
		static const unsigned char LUT[] =
		{
		  20, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  19, 18, 17, 16, 15, 14, 13, 12, 11, 10,
		   9,  8,  7,  6,  5,  4, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		   3,  2,  1,  0, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		  21, 21, 21, 21, 21, 21
		};
		int offset = LUT[(unsigned char)e];
		if (offset < (sizeof(EVRApplicationError_check_table) / sizeof(EVRApplicationError_check_table[0])) &&
			(e == EVRApplicationError_check_table[offset]))
		{
			return EVRApplicationError_string_table[offset];
		}
		return nullptr;
	}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRApplicationPropertyToString(vr::EVRApplicationProperty e)
	{
		static const char * const EVRApplicationProperty_strings[] =
		{
		"VRApplicationProperty_Name_String",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_LaunchType_String","VRApplicationProperty_WorkingDirectory_String","VRApplicationProperty_BinaryPath_String","VRApplicationProperty_Arguments_String","VRApplicationProperty_URL_String",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_Description_String","VRApplicationProperty_NewsURL_String","VRApplicationProperty_ImagePath_String","VRApplicationProperty_Source_String","VRApplicationProperty_ActionManifestURL_String",nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_IsDashboardOverlay_Bool","VRApplicationProperty_IsTemplate_Bool","VRApplicationProperty_IsInstanced_Bool","VRApplicationProperty_IsInternal_Bool","VRApplicationProperty_WantsCompositorPauseInStandby_Bool",nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_LastLaunchTime_Uint64"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRApplicationProperty_strings) / sizeof(EVRApplicationProperty_strings[0]))
			return nullptr;
		return EVRApplicationProperty_strings[offset];
	}

	const char *EVRApplicationTransitionStateToString(vr::EVRApplicationTransitionState e)
	{
		static const char * const EVRApplicationTransitionState_strings[] =
		{
		"VRApplicationTransition_None",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationTransition_OldAppQuitSent","VRApplicationTransition_WaitingForExternalLaunch",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationTransition_NewAppLaunched"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRApplicationTransitionState_strings) / sizeof(EVRApplicationTransitionState_strings[0]))
			return nullptr;
		return EVRApplicationTransitionState_strings[offset];
	}

	static const vr::ChaperoneCalibrationState ChaperoneCalibrationState_check_table[] =
	{ ChaperoneCalibrationState_Error_CollisionBoundsInvalid,ChaperoneCalibrationState_Error_PlayAreaInvalid,ChaperoneCalibrationState_Error_BaseStationConflict,ChaperoneCalibrationState_Error_BaseStationUninitialized,ChaperoneCalibrationState_Error,ChaperoneCalibrationState_Warning_SeatedBoundsInvalid,ChaperoneCalibrationState_Warning_BaseStationRemoved,ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved,ChaperoneCalibrationState_Warning,ChaperoneCalibrationState_OK, };

	static const char * const ChaperoneCalibrationState_string_table[] =
	{ "ChaperoneCalibrationState_Error_CollisionBoundsInvalid","ChaperoneCalibrationState_Error_PlayAreaInvalid","ChaperoneCalibrationState_Error_BaseStationConflict","ChaperoneCalibrationState_Error_BaseStationUninitialized","ChaperoneCalibrationState_Error","ChaperoneCalibrationState_Warning_SeatedBoundsInvalid","ChaperoneCalibrationState_Warning_BaseStationRemoved","ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved","ChaperoneCalibrationState_Warning","ChaperoneCalibrationState_OK", };

	const char* ChaperoneCalibrationStateToString(vr::ChaperoneCalibrationState e)
	{
		static const unsigned char LUT[] =
		{
		 10, 9,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		  8, 7, 6, 5,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		  4, 3, 2, 1, 0,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10,10,10,10,10,
		 10,10,10,10,10,10
		};
		int offset = LUT[(unsigned char)e];
		if (offset < (sizeof(ChaperoneCalibrationState_check_table) / sizeof(ChaperoneCalibrationState_check_table[0])) &&
			(e == ChaperoneCalibrationState_check_table[offset]))
		{
			return ChaperoneCalibrationState_string_table[offset];
		}
		return nullptr;
	}

	const char *EChaperoneConfigFileToString(vr::EChaperoneConfigFile e)
	{
		switch (e)
		{
		case (EChaperoneConfigFile_Live): return "EChaperoneConfigFile_Live";
		case (EChaperoneConfigFile_Temp): return "EChaperoneConfigFile_Temp";
		default: return nullptr;
		}
	}

	const char *EChaperoneImportFlagsToString(vr::EChaperoneImportFlags e)
	{
		switch (e)
		{
		case (EChaperoneImport_BoundsOnly): return "EChaperoneImport_BoundsOnly";
		default: return nullptr;
		}
	}

	static const vr::EVRCompositorError EVRCompositorError_check_table[] =
	{ VRCompositorError_InvalidBounds,VRCompositorError_AlreadySubmitted,VRCompositorError_IndexOutOfRange,VRCompositorError_SharedTexturesNotSupported,VRCompositorError_TextureUsesUnsupportedFormat,VRCompositorError_TextureIsOnWrongDevice,VRCompositorError_IsNotSceneApplication,VRCompositorError_InvalidTexture,VRCompositorError_DoNotHaveFocus,VRCompositorError_IncompatibleVersion,VRCompositorError_RequestFailed,VRCompositorError_None, };

	static const char * const EVRCompositorError_string_table[] =
	{ "VRCompositorError_InvalidBounds","VRCompositorError_AlreadySubmitted","VRCompositorError_IndexOutOfRange","VRCompositorError_SharedTexturesNotSupported","VRCompositorError_TextureUsesUnsupportedFormat","VRCompositorError_TextureIsOnWrongDevice","VRCompositorError_IsNotSceneApplication","VRCompositorError_InvalidTexture","VRCompositorError_DoNotHaveFocus","VRCompositorError_IncompatibleVersion","VRCompositorError_RequestFailed","VRCompositorError_None", };

	const char* EVRCompositorErrorToString(vr::EVRCompositorError e)
	{
		static const unsigned char LUT[] =
		{
		  11, 10, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		   9,  8,  7,  6,  5,  4,  3,  2,  1,  0,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
		  12, 12, 12, 12, 12, 12
		};
		int offset = LUT[(unsigned char)e];
		if (offset < (sizeof(EVRCompositorError_check_table) / sizeof(EVRCompositorError_check_table[0])) &&
			(e == EVRCompositorError_check_table[offset]))
		{
			return EVRCompositorError_string_table[offset];
		}
		return nullptr;
	}

	const char *EVRCompositorTimingModeToString(vr::EVRCompositorTimingMode e)
	{
		static const char * const EVRCompositorTimingMode_strings[] =
		{
		"VRCompositorTimingMode_Implicit","VRCompositorTimingMode_Explicit_RuntimePerformsPostPresentHandoff","VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRCompositorTimingMode_strings) / sizeof(EVRCompositorTimingMode_strings[0]))
			return nullptr;
		return EVRCompositorTimingMode_strings[offset];
	}

	const char *VROverlayInputMethodToString(vr::VROverlayInputMethod e)
	{
		static const char * const VROverlayInputMethod_strings[] =
		{
		"VROverlayInputMethod_None","VROverlayInputMethod_Mouse","VROverlayInputMethod_DualAnalog"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(VROverlayInputMethod_strings) / sizeof(VROverlayInputMethod_strings[0]))
			return nullptr;
		return VROverlayInputMethod_strings[offset];
	}

	const char *VROverlayTransformTypeToString(vr::VROverlayTransformType e)
	{
		static const char * const VROverlayTransformType_strings[] =
		{
		"VROverlayTransform_Absolute","VROverlayTransform_TrackedDeviceRelative","VROverlayTransform_SystemOverlay","VROverlayTransform_TrackedComponent"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(VROverlayTransformType_strings) / sizeof(VROverlayTransformType_strings[0]))
			return nullptr;
		return VROverlayTransformType_strings[offset];
	}

	const char *VROverlayFlagsToString(vr::VROverlayFlags e)
	{
		static const char * const VROverlayFlags_strings[] =
		{
		"VROverlayFlags_None","VROverlayFlags_Curved","VROverlayFlags_RGSS4X","VROverlayFlags_NoDashboardTab","VROverlayFlags_AcceptsGamepadEvents","VROverlayFlags_ShowGamepadFocus","VROverlayFlags_SendVRScrollEvents","VROverlayFlags_SendVRTouchpadEvents","VROverlayFlags_ShowTouchPadScrollWheel","VROverlayFlags_TransferOwnershipToInternalProcess","VROverlayFlags_SideBySide_Parallel","VROverlayFlags_SideBySide_Crossed","VROverlayFlags_Panorama","VROverlayFlags_StereoPanorama","VROverlayFlags_SortWithNonSceneOverlays","VROverlayFlags_VisibleInDashboard","VROverlayFlags_MakeOverlaysInteractiveIfVisible"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(VROverlayFlags_strings) / sizeof(VROverlayFlags_strings[0]))
			return nullptr;
		return VROverlayFlags_strings[offset];
	}

	const char *VRMessageOverlayResponseToString(vr::VRMessageOverlayResponse e)
	{
		static const char * const VRMessageOverlayResponse_strings[] =
		{
		"VRMessageOverlayResponse_ButtonPress_0","VRMessageOverlayResponse_ButtonPress_1","VRMessageOverlayResponse_ButtonPress_2","VRMessageOverlayResponse_ButtonPress_3","VRMessageOverlayResponse_CouldntFindSystemOverlay","VRMessageOverlayResponse_CouldntFindOrCreateClientOverlay","VRMessageOverlayResponse_ApplicationQuit"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(VRMessageOverlayResponse_strings) / sizeof(VRMessageOverlayResponse_strings[0]))
			return nullptr;
		return VRMessageOverlayResponse_strings[offset];
	}

	const char *EGamepadTextInputModeToString(vr::EGamepadTextInputMode e)
	{
		static const char * const EGamepadTextInputMode_strings[] =
		{
		"k_EGamepadTextInputModeNormal","k_EGamepadTextInputModePassword","k_EGamepadTextInputModeSubmit"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EGamepadTextInputMode_strings) / sizeof(EGamepadTextInputMode_strings[0]))
			return nullptr;
		return EGamepadTextInputMode_strings[offset];
	}

	const char *EGamepadTextInputLineModeToString(vr::EGamepadTextInputLineMode e)
	{
		static const char * const EGamepadTextInputLineMode_strings[] =
		{
		"k_EGamepadTextInputLineModeSingleLine","k_EGamepadTextInputLineModeMultipleLines"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EGamepadTextInputLineMode_strings) / sizeof(EGamepadTextInputLineMode_strings[0]))
			return nullptr;
		return EGamepadTextInputLineMode_strings[offset];
	}

	const char *EOverlayDirectionToString(vr::EOverlayDirection e)
	{
		static const char * const EOverlayDirection_strings[] =
		{
		"OverlayDirection_Up","OverlayDirection_Down","OverlayDirection_Left","OverlayDirection_Right","OverlayDirection_Count"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EOverlayDirection_strings) / sizeof(EOverlayDirection_strings[0]))
			return nullptr;
		return EOverlayDirection_strings[offset];
	}

	const char *EVROverlayIntersectionMaskPrimitiveTypeToString(vr::EVROverlayIntersectionMaskPrimitiveType e)
	{
		switch (e)
		{
		case (OverlayIntersectionPrimitiveType_Rectangle): return "OverlayIntersectionPrimitiveType_Rectangle";
		case (OverlayIntersectionPrimitiveType_Circle): return "OverlayIntersectionPrimitiveType_Circle";
		default: return nullptr;
		}
	}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

	static const vr::EVRRenderModelError EVRRenderModelError_check_table[] =
	{ VRRenderModelError_NotSupported,VRRenderModelError_InvalidTexture,VRRenderModelError_Loading,VRRenderModelError_NotEnoughTexCoords,VRRenderModelError_NotEnoughNormals,VRRenderModelError_BufferTooSmall,VRRenderModelError_MultipleTextures,VRRenderModelError_TooManyVertices,VRRenderModelError_MultipleShapes,VRRenderModelError_NoShapes,VRRenderModelError_InvalidModel,VRRenderModelError_InvalidArg,VRRenderModelError_None, };

	static const char * const EVRRenderModelError_string_table[] =
	{ "VRRenderModelError_NotSupported","VRRenderModelError_InvalidTexture","VRRenderModelError_Loading","VRRenderModelError_NotEnoughTexCoords","VRRenderModelError_NotEnoughNormals","VRRenderModelError_BufferTooSmall","VRRenderModelError_MultipleTextures","VRRenderModelError_TooManyVertices","VRRenderModelError_MultipleShapes","VRRenderModelError_NoShapes","VRRenderModelError_InvalidModel","VRRenderModelError_InvalidArg","VRRenderModelError_None", };

	const char* EVRRenderModelErrorToString(vr::EVRRenderModelError e)
	{
		static const unsigned char LUT[] =
		{
		  12, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 11, 10,  9,  8,  7,  6,
		   5,  4,  3, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		   2, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13,  1, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		   0, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
		  13, 13, 13, 13, 13, 13
		};
		int offset = LUT[(unsigned char)e];
		if (offset < (sizeof(EVRRenderModelError_check_table) / sizeof(EVRRenderModelError_check_table[0])) &&
			(e == EVRRenderModelError_check_table[offset]))
		{
			return EVRRenderModelError_string_table[offset];
		}
		return nullptr;
	}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRComponentPropertyToString(vr::EVRComponentProperty e)
	{
		static const char * const EVRComponentProperty_strings[] =
		{
		"VRComponentProperty_IsStatic","VRComponentProperty_IsVisible",nullptr,"VRComponentProperty_IsTouched",nullptr,nullptr,nullptr,"VRComponentProperty_IsPressed",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRComponentProperty_IsScrolled"
		};

		int offset = (int)e - (1);
		if (offset < 0 || offset >= sizeof(EVRComponentProperty_strings) / sizeof(EVRComponentProperty_strings[0]))
			return nullptr;
		return EVRComponentProperty_strings[offset];
	}

	const char *EVRNotificationTypeToString(vr::EVRNotificationType e)
	{
		static const char * const EVRNotificationType_strings[] =
		{
		"EVRNotificationType_Transient","EVRNotificationType_Persistent","EVRNotificationType_Transient_SystemWithUserValue"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRNotificationType_strings) / sizeof(EVRNotificationType_strings[0]))
			return nullptr;
		return EVRNotificationType_strings[offset];
	}

	static const vr::EVRNotificationStyle EVRNotificationStyle_check_table[] =
	{ EVRNotificationStyle_Contact_Active,EVRNotificationStyle_Contact_Enabled,EVRNotificationStyle_Contact_Disabled,EVRNotificationStyle_Application,EVRNotificationStyle_None, };

	static const char * const EVRNotificationStyle_string_table[] =
	{ "EVRNotificationStyle_Contact_Active","EVRNotificationStyle_Contact_Enabled","EVRNotificationStyle_Contact_Disabled","EVRNotificationStyle_Application","EVRNotificationStyle_None", };

	const char* EVRNotificationStyleToString(vr::EVRNotificationStyle e)
	{
		static const unsigned char LUT[] =
		{
		  4, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  3, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  2, 1, 0, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		  5, 5, 5, 5, 5, 5
		};
		int offset = LUT[(unsigned char)e];
		if (offset < (sizeof(EVRNotificationStyle_check_table) / sizeof(EVRNotificationStyle_check_table[0])) &&
			(e == EVRNotificationStyle_check_table[offset]))
		{
			return EVRNotificationStyle_string_table[offset];
		}
		return nullptr;
	}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRSettingsErrorToString(vr::EVRSettingsError e)
	{
		static const char * const EVRSettingsError_strings[] =
		{
		"VRSettingsError_None","VRSettingsError_IPCFailed","VRSettingsError_WriteFailed","VRSettingsError_ReadFailed","VRSettingsError_JsonParseFailed","VRSettingsError_UnsetSettingHasNoDefault"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRSettingsError_strings) / sizeof(EVRSettingsError_strings[0]))
			return nullptr;
		return EVRSettingsError_strings[offset];
	}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

	const char *EVRScreenshotErrorToString(vr::EVRScreenshotError e)
	{
		static const char * const EVRScreenshotError_strings[] =
		{
		"VRScreenshotError_None","VRScreenshotError_RequestFailed",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRScreenshotError_IncompatibleVersion","VRScreenshotError_NotFound","VRScreenshotError_BufferTooSmall",nullptr,nullptr,nullptr,nullptr,nullptr,"VRScreenshotError_ScreenshotAlreadyInProgress"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRScreenshotError_strings) / sizeof(EVRScreenshotError_strings[0]))
			return nullptr;
		return EVRScreenshotError_strings[offset];
	}

	const char *EVRSkeletalTransformSpaceToString(vr::EVRSkeletalTransformSpace e)
	{
		static const char * const EVRSkeletalTransformSpace_strings[] =
		{
		"VRSkeletalTransformSpace_Model","VRSkeletalTransformSpace_Parent"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRSkeletalTransformSpace_strings) / sizeof(EVRSkeletalTransformSpace_strings[0]))
			return nullptr;
		return EVRSkeletalTransformSpace_strings[offset];
	}

	const char *EVRSkeletalReferencePoseToString(vr::EVRSkeletalReferencePose e)
	{
		static const char * const EVRSkeletalReferencePose_strings[] =
		{
		"VRSkeletalReferencePose_BindPose","VRSkeletalReferencePose_OpenHand","VRSkeletalReferencePose_Fist","VRSkeletalReferencePose_GripLimit"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRSkeletalReferencePose_strings) / sizeof(EVRSkeletalReferencePose_strings[0]))
			return nullptr;
		return EVRSkeletalReferencePose_strings[offset];
	}

	const char *EVRFingerToString(vr::EVRFinger e)
	{
		static const char * const EVRFinger_strings[] =
		{
		"VRFinger_Thumb","VRFinger_Index","VRFinger_Middle","VRFinger_Ring","VRFinger_Pinky","VRFinger_Count"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRFinger_strings) / sizeof(EVRFinger_strings[0]))
			return nullptr;
		return EVRFinger_strings[offset];
	}

	const char *EVRFingerSplayToString(vr::EVRFingerSplay e)
	{
		static const char * const EVRFingerSplay_strings[] =
		{
		"VRFingerSplay_Thumb_Index","VRFingerSplay_Index_Middle","VRFingerSplay_Middle_Ring","VRFingerSplay_Ring_Pinky","VRFingerSplay_Count"
		};

		int offset = (int)e;
		if (offset < 0 || offset >= sizeof(EVRFingerSplay_strings) / sizeof(EVRFingerSplay_strings[0]))
			return nullptr;
		return EVRFingerSplay_strings[offset];
	}

	const char *EVRInputFilterCancelTypeToString(vr::EVRInputFilterCancelType e)
	{
		switch (e)
		{
		case (VRInputFilterCancel_Timers): return "VRInputFilterCancel_Timers";
		case (VRInputFilterCancel_Momentum): return "VRInputFilterCancel_Momentum";
		default: return nullptr;
		}
	}

	const char *EVRInputStringBitsToString(vr::EVRInputStringBits e)
	{
		static const char * const EVRInputStringBits_strings[] =
		{
		"VRInputString_All",nullptr,"VRInputString_Hand","VRInputString_ControllerType",nullptr,"VRInputString_InputSource"
		};

		int offset = (int)e - (-1);
		if (offset < 0 || offset >= sizeof(EVRInputStringBits_strings) / sizeof(EVRInputStringBits_strings[0]))
			return nullptr;
		return EVRInputStringBits_strings[offset];
	}

	const char *EIOBufferErrorToString(vr::EIOBufferError e)
	{
		switch (e)
		{
		case (IOBuffer_Success): return "IOBuffer_Success";
		case (IOBuffer_OperationFailed): return "IOBuffer_OperationFailed";
		case (IOBuffer_InvalidHandle): return "IOBuffer_InvalidHandle";
		case (IOBuffer_InvalidArgument): return "IOBuffer_InvalidArgument";
		case (IOBuffer_PathExists): return "IOBuffer_PathExists";
		case (IOBuffer_PathDoesNotExist): return "IOBuffer_PathDoesNotExist";
		case (IOBuffer_Permission): return "IOBuffer_Permission";
		default: return nullptr;
		}
	}

	const char *EIOBufferModeToString(vr::EIOBufferMode e)
	{
		switch (e)
		{
		case (IOBufferMode_Read): return "IOBufferMode_Read";
		case (IOBufferMode_Write): return "IOBufferMode_Write";
		case (IOBufferMode_Create): return "IOBufferMode_Create";
		default: return nullptr;
		}
	}
}

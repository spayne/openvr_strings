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

    const char* EVREyeToString(vr::EVREye e)
    {
        switch (e)
        {
        case (Eye_Left): return "Eye_Left";
        case (Eye_Right): return "Eye_Right";
        default: return nullptr;
        }
    }

    const char* ETextureTypeToString(vr::ETextureType e)
    {
        static const char* const ETextureType_strings[] =
        {
        "TextureType_Invalid","TextureType_DirectX","TextureType_OpenGL","TextureType_Vulkan","TextureType_IOSurface","TextureType_DirectX12","TextureType_DXGISharedHandle","TextureType_Metal"
        };

        int offset = (int)e - (-1);
        if (offset < 0 || offset >= sizeof(ETextureType_strings) / sizeof(ETextureType_strings[0]))
            return nullptr;
        return ETextureType_strings[offset];
    }

    const char* EColorSpaceToString(vr::EColorSpace e)
    {
        switch (e)
        {
        case (ColorSpace_Auto): return "ColorSpace_Auto";
        case (ColorSpace_Gamma): return "ColorSpace_Gamma";
        case (ColorSpace_Linear): return "ColorSpace_Linear";
        default: return nullptr;
        }
    }

    const char* ETrackingResultToString(vr::ETrackingResult e)
    {
        static const char* const ETrackingResult_strings[] =
        {
        "TrackingResult_Uninitialized",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"TrackingResult_Calibrating_InProgress","TrackingResult_Calibrating_OutOfRange",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"TrackingResult_Running_OK","TrackingResult_Running_OutOfRange",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"TrackingResult_Fallback_RotationOnly"
        };

        int offset = (int)e - (1);
        if (offset < 0 || offset >= sizeof(ETrackingResult_strings) / sizeof(ETrackingResult_strings[0]))
            return nullptr;
        return ETrackingResult_strings[offset];
    }

    const char* ETrackedDeviceClassToString(vr::ETrackedDeviceClass e)
    {
        static const char* const ETrackedDeviceClass_strings[] =
        {
        "TrackedDeviceClass_Invalid","TrackedDeviceClass_HMD","TrackedDeviceClass_Controller","TrackedDeviceClass_GenericTracker","TrackedDeviceClass_TrackingReference","TrackedDeviceClass_DisplayRedirect","TrackedDeviceClass_Max"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(ETrackedDeviceClass_strings) / sizeof(ETrackedDeviceClass_strings[0]))
            return nullptr;
        return ETrackedDeviceClass_strings[offset];
    }

    const char* ETrackedControllerRoleToString(vr::ETrackedControllerRole e)
    {
        static const char* const ETrackedControllerRole_strings[] =
        {
        "TrackedControllerRole_Invalid","TrackedControllerRole_LeftHand","TrackedControllerRole_RightHand","TrackedControllerRole_OptOut","TrackedControllerRole_Treadmill","TrackedControllerRole_Stylus"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(ETrackedControllerRole_strings) / sizeof(ETrackedControllerRole_strings[0]))
            return nullptr;
        return ETrackedControllerRole_strings[offset];
    }

    const char* ETrackingUniverseOriginToString(vr::ETrackingUniverseOrigin e)
    {
        static const char* const ETrackingUniverseOrigin_strings[] =
        {
        "TrackingUniverseSeated","TrackingUniverseStanding","TrackingUniverseRawAndUncalibrated"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(ETrackingUniverseOrigin_strings) / sizeof(ETrackingUniverseOrigin_strings[0]))
            return nullptr;
        return ETrackingUniverseOrigin_strings[offset];
    }

    const char* EAdditionalRadioFeaturesToString(vr::EAdditionalRadioFeatures e)
    {
        static const char* const EAdditionalRadioFeatures_strings[] =
        {
        "AdditionalRadioFeatures_None","AdditionalRadioFeatures_HTCLinkBox","AdditionalRadioFeatures_InternalDongle",nullptr,"AdditionalRadioFeatures_ExternalDongle"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EAdditionalRadioFeatures_strings) / sizeof(EAdditionalRadioFeatures_strings[0]))
            return nullptr;
        return EAdditionalRadioFeatures_strings[offset];
    }

    static const vr::ETrackedDeviceProperty ETrackedDeviceProperty_check_table[] =
    { Prop_NamedIconPathControllerLeftDeviceOff_String,Prop_DeviceCanPowerOff_Bool,Prop_ExpectedControllerCount_Int32,Prop_DeviceProvidesBatteryStatus_Bool,Prop_Audio_DefaultRecordingDeviceId_String,Prop_RadioVersion_Uint64,Prop_GraphicsAdapterLuid_Uint64,Prop_Audio_DefaultPlaybackDeviceId_String,Prop_VRCVersion_Uint64,Prop_DisplayDebugMode_Bool,Prop_WillDriftInYaw_Bool,Prop_CameraFirmwareDescription_String,Prop_ImageBridgeFirmwareVersion_Uint64,Prop_NeverTracked_Bool,Prop_ImuToHeadTransform_Matrix34,Prop_NumCameras_Int32,Prop_Firmware_ManualUpdate_Bool,Prop_DisplayMCImageHeight_Int32,Prop_ImuFactoryGyroBias_Vector3,Prop_CameraFrameLayout_Int32,Prop_LensCenterLeftV_Float,Prop_DisplayHiddenArea_Binary_Start,Prop_DriverRequestsApplicationPause_Bool,Prop_ParentDriver_Uint64,Prop_Audio_SupportsDualSpeakerAndJackOutput_Bool,Prop_BlockServerShutdown_Bool,Prop_Audio_DefaultPlaybackDeviceVolume_Float,Prop_DongleVersion_Uint64,Prop_FPGAVersion_Uint64,Prop_DriverDirectModeSendsVsyncEvents_Bool,Prop_FirmwareVersion_Uint64,Prop_SecondsFromPhotonsToVblank_Float,Prop_HardwareRevision_Uint64,Prop_DisplayMCImageData_Binary,Prop_Firmware_ManualUpdateURL_String,Prop_DisplayMCImageNumChannels_Int32,Prop_Firmware_UpdateAvailable_Bool,Prop_DisplayMCImageWidth_Int32,Prop_StatusDisplayTransform_Matrix34,Prop_DisplayAllowNightMode_Bool,Prop_DeviceBatteryPercentage_Float,Prop_DisplaySuppressed_Bool,Prop_DeviceIsCharging_Bool,Prop_ScreenshotVerticalFieldOfViewDegrees_Float,Prop_DeviceIsWireless_Bool,Prop_ScreenshotHorizontalFieldOfViewDegrees_Float,Prop_ConnectedWirelessDongle_String,Prop_CameraCompatibilityMode_Int32,Prop_AllWirelessDongleDescriptions_String,Prop_AudioFirmwareVersion_Uint64,Prop_HardwareRevision_String,Prop_DisplayHardwareVersion_Uint64,Prop_TrackingFirmwareVersion_String,Prop_DisplayBootloaderVersion_Uint64,Prop_ManufacturerName_String,Prop_DisplayFPGAVersion_Uint64,Prop_RenderModelName_String,Prop_CameraFirmwareVersion_Uint64,Prop_SerialNumber_String,Prop_UserHeadToEyeDepthMeters_Float,Prop_ModelNumber_String,Prop_LensCenterRightV_Float,Prop_TrackingSystemName_String,Prop_LensCenterRightU_Float,Prop_DriverRequestedMuraFeather_OuterBottom_Int32,Prop_DisplaySupportsAnalogGain_Bool,Prop_DisplayColorMultLeft_Vector3,Prop_DisplayAvailableFrameRates_Float_Array,Prop_SupportsRoomViewDepthProjection_Bool,Prop_CameraSupportsCompatibilityModes_Bool,Prop_HmdTrackingStyle_Int32,Prop_EstimatedDeviceFirstUseTime_Int32,Prop_ExpectedControllerType_String,Prop_ComputedSerialNumber_String,Prop_CameraDistortionCoefficients_Float_Array,Prop_ManufacturerSerialNumber_String,Prop_CameraDistortionFunction_Int32_Array,Prop_PeripheralApplicationVersion_Uint64,Prop_CameraWhiteBalance_Vector4_Array,Prop_Firmware_RemindUpdate_Bool,Prop_VendorSpecific_Reserved_End,Prop_OverrideContainer_Uint64,Prop_ParentContainer,Prop_DisplayHiddenArea_Binary_End,Prop_VendorSpecific_Reserved_Start,Prop_LensCenterLeftU_Float,Prop_FieldOfViewLeftDegrees_Float,Prop_AdditionalRadioFeatures_Uint64,Prop_CompositeFirmwareVersion_String,Prop_ConfigurationIncludesLighthouse20Features_Bool,Prop_AdditionalSystemReportData_String,Prop_ImuFactoryAccelerometerScale_Vector3,Prop_Identifiable_Bool,Prop_ImuFactoryAccelerometerBias_Vector3,Prop_AdditionalDeviceSettingsPath_String,Prop_ImuFactoryGyroScale_Vector3,Prop_CameraStreamFormat_Int32,Prop_AudioBridgeFirmwareVersion_Uint64,Prop_InputProfilePath_String,Prop_MinimumIpdStepMeters_Float,Prop_RegisteredDeviceType_String,Prop_DriverRequestsReducedRendering_Bool,Prop_ResourceRoot_String,Prop_DriverIsDrawingControllers_Bool,Prop_ViveSystemButtonFixRequired_Bool,Prop_DistortionMeshResolution_Int32,Prop_Firmware_ForceUpdateRequired_Bool,Prop_CameraToHeadTransforms_Matrix34_Array,Prop_DriverVersion_String,Prop_DoNotApplyPrediction_Bool,Prop_HasCamera_Bool,Prop_NamedIconPathTrackingReferenceDeviceOff_String,Prop_DeviceClass_Int32,Prop_NamedIconPathControllerRightDeviceOff_String,Prop_Firmware_ProgrammingTarget_String,Prop_ExpectedTrackingReferenceCount_Int32,Prop_ContainsProximitySensor_Bool,Prop_DriverProvidedChaperonePath_String,Prop_CanUnifyCoordinateSystemWithHmd_Bool,Prop_DisplayGCImage_String,Prop_DisplayGCPrescale_Float,Prop_DisplayGCScale_Float,Prop_DisplayGCOffset_Float,Prop_DisplayGCType_Int32,Prop_CameraToHeadTransform_Matrix34,Prop_EdidProductID_Int32,Prop_DisplayGCBlackClamp_Float,Prop_DisplayMCImageRight_String,Prop_DisplayMCImageLeft_String,Prop_EdidVendorID_Int32,Prop_DisplayMCScale_Float,Prop_DisplayMCOffset_Float,Prop_DisplayMCType_Int32,Prop_IsOnDesktop_Bool,Prop_DisplayFirmwareVersion_Uint64,Prop_PreviousUniverseId_Uint64,Prop_CurrentUniverseId_Uint64,Prop_UserIpdMeters_Float,Prop_DisplayFrequency_Float,Prop_SecondsFromVsyncToPhotons_Float,Prop_ReportsTimeSinceVSync_Bool,Prop_ControllerRoleHint_Int32,Prop_Axis4Type_Int32,Prop_Axis3Type_Int32,Prop_Axis2Type_Int32,Prop_Axis1Type_Int32,Prop_Axis0Type_Int32,Prop_SupportedButtons_Uint64,Prop_AttachedDeviceId_String,Prop_Nonce_Int32,Prop_CanWirelessIdentify_Bool,Prop_ModeLabel_String,Prop_TrackingRangeMaximumMeters_Float,Prop_TrackingRangeMinimumMeters_Float,Prop_FieldOfViewBottomDegrees_Float,Prop_FieldOfViewTopDegrees_Float,Prop_FieldOfViewRightDegrees_Float,Prop_DriverRequestedMuraFeather_OuterTop_Int32,Prop_DriverRequestedMuraFeather_OuterRight_Int32,Prop_DriverRequestedMuraFeather_OuterLeft_Int32,Prop_DriverRequestedMuraFeather_InnerBottom_Int32,Prop_DriverRequestedMuraFeather_InnerTop_Int32,Prop_DriverRequestedMuraFeather_InnerRight_Int32,Prop_DriverRequestedMuraFeather_InnerLeft_Int32,Prop_DriverRequestedMuraCorrectionMode_Int32,Prop_NamedIconPathDeviceStandbyAlert_String,Prop_NamedIconPathDeviceAlertLow_String,Prop_NamedIconPathDeviceStandby_String,Prop_NamedIconPathDeviceNotReady_String,Prop_NamedIconPathDeviceReadyAlert_String,Prop_NamedIconPathDeviceReady_String,Prop_NamedIconPathDeviceSearchingAlert_String,Prop_NamedIconPathDeviceSearching_String,Prop_NamedIconPathDeviceOff_String,Prop_IconPathName_String,Prop_HasSpatialAnchorsSupport_Bool,Prop_HasVirtualDisplayComponent_Bool,Prop_HasDriverDirectModeComponent_Bool,Prop_HasCameraComponent_Bool,Prop_HasControllerComponent_Bool,Prop_HasDisplayComponent_Bool,Prop_InstallPath_String,Prop_UserConfigPath_String,Prop_ControllerHandSelectionPriority_Int32,Prop_ControllerType_String,Prop_TrackedDeviceProperty_Max,Prop_IpdUIRangeMaxMeters_Float,Prop_IpdUIRangeMinMeters_Float,Prop_DashboardScale_Float,Prop_DisplayMaxAnalogGain_Float,Prop_DisplayMinAnalogGain_Float,Prop_DisplaySupportsRuntimeFramerateChange_Bool,Prop_DisplayColorMultRight_Vector3,Prop_DisplaySupportsMultipleFramerates_Bool,Prop_HmdColumnCorrectionSettingPrefix_String,Prop_DriverProvidedChaperoneVisibility_Bool,Prop_BootloaderVersion_Uint64,Prop_Invalid, };

    static const char* const ETrackedDeviceProperty_string_table[] =
    { "Prop_NamedIconPathControllerLeftDeviceOff_String","Prop_DeviceCanPowerOff_Bool","Prop_ExpectedControllerCount_Int32","Prop_DeviceProvidesBatteryStatus_Bool","Prop_Audio_DefaultRecordingDeviceId_String","Prop_RadioVersion_Uint64","Prop_GraphicsAdapterLuid_Uint64","Prop_Audio_DefaultPlaybackDeviceId_String","Prop_VRCVersion_Uint64","Prop_DisplayDebugMode_Bool","Prop_WillDriftInYaw_Bool","Prop_CameraFirmwareDescription_String","Prop_ImageBridgeFirmwareVersion_Uint64","Prop_NeverTracked_Bool","Prop_ImuToHeadTransform_Matrix34","Prop_NumCameras_Int32","Prop_Firmware_ManualUpdate_Bool","Prop_DisplayMCImageHeight_Int32","Prop_ImuFactoryGyroBias_Vector3","Prop_CameraFrameLayout_Int32","Prop_LensCenterLeftV_Float","Prop_DisplayHiddenArea_Binary_Start","Prop_DriverRequestsApplicationPause_Bool","Prop_ParentDriver_Uint64","Prop_Audio_SupportsDualSpeakerAndJackOutput_Bool","Prop_BlockServerShutdown_Bool","Prop_Audio_DefaultPlaybackDeviceVolume_Float","Prop_DongleVersion_Uint64","Prop_FPGAVersion_Uint64","Prop_DriverDirectModeSendsVsyncEvents_Bool","Prop_FirmwareVersion_Uint64","Prop_SecondsFromPhotonsToVblank_Float","Prop_HardwareRevision_Uint64","Prop_DisplayMCImageData_Binary","Prop_Firmware_ManualUpdateURL_String","Prop_DisplayMCImageNumChannels_Int32","Prop_Firmware_UpdateAvailable_Bool","Prop_DisplayMCImageWidth_Int32","Prop_StatusDisplayTransform_Matrix34","Prop_DisplayAllowNightMode_Bool","Prop_DeviceBatteryPercentage_Float","Prop_DisplaySuppressed_Bool","Prop_DeviceIsCharging_Bool","Prop_ScreenshotVerticalFieldOfViewDegrees_Float","Prop_DeviceIsWireless_Bool","Prop_ScreenshotHorizontalFieldOfViewDegrees_Float","Prop_ConnectedWirelessDongle_String","Prop_CameraCompatibilityMode_Int32","Prop_AllWirelessDongleDescriptions_String","Prop_AudioFirmwareVersion_Uint64","Prop_HardwareRevision_String","Prop_DisplayHardwareVersion_Uint64","Prop_TrackingFirmwareVersion_String","Prop_DisplayBootloaderVersion_Uint64","Prop_ManufacturerName_String","Prop_DisplayFPGAVersion_Uint64","Prop_RenderModelName_String","Prop_CameraFirmwareVersion_Uint64","Prop_SerialNumber_String","Prop_UserHeadToEyeDepthMeters_Float","Prop_ModelNumber_String","Prop_LensCenterRightV_Float","Prop_TrackingSystemName_String","Prop_LensCenterRightU_Float","Prop_DriverRequestedMuraFeather_OuterBottom_Int32","Prop_DisplaySupportsAnalogGain_Bool","Prop_DisplayColorMultLeft_Vector3","Prop_DisplayAvailableFrameRates_Float_Array","Prop_SupportsRoomViewDepthProjection_Bool","Prop_CameraSupportsCompatibilityModes_Bool","Prop_HmdTrackingStyle_Int32","Prop_EstimatedDeviceFirstUseTime_Int32","Prop_ExpectedControllerType_String","Prop_ComputedSerialNumber_String","Prop_CameraDistortionCoefficients_Float_Array","Prop_ManufacturerSerialNumber_String","Prop_CameraDistortionFunction_Int32_Array","Prop_PeripheralApplicationVersion_Uint64","Prop_CameraWhiteBalance_Vector4_Array","Prop_Firmware_RemindUpdate_Bool","Prop_VendorSpecific_Reserved_End","Prop_OverrideContainer_Uint64","Prop_ParentContainer","Prop_DisplayHiddenArea_Binary_End","Prop_VendorSpecific_Reserved_Start","Prop_LensCenterLeftU_Float","Prop_FieldOfViewLeftDegrees_Float","Prop_AdditionalRadioFeatures_Uint64","Prop_CompositeFirmwareVersion_String","Prop_ConfigurationIncludesLighthouse20Features_Bool","Prop_AdditionalSystemReportData_String","Prop_ImuFactoryAccelerometerScale_Vector3","Prop_Identifiable_Bool","Prop_ImuFactoryAccelerometerBias_Vector3","Prop_AdditionalDeviceSettingsPath_String","Prop_ImuFactoryGyroScale_Vector3","Prop_CameraStreamFormat_Int32","Prop_AudioBridgeFirmwareVersion_Uint64","Prop_InputProfilePath_String","Prop_MinimumIpdStepMeters_Float","Prop_RegisteredDeviceType_String","Prop_DriverRequestsReducedRendering_Bool","Prop_ResourceRoot_String","Prop_DriverIsDrawingControllers_Bool","Prop_ViveSystemButtonFixRequired_Bool","Prop_DistortionMeshResolution_Int32","Prop_Firmware_ForceUpdateRequired_Bool","Prop_CameraToHeadTransforms_Matrix34_Array","Prop_DriverVersion_String","Prop_DoNotApplyPrediction_Bool","Prop_HasCamera_Bool","Prop_NamedIconPathTrackingReferenceDeviceOff_String","Prop_DeviceClass_Int32","Prop_NamedIconPathControllerRightDeviceOff_String","Prop_Firmware_ProgrammingTarget_String","Prop_ExpectedTrackingReferenceCount_Int32","Prop_ContainsProximitySensor_Bool","Prop_DriverProvidedChaperonePath_String","Prop_CanUnifyCoordinateSystemWithHmd_Bool","Prop_DisplayGCImage_String","Prop_DisplayGCPrescale_Float","Prop_DisplayGCScale_Float","Prop_DisplayGCOffset_Float","Prop_DisplayGCType_Int32","Prop_CameraToHeadTransform_Matrix34","Prop_EdidProductID_Int32","Prop_DisplayGCBlackClamp_Float","Prop_DisplayMCImageRight_String","Prop_DisplayMCImageLeft_String","Prop_EdidVendorID_Int32","Prop_DisplayMCScale_Float","Prop_DisplayMCOffset_Float","Prop_DisplayMCType_Int32","Prop_IsOnDesktop_Bool","Prop_DisplayFirmwareVersion_Uint64","Prop_PreviousUniverseId_Uint64","Prop_CurrentUniverseId_Uint64","Prop_UserIpdMeters_Float","Prop_DisplayFrequency_Float","Prop_SecondsFromVsyncToPhotons_Float","Prop_ReportsTimeSinceVSync_Bool","Prop_ControllerRoleHint_Int32","Prop_Axis4Type_Int32","Prop_Axis3Type_Int32","Prop_Axis2Type_Int32","Prop_Axis1Type_Int32","Prop_Axis0Type_Int32","Prop_SupportedButtons_Uint64","Prop_AttachedDeviceId_String","Prop_Nonce_Int32","Prop_CanWirelessIdentify_Bool","Prop_ModeLabel_String","Prop_TrackingRangeMaximumMeters_Float","Prop_TrackingRangeMinimumMeters_Float","Prop_FieldOfViewBottomDegrees_Float","Prop_FieldOfViewTopDegrees_Float","Prop_FieldOfViewRightDegrees_Float","Prop_DriverRequestedMuraFeather_OuterTop_Int32","Prop_DriverRequestedMuraFeather_OuterRight_Int32","Prop_DriverRequestedMuraFeather_OuterLeft_Int32","Prop_DriverRequestedMuraFeather_InnerBottom_Int32","Prop_DriverRequestedMuraFeather_InnerTop_Int32","Prop_DriverRequestedMuraFeather_InnerRight_Int32","Prop_DriverRequestedMuraFeather_InnerLeft_Int32","Prop_DriverRequestedMuraCorrectionMode_Int32","Prop_NamedIconPathDeviceStandbyAlert_String","Prop_NamedIconPathDeviceAlertLow_String","Prop_NamedIconPathDeviceStandby_String","Prop_NamedIconPathDeviceNotReady_String","Prop_NamedIconPathDeviceReadyAlert_String","Prop_NamedIconPathDeviceReady_String","Prop_NamedIconPathDeviceSearchingAlert_String","Prop_NamedIconPathDeviceSearching_String","Prop_NamedIconPathDeviceOff_String","Prop_IconPathName_String","Prop_HasSpatialAnchorsSupport_Bool","Prop_HasVirtualDisplayComponent_Bool","Prop_HasDriverDirectModeComponent_Bool","Prop_HasCameraComponent_Bool","Prop_HasControllerComponent_Bool","Prop_HasDisplayComponent_Bool","Prop_InstallPath_String","Prop_UserConfigPath_String","Prop_ControllerHandSelectionPriority_Int32","Prop_ControllerType_String","Prop_TrackedDeviceProperty_Max","Prop_IpdUIRangeMaxMeters_Float","Prop_IpdUIRangeMinMeters_Float","Prop_DashboardScale_Float","Prop_DisplayMaxAnalogGain_Float","Prop_DisplayMinAnalogGain_Float","Prop_DisplaySupportsRuntimeFramerateChange_Bool","Prop_DisplayColorMultRight_Vector3","Prop_DisplaySupportsMultipleFramerates_Bool","Prop_HmdColumnCorrectionSettingPrefix_String","Prop_DriverProvidedChaperoneVisibility_Bool","Prop_BootloaderVersion_Uint64","Prop_Invalid", };

    const char* ETrackedDevicePropertyToString(vr::ETrackedDeviceProperty e)
    {
        static const unsigned char LUT[] =
        {
           80, 198, 198,   1,   1, 117, 115,   2,   0, 113,
          111, 109, 107, 105, 103,  22, 101,  99,  97,  12,
           14,  18,  95,  93,  91, 195,  89,  87,  78,  76,
           74,  72,  70, 195, 194,  69,  68,  67, 193,  66,
          192, 191,  65, 190, 189, 198, 198, 198, 188, 198,
          198, 198, 198, 198, 198, 198, 198, 187, 186, 198,
          198, 198, 198, 198, 198, 198,  93, 198, 198,  92,
          198, 198, 198, 198, 198, 198, 198, 198, 198, 198,
          198, 198, 198, 198, 198, 198, 198, 198, 198, 198,
          198, 198, 198,  97, 198,  96, 198, 198, 198, 198,
          198, 198, 198, 198, 198, 198, 198, 198, 198, 198,
          198, 198, 198, 198, 198, 198, 198,  89,  88,  87,
           86,  85,  84,  83,  82, 198, 198, 198, 198, 198,
          198, 198, 198, 198, 198, 198, 198, 198, 198, 198,
          198, 162, 161, 160, 159, 158, 157, 156, 155, 154,
          153, 198, 198, 198, 198, 198, 198, 164, 163, 162,
          161, 160, 159, 158, 157,  64, 134, 133, 132, 131,
          130, 129, 128, 127, 198, 198, 198, 198, 198, 198,
          198, 198, 198, 198, 198, 198, 198, 198, 198,  39,
           38,  37,  36,  35,  34,  33,  32, 198, 198, 198,
          198, 198, 198, 198, 198, 198, 198, 198, 198, 198,
          198, 198, 198, 138, 137, 136, 135, 134, 133, 132,
          131, 130, 129, 128, 127, 126, 125, 124, 123, 122,
          121, 120, 119, 118, 117,  83,  18,  61,  59,  57,
           55,   9,  53,  51,  49,  47,  45,  43,  41,  39,
           37,  35,  15,  33,  31,  29,  27,   7,   4,  26,
           24
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

    const char* ETrackedPropertyErrorToString(vr::ETrackedPropertyError e)
    {
        static const char* const ETrackedPropertyError_strings[] =
        {
        "TrackedProp_Success","TrackedProp_WrongDataType","TrackedProp_WrongDeviceClass","TrackedProp_BufferTooSmall","TrackedProp_UnknownProperty","TrackedProp_InvalidDevice","TrackedProp_CouldNotContactServer","TrackedProp_ValueNotProvidedByDevice","TrackedProp_StringExceedsMaximumLength","TrackedProp_NotYetAvailable","TrackedProp_PermissionDenied","TrackedProp_InvalidOperation","TrackedProp_CannotWriteToWildcards","TrackedProp_IPCReadFailure","TrackedProp_OutOfMemory","TrackedProp_InvalidContainer"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(ETrackedPropertyError_strings) / sizeof(ETrackedPropertyError_strings[0]))
            return nullptr;
        return ETrackedPropertyError_strings[offset];
    }
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EHmdTrackingStyleToString(vr::EHmdTrackingStyle e)
    {
        static const char* const EHmdTrackingStyle_strings[] =
        {
        "HmdTrackingStyle_Unknown","HmdTrackingStyle_Lighthouse","HmdTrackingStyle_OutsideInCameras","HmdTrackingStyle_InsideOutCameras"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EHmdTrackingStyle_strings) / sizeof(EHmdTrackingStyle_strings[0]))
            return nullptr;
        return EHmdTrackingStyle_strings[offset];
    }

    const char* EVRSubmitFlagsToString(vr::EVRSubmitFlags e)
    {
        static const char* const EVRSubmitFlags_strings[] =
        {
        "Submit_Default","Submit_LensDistortionAlreadyApplied","Submit_GlRenderBuffer",nullptr,"Submit_Reserved",nullptr,nullptr,nullptr,"Submit_TextureWithPose",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"Submit_TextureWithDepth",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"Submit_FrameDiscontinuty",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"Submit_VulkanTextureWithArrayData"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRSubmitFlags_strings) / sizeof(EVRSubmitFlags_strings[0]))
            return nullptr;
        return EVRSubmitFlags_strings[offset];
    }

    const char* EVRStateToString(vr::EVRState e)
    {
        static const char* const EVRState_strings[] =
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
    { VREvent_Input_BindingLoadFailed,VREvent_ConsoleClosed,VREvent_Modal_Cancel,VREvent_DashboardOverlayCreated,VREvent_OverlaySharedTextureChanged,VREvent_Input_HapticVibration,VREvent_ConsoleOpened,VREvent_OverlayGamepadFocusLost,VREvent_None,VREvent_SwitchGamepadFocus,VREvent_TrackedDeviceRoleChanged,VREvent_TrackedDeviceUserInteractionStarted,VREvent_SystemReport_Started,VREvent_OtherSectionSettingChanged,VREvent_TrackedDeviceUpdated,VREvent_TrackedDeviceDeactivated,VREvent_WindowsMRSectionSettingChanged,VREvent_GpuSpeedSectionSettingChanged,VREvent_TrackedDeviceActivated,VREvent_Notification_Destroyed,VREvent_DismissedWarningsSectionSettingChanged,VREvent_Notification_BeginInteraction,VREvent_NullSectionSettingChanged,VREvent_Notification_Hidden,VREvent_LighthouseSectionSettingChanged,VREvent_Notification_Shown,VREvent_SteamVRSectionSettingChanged,VREvent_ReloadOverlays,VREvent_EnableHomeAppSettingsHaveChanged,VREvent_ChaperoneRoomSetupFinished,VREvent_ShowUI,VREvent_TrackedCamera_EditingSurface,VREvent_AudioSettingsHaveChanged,VREvent_SubmitScreenshotToDashboard,VREvent_RoomViewShown,VREvent_ScreenshotFailed,VREvent_SpatialAnchors_RequestDescriptorUpdate,VREvent_ScreenshotTaken,VREvent_SpatialAnchors_RequestPoseUpdate,VREvent_RequestScreenshot,VREvent_SpatialAnchors_DescriptorUpdated,VREvent_StatusUpdate,VREvent_SpatialAnchors_PoseUpdated,VREvent_ImageFailed,VREvent_OverlayGamepadFocusGained,VREvent_HideKeyboard,VREvent_ShowKeyboard,VREvent_ImageLoaded,VREvent_ResetDashboard,VREvent_DashboardRequested,VREvent_VendorSpecific_Reserved_Start,VREvent_DashboardDeactivated,VREvent_DashboardActivated,VREvent_OverlayHidden,VREvent_OverlayShown,VREvent_MCImageUpdated,VREvent_TrackedCamera_ResumeVideoStream,VREvent_TrackedCamera_PauseVideoStream,VREvent_TrackedCamera_StopVideoStream,VREvent_TrackedCamera_StartVideoStream,VREvent_Monitor_HideHeadsetView,VREvent_Monitor_ShowHeadsetView,VREvent_ButtonUntouch,VREvent_ButtonTouch,VREvent_ButtonUnpress,VREvent_ButtonPress,VREvent_RestartRequested,VREvent_DriverRequestedQuit,VREvent_QuitAcknowledged,VREvent_ProcessQuit,VREvent_Quit,VREvent_WebInterface_InstallDriverCompleted,VREvent_ScreenshotTriggered,VREvent_KeyboardDone,VREvent_KeyboardCharInput,VREvent_Compositor_DisplayDisconnected,VREvent_KeyboardClosed,VREvent_Input_BindingSubscriptionChanged,VREvent_Input_BindingsUpdated,VREvent_Input_TrackerActivated,VREvent_Input_ProgressUpdate,VREvent_Input_ActionManifestLoadFailed,VREvent_Input_ActionManifestReloaded,VREvent_Input_BindingLoadSuccessful,VREvent_SceneApplicationStateChanged,VREvent_ShowRenderModels,VREvent_HideRenderModels,VREvent_ActionBindingReloaded,VREvent_SceneApplicationUsingWrongGraphicsAdapter,VREvent_InputFocusChanged,VREvent_SceneFocusChanged,VREvent_SceneApplicationChanged,VREvent_InputFocusReleased,VREvent_InputFocusCaptured,VREvent_Compositor_StageOverrideReady,VREvent_Compositor_DisplayModeNotSupported,VREvent_Compositor_OutOfVideoMemory,VREvent_Compositor_ApplicationResumed,VREvent_Compositor_ApplicationNotResponding,VREvent_Compositor_HDCPError,VREvent_Compositor_DisplayReconnected,VREvent_Compositor_ChaperoneBoundsHidden,VREvent_Compositor_ChaperoneBoundsShown,VREvent_MessageOverlayCloseRequested,VREvent_MessageOverlay_Closed,VREvent_WirelessReconnect,VREvent_WirelessDisconnect,VREvent_PropertyChanged,VREvent_LensDistortionChanged,VREvent_WatchdogWakeUpRequested,VREvent_LeaveStandbyMode,VREvent_EnterStandbyMode,VREvent_IpdChanged,VREvent_TrackedDeviceUserInteractionEnded,VREvent_LastKnownSectionSettingChanged,VREvent_TrackersSectionSettingChanged,VREvent_WebInterfaceSectionSettingChanged,VREvent_DashboardSectionSettingChanged,VREvent_PerfSectionSettingChanged,VREvent_KeyboardSectionSettingChanged,VREvent_NotificationsSectionSettingChanged,VREvent_UserInterfaceSectionSettingChanged,VREvent_PowerSettingsHaveChanged,VREvent_EnvironmentSettingsHaveChanged,VREvent_ModelSkinSettingsHaveChanged,VREvent_ReprojectionSettingHasChanged,VREvent_CameraSettingsHaveChanged,VREvent_BackgroundSettingHasChanged,VREvent_FirmwareUpdateFinished,VREvent_FirmwareUpdateStarted,VREvent_PerformanceTest_FidelityLevel,VREvent_PerformanceTest_DisableCapture,VREvent_PerformanceTest_EnableCapture,VREvent_UnlockMousePosition,VREvent_LockMousePosition,VREvent_ScrollSmooth,VREvent_OverlayFocusChanged,VREvent_TouchPadMove,VREvent_ScrollDiscrete,VREvent_FocusLeave,VREvent_FocusEnter,VREvent_MouseButtonUp,VREvent_MouseButtonDown,VREvent_MouseMove,VREvent_StandingZeroPoseReset,VREvent_ChaperoneRoomSetupStarting,VREvent_ChaperoneFlushCache,VREvent_SeatedZeroPoseReset,VREvent_ChaperoneSettingsHaveChanged,VREvent_ChaperoneTempDataHasChanged,VREvent_ChaperoneUniverseHasChanged,VREvent_ChaperoneDataHasChanged,VREvent_VendorSpecific_Reserved_End,VREvent_ProcessDisconnected,VREvent_ProcessConnected,VREvent_ApplicationMimeTypeLoad,VREvent_ApplicationListUpdated,VREvent_DesktopViewReady,VREvent_DesktopViewUpdating,VREvent_ShowDevTools,VREvent_RoomViewHidden,VREvent_PrimaryDashboardDeviceChanged,VREvent_ScreenshotProgressToDashboard, };

    static const char* const EVREventType_string_table[] =
    { "VREvent_Input_BindingLoadFailed","VREvent_ConsoleClosed","VREvent_Modal_Cancel","VREvent_DashboardOverlayCreated","VREvent_OverlaySharedTextureChanged","VREvent_Input_HapticVibration","VREvent_ConsoleOpened","VREvent_OverlayGamepadFocusLost","VREvent_None","VREvent_SwitchGamepadFocus","VREvent_TrackedDeviceRoleChanged","VREvent_TrackedDeviceUserInteractionStarted","VREvent_SystemReport_Started","VREvent_OtherSectionSettingChanged","VREvent_TrackedDeviceUpdated","VREvent_TrackedDeviceDeactivated","VREvent_WindowsMRSectionSettingChanged","VREvent_GpuSpeedSectionSettingChanged","VREvent_TrackedDeviceActivated","VREvent_Notification_Destroyed","VREvent_DismissedWarningsSectionSettingChanged","VREvent_Notification_BeginInteraction","VREvent_NullSectionSettingChanged","VREvent_Notification_Hidden","VREvent_LighthouseSectionSettingChanged","VREvent_Notification_Shown","VREvent_SteamVRSectionSettingChanged","VREvent_ReloadOverlays","VREvent_EnableHomeAppSettingsHaveChanged","VREvent_ChaperoneRoomSetupFinished","VREvent_ShowUI","VREvent_TrackedCamera_EditingSurface","VREvent_AudioSettingsHaveChanged","VREvent_SubmitScreenshotToDashboard","VREvent_RoomViewShown","VREvent_ScreenshotFailed","VREvent_SpatialAnchors_RequestDescriptorUpdate","VREvent_ScreenshotTaken","VREvent_SpatialAnchors_RequestPoseUpdate","VREvent_RequestScreenshot","VREvent_SpatialAnchors_DescriptorUpdated","VREvent_StatusUpdate","VREvent_SpatialAnchors_PoseUpdated","VREvent_ImageFailed","VREvent_OverlayGamepadFocusGained","VREvent_HideKeyboard","VREvent_ShowKeyboard","VREvent_ImageLoaded","VREvent_ResetDashboard","VREvent_DashboardRequested","VREvent_VendorSpecific_Reserved_Start","VREvent_DashboardDeactivated","VREvent_DashboardActivated","VREvent_OverlayHidden","VREvent_OverlayShown","VREvent_MCImageUpdated","VREvent_TrackedCamera_ResumeVideoStream","VREvent_TrackedCamera_PauseVideoStream","VREvent_TrackedCamera_StopVideoStream","VREvent_TrackedCamera_StartVideoStream","VREvent_Monitor_HideHeadsetView","VREvent_Monitor_ShowHeadsetView","VREvent_ButtonUntouch","VREvent_ButtonTouch","VREvent_ButtonUnpress","VREvent_ButtonPress","VREvent_RestartRequested","VREvent_DriverRequestedQuit","VREvent_QuitAcknowledged","VREvent_ProcessQuit","VREvent_Quit","VREvent_WebInterface_InstallDriverCompleted","VREvent_ScreenshotTriggered","VREvent_KeyboardDone","VREvent_KeyboardCharInput","VREvent_Compositor_DisplayDisconnected","VREvent_KeyboardClosed","VREvent_Input_BindingSubscriptionChanged","VREvent_Input_BindingsUpdated","VREvent_Input_TrackerActivated","VREvent_Input_ProgressUpdate","VREvent_Input_ActionManifestLoadFailed","VREvent_Input_ActionManifestReloaded","VREvent_Input_BindingLoadSuccessful","VREvent_SceneApplicationStateChanged","VREvent_ShowRenderModels","VREvent_HideRenderModels","VREvent_ActionBindingReloaded","VREvent_SceneApplicationUsingWrongGraphicsAdapter","VREvent_InputFocusChanged","VREvent_SceneFocusChanged","VREvent_SceneApplicationChanged","VREvent_InputFocusReleased","VREvent_InputFocusCaptured","VREvent_Compositor_StageOverrideReady","VREvent_Compositor_DisplayModeNotSupported","VREvent_Compositor_OutOfVideoMemory","VREvent_Compositor_ApplicationResumed","VREvent_Compositor_ApplicationNotResponding","VREvent_Compositor_HDCPError","VREvent_Compositor_DisplayReconnected","VREvent_Compositor_ChaperoneBoundsHidden","VREvent_Compositor_ChaperoneBoundsShown","VREvent_MessageOverlayCloseRequested","VREvent_MessageOverlay_Closed","VREvent_WirelessReconnect","VREvent_WirelessDisconnect","VREvent_PropertyChanged","VREvent_LensDistortionChanged","VREvent_WatchdogWakeUpRequested","VREvent_LeaveStandbyMode","VREvent_EnterStandbyMode","VREvent_IpdChanged","VREvent_TrackedDeviceUserInteractionEnded","VREvent_LastKnownSectionSettingChanged","VREvent_TrackersSectionSettingChanged","VREvent_WebInterfaceSectionSettingChanged","VREvent_DashboardSectionSettingChanged","VREvent_PerfSectionSettingChanged","VREvent_KeyboardSectionSettingChanged","VREvent_NotificationsSectionSettingChanged","VREvent_UserInterfaceSectionSettingChanged","VREvent_PowerSettingsHaveChanged","VREvent_EnvironmentSettingsHaveChanged","VREvent_ModelSkinSettingsHaveChanged","VREvent_ReprojectionSettingHasChanged","VREvent_CameraSettingsHaveChanged","VREvent_BackgroundSettingHasChanged","VREvent_FirmwareUpdateFinished","VREvent_FirmwareUpdateStarted","VREvent_PerformanceTest_FidelityLevel","VREvent_PerformanceTest_DisableCapture","VREvent_PerformanceTest_EnableCapture","VREvent_UnlockMousePosition","VREvent_LockMousePosition","VREvent_ScrollSmooth","VREvent_OverlayFocusChanged","VREvent_TouchPadMove","VREvent_ScrollDiscrete","VREvent_FocusLeave","VREvent_FocusEnter","VREvent_MouseButtonUp","VREvent_MouseButtonDown","VREvent_MouseMove","VREvent_StandingZeroPoseReset","VREvent_ChaperoneRoomSetupStarting","VREvent_ChaperoneFlushCache","VREvent_SeatedZeroPoseReset","VREvent_ChaperoneSettingsHaveChanged","VREvent_ChaperoneTempDataHasChanged","VREvent_ChaperoneUniverseHasChanged","VREvent_ChaperoneDataHasChanged","VREvent_VendorSpecific_Reserved_End","VREvent_ProcessDisconnected","VREvent_ProcessConnected","VREvent_ApplicationMimeTypeLoad","VREvent_ApplicationListUpdated","VREvent_DesktopViewReady","VREvent_DesktopViewUpdating","VREvent_ShowDevTools","VREvent_RoomViewHidden","VREvent_PrimaryDashboardDeviceChanged","VREvent_ScreenshotProgressToDashboard", };

    const char* EVREventTypeToString(vr::EVREventType e)
    {
        static const unsigned char LUT[] =
        {
            4,   1,   3,   6,  69,  40,   0,   6,  36,  34,
           32,  30, 159, 158,  31, 157,  27, 156, 155, 154,
          163, 163, 163, 116, 115, 163, 114, 113, 163, 163,
          163,  76, 145, 144, 143, 142, 141, 140, 139,  23,
          138, 163, 163, 163, 142, 141, 140, 139, 138, 137,
          136, 135,  26, 134, 133, 132, 163, 163, 163, 163,
          163, 163, 163, 163, 132, 131, 130, 163, 163, 163,
          163, 163, 163, 163, 163, 163,  60,  59,  76, 163,
          163, 163, 121, 120, 119, 118, 117, 116,  22,  20,
           18,  16, 115, 114, 113, 112, 111, 110, 109, 108,
           14,  11,  10,   7, 109, 108, 107, 106,   6, 105,
          104, 103, 102, 101, 104, 103, 163, 163, 163, 163,
          163, 163, 163, 163, 163, 163, 163, 163, 163, 163,
           62,  61,  35,  60,  59,  58,  57,  56,  55,  54,
          163, 163, 163, 163,  92,  91, 163, 163,  90,  89,
           88, 163,  87,  86,  85,  84,  83, 163, 163, 163,
          163, 163, 163, 163,   5,   0,  83,  82,  81,  80,
           79,  78,  77, 163, 163, 163,   7,   5,   4, 163,
          163, 163,  65, 163, 163, 163, 163, 163,  67,  66,
          163,  65,  64,  63, 163, 163, 163, 163, 163, 163,
           61,  60,  59,  58, 163, 163, 163, 163,  55,  54,
          163, 163, 163, 163, 163, 163, 163, 163, 163, 163,
           19,  18,  17,  16, 163, 163, 163, 163, 163, 163,
          163, 163,  49, 163, 163, 163, 163, 163, 163, 163,
          163, 163, 163, 163,  53,  52,  51,  50, 163,  48,
           47, 163,  46,  45,  44,  43
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

    const char* EDeviceActivityLevelToString(vr::EDeviceActivityLevel e)
    {
        static const char* const EDeviceActivityLevel_strings[] =
        {
        "k_EDeviceActivityLevel_Unknown","k_EDeviceActivityLevel_Idle","k_EDeviceActivityLevel_UserInteraction","k_EDeviceActivityLevel_UserInteraction_Timeout","k_EDeviceActivityLevel_Standby","k_EDeviceActivityLevel_Idle_Timeout"
        };

        int offset = (int)e - (-1);
        if (offset < 0 || offset >= sizeof(EDeviceActivityLevel_strings) / sizeof(EDeviceActivityLevel_strings[0]))
            return nullptr;
        return EDeviceActivityLevel_strings[offset];
    }
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRButtonIdToString(vr::EVRButtonId e)
    {
        static const char* const EVRButtonId_strings[] =
        {
        "k_EButton_System","k_EButton_ApplicationMenu","k_EButton_Grip","k_EButton_DPad_Left","k_EButton_DPad_Up","k_EButton_DPad_Right","k_EButton_DPad_Down","k_EButton_A",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"k_EButton_ProximitySensor","k_EButton_Axis0","k_EButton_Axis1","k_EButton_Axis2","k_EButton_Axis3","k_EButton_Axis4",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"k_EButton_Max"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRButtonId_strings) / sizeof(EVRButtonId_strings[0]))
            return nullptr;
        return EVRButtonId_strings[offset];
    }
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRMouseButtonToString(vr::EVRMouseButton e)
    {
        static const char* const EVRMouseButton_strings[] =
        {
        "VRMouseButton_Left","VRMouseButton_Right",nullptr,"VRMouseButton_Middle"
        };

        int offset = (int)e - (1);
        if (offset < 0 || offset >= sizeof(EVRMouseButton_strings) / sizeof(EVRMouseButton_strings[0]))
            return nullptr;
        return EVRMouseButton_strings[offset];
    }

    const char* EShowUITypeToString(vr::EShowUIType e)
    {
        static const char* const EShowUIType_strings[] =
        {
        "ShowUI_ControllerBinding","ShowUI_ManageTrackers",nullptr,"ShowUI_Pairing","ShowUI_Settings","ShowUI_DebugCommands","ShowUI_FullControllerBinding","ShowUI_ManageDrivers"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EShowUIType_strings) / sizeof(EShowUIType_strings[0]))
            return nullptr;
        return EShowUIType_strings[offset];
    }

    const char* EHDCPErrorToString(vr::EHDCPError e)
    {
        static const char* const EHDCPError_strings[] =
        {
        "HDCPError_None","HDCPError_LinkLost","HDCPError_Tampered","HDCPError_DeviceRevoked","HDCPError_Unknown"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EHDCPError_strings) / sizeof(EHDCPError_strings[0]))
            return nullptr;
        return EHDCPError_strings[offset];
    }

    const char* EVRComponentPropertyToString(vr::EVRComponentProperty e)
    {
        static const char* const EVRComponentProperty_strings[] =
        {
        "VRComponentProperty_IsStatic","VRComponentProperty_IsVisible",nullptr,"VRComponentProperty_IsTouched",nullptr,nullptr,nullptr,"VRComponentProperty_IsPressed",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRComponentProperty_IsScrolled",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRComponentProperty_IsHighlighted"
        };

        int offset = (int)e - (1);
        if (offset < 0 || offset >= sizeof(EVRComponentProperty_strings) / sizeof(EVRComponentProperty_strings[0]))
            return nullptr;
        return EVRComponentProperty_strings[offset];
    }

    const char* EVRInputErrorToString(vr::EVRInputError e)
    {
        static const char* const EVRInputError_strings[] =
        {
        "VRInputError_None","VRInputError_NameNotFound","VRInputError_WrongType","VRInputError_InvalidHandle","VRInputError_InvalidParam","VRInputError_NoSteam","VRInputError_MaxCapacityReached","VRInputError_IPCError","VRInputError_NoActiveActionSet","VRInputError_InvalidDevice","VRInputError_InvalidSkeleton","VRInputError_InvalidBoneCount","VRInputError_InvalidCompressedData","VRInputError_NoData","VRInputError_BufferTooSmall","VRInputError_MismatchedActionManifest","VRInputError_MissingSkeletonData","VRInputError_InvalidBoneIndex","VRInputError_InvalidPriority","VRInputError_PermissionDenied","VRInputError_InvalidRenderModel"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRInputError_strings) / sizeof(EVRInputError_strings[0]))
            return nullptr;
        return EVRInputError_strings[offset];
    }

    const char* EVRSpatialAnchorErrorToString(vr::EVRSpatialAnchorError e)
    {
        static const char* const EVRSpatialAnchorError_strings[] =
        {
        "VRSpatialAnchorError_Success","VRSpatialAnchorError_Internal","VRSpatialAnchorError_UnknownHandle","VRSpatialAnchorError_ArrayTooSmall","VRSpatialAnchorError_InvalidDescriptorChar","VRSpatialAnchorError_NotYetAvailable","VRSpatialAnchorError_NotAvailableInThisUniverse","VRSpatialAnchorError_PermanentlyUnavailable","VRSpatialAnchorError_WrongDriver","VRSpatialAnchorError_DescriptorTooLong","VRSpatialAnchorError_Unknown","VRSpatialAnchorError_NoRoomCalibration","VRSpatialAnchorError_InvalidArgument","VRSpatialAnchorError_UnknownDriver"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRSpatialAnchorError_strings) / sizeof(EVRSpatialAnchorError_strings[0]))
            return nullptr;
        return EVRSpatialAnchorError_strings[offset];
    }

    const char* EHiddenAreaMeshTypeToString(vr::EHiddenAreaMeshType e)
    {
        static const char* const EHiddenAreaMeshType_strings[] =
        {
        "k_eHiddenAreaMesh_Standard","k_eHiddenAreaMesh_Inverse","k_eHiddenAreaMesh_LineLoop","k_eHiddenAreaMesh_Max"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EHiddenAreaMeshType_strings) / sizeof(EHiddenAreaMeshType_strings[0]))
            return nullptr;
        return EHiddenAreaMeshType_strings[offset];
    }
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRControllerAxisTypeToString(vr::EVRControllerAxisType e)
    {
        static const char* const EVRControllerAxisType_strings[] =
        {
        "k_eControllerAxis_None","k_eControllerAxis_TrackPad","k_eControllerAxis_Joystick","k_eControllerAxis_Trigger"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRControllerAxisType_strings) / sizeof(EVRControllerAxisType_strings[0]))
            return nullptr;
        return EVRControllerAxisType_strings[offset];
    }
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRControllerEventOutputTypeToString(vr::EVRControllerEventOutputType e)
    {
        static const char* const EVRControllerEventOutputType_strings[] =
        {
        "ControllerEventOutput_OSEvents","ControllerEventOutput_VREvents"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRControllerEventOutputType_strings) / sizeof(EVRControllerEventOutputType_strings[0]))
            return nullptr;
        return EVRControllerEventOutputType_strings[offset];
    }

    const char* ECollisionBoundsStyleToString(vr::ECollisionBoundsStyle e)
    {
        static const char* const ECollisionBoundsStyle_strings[] =
        {
        "COLLISION_BOUNDS_STYLE_BEGINNER","COLLISION_BOUNDS_STYLE_INTERMEDIATE","COLLISION_BOUNDS_STYLE_SQUARES","COLLISION_BOUNDS_STYLE_ADVANCED","COLLISION_BOUNDS_STYLE_NONE","COLLISION_BOUNDS_STYLE_COUNT"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(ECollisionBoundsStyle_strings) / sizeof(ECollisionBoundsStyle_strings[0]))
            return nullptr;
        return ECollisionBoundsStyle_strings[offset];
    }
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVROverlayErrorToString(vr::EVROverlayError e)
    {
        static const char* const EVROverlayError_strings[] =
        {
        "VROverlayError_None",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VROverlayError_UnknownOverlay","VROverlayError_InvalidHandle","VROverlayError_PermissionDenied","VROverlayError_OverlayLimitExceeded","VROverlayError_WrongVisibilityType","VROverlayError_KeyTooLong","VROverlayError_NameTooLong","VROverlayError_KeyInUse","VROverlayError_WrongTransformType","VROverlayError_InvalidTrackedDevice","VROverlayError_InvalidParameter","VROverlayError_ThumbnailCantBeDestroyed","VROverlayError_ArrayTooSmall","VROverlayError_RequestFailed","VROverlayError_InvalidTexture","VROverlayError_UnableToLoadFile","VROverlayError_KeyboardAlreadyInUse","VROverlayError_NoNeighbor",nullptr,"VROverlayError_TooManyMaskPrimitives","VROverlayError_BadMaskPrimitive","VROverlayError_TextureAlreadyLocked","VROverlayError_TextureLockCapacityReached","VROverlayError_TextureNotLocked"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVROverlayError_strings) / sizeof(EVROverlayError_strings[0]))
            return nullptr;
        return EVROverlayError_strings[offset];
    }
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRApplicationTypeToString(vr::EVRApplicationType e)
    {
        static const char* const EVRApplicationType_strings[] =
        {
        "VRApplication_Other","VRApplication_Scene","VRApplication_Overlay","VRApplication_Background","VRApplication_Utility","VRApplication_VRMonitor","VRApplication_SteamWatchdog","VRApplication_Bootstrapper","VRApplication_WebHelper","VRApplication_OpenXR","VRApplication_Max"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRApplicationType_strings) / sizeof(EVRApplicationType_strings[0]))
            return nullptr;
        return EVRApplicationType_strings[offset];
    }

    const char* EVRFirmwareErrorToString(vr::EVRFirmwareError e)
    {
        static const char* const EVRFirmwareError_strings[] =
        {
        "VRFirmwareError_None","VRFirmwareError_Success","VRFirmwareError_Fail"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRFirmwareError_strings) / sizeof(EVRFirmwareError_strings[0]))
            return nullptr;
        return EVRFirmwareError_strings[offset];
    }

    const char* EVRNotificationErrorToString(vr::EVRNotificationError e)
    {
        static const char* const EVRNotificationError_strings[] =
        {
        "VRNotificationError_OK",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRNotificationError_InvalidNotificationId","VRNotificationError_NotificationQueueFull","VRNotificationError_InvalidOverlayHandle","VRNotificationError_SystemWithUserValueAlreadyExists"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRNotificationError_strings) / sizeof(EVRNotificationError_strings[0]))
            return nullptr;
        return EVRNotificationError_strings[offset];
    }

    const char* EVRSkeletalMotionRangeToString(vr::EVRSkeletalMotionRange e)
    {
        static const char* const EVRSkeletalMotionRange_strings[] =
        {
        "VRSkeletalMotionRange_WithController","VRSkeletalMotionRange_WithoutController"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRSkeletalMotionRange_strings) / sizeof(EVRSkeletalMotionRange_strings[0]))
            return nullptr;
        return EVRSkeletalMotionRange_strings[offset];
    }

    const char* EVRSkeletalTrackingLevelToString(vr::EVRSkeletalTrackingLevel e)
    {
        static const char* const EVRSkeletalTrackingLevel_strings[] =
        {
        "VRSkeletalTracking_Estimated","VRSkeletalTracking_Partial","VRSkeletalTracking_Full","VRSkeletalTrackingLevel_Count"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRSkeletalTrackingLevel_strings) / sizeof(EVRSkeletalTrackingLevel_strings[0]))
            return nullptr;
        return EVRSkeletalTrackingLevel_strings[offset];
    }
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRInitErrorToString(vr::EVRInitError e)
    {
        static const char* const EVRInitError_strings[] =
        {
        "VRInitError_None","VRInitError_Unknown",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRInitError_Init_InstallationNotFound","VRInitError_Init_InstallationCorrupt","VRInitError_Init_VRClientDLLNotFound","VRInitError_Init_FileNotFound","VRInitError_Init_FactoryNotFound","VRInitError_Init_InterfaceNotFound","VRInitError_Init_InvalidInterface","VRInitError_Init_UserConfigDirectoryInvalid","VRInitError_Init_HmdNotFound","VRInitError_Init_NotInitialized","VRInitError_Init_PathRegistryNotFound","VRInitError_Init_NoConfigPath","VRInitError_Init_NoLogPath","VRInitError_Init_PathRegistryNotWritable","VRInitError_Init_AppInfoInitFailed","VRInitError_Init_Retry","VRInitError_Init_InitCanceledByUser","VRInitError_Init_AnotherAppLaunching","VRInitError_Init_SettingsInitFailed","VRInitError_Init_ShuttingDown","VRInitError_Init_TooManyObjects","VRInitError_Init_NoServerForBackgroundApp","VRInitError_Init_NotSupportedWithCompositor","VRInitError_Init_NotAvailableToUtilityApps","VRInitError_Init_Internal","VRInitError_Init_HmdDriverIdIsNone","VRInitError_Init_HmdNotFoundPresenceFailed","VRInitError_Init_VRMonitorNotFound","VRInitError_Init_VRMonitorStartupFailed","VRInitError_Init_LowPowerWatchdogNotSupported","VRInitError_Init_InvalidApplicationType","VRInitError_Init_NotAvailableToWatchdogApps","VRInitError_Init_WatchdogDisabledInSettings","VRInitError_Init_VRDashboardNotFound","VRInitError_Init_VRDashboardStartupFailed","VRInitError_Init_VRHomeNotFound","VRInitError_Init_VRHomeStartupFailed","VRInitError_Init_RebootingBusy","VRInitError_Init_FirmwareUpdateBusy","VRInitError_Init_FirmwareRecoveryBusy","VRInitError_Init_USBServiceBusy","VRInitError_Init_VRWebHelperStartupFailed","VRInitError_Init_TrackerManagerInitFailed","VRInitError_Init_AlreadyRunning","VRInitError_Init_FailedForVrMonitor","VRInitError_Init_PropertyManagerInitFailed","VRInitError_Init_WebServerFailed",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRInitError_Driver_Failed","VRInitError_Driver_Unknown","VRInitError_Driver_HmdUnknown","VRInitError_Driver_NotLoaded","VRInitError_Driver_RuntimeOutOfDate","VRInitError_Driver_HmdInUse","VRInitError_Driver_NotCalibrated","VRInitError_Driver_CalibrationInvalid","VRInitError_Driver_HmdDisplayNotFound","VRInitError_Driver_TrackedDeviceInterfaceUnknown",nullptr,"VRInitError_Driver_HmdDriverIdOutOfBounds","VRInitError_Driver_HmdDisplayMirrored","VRInitError_Driver_HmdDisplayNotFoundLaptop",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRInitError_IPC_ServerInitFailed","VRInitError_IPC_ConnectFailed","VRInitError_IPC_SharedStateInitFailed","VRInitError_IPC_CompositorInitFailed","VRInitError_IPC_MutexInitFailed","VRInitError_IPC_Failed","VRInitError_IPC_CompositorConnectFailed","VRInitError_IPC_CompositorInvalidConnectResponse","VRInitError_IPC_ConnectFailedAfterMultipleAttempts","VRInitError_IPC_ConnectFailedAfterTargetExited","VRInitError_IPC_NamespaceUnavailable",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRInitError_Compositor_Failed","VRInitError_Compositor_D3D11HardwareRequired","VRInitError_Compositor_FirmwareRequiresUpdate","VRInitError_Compositor_OverlayInitFailed","VRInitError_Compositor_ScreenshotsInitFailed","VRInitError_Compositor_UnableToCreateDevice","VRInitError_Compositor_SharedStateIsNull","VRInitError_Compositor_NotificationManagerIsNull","VRInitError_Compositor_ResourceManagerClientIsNull","VRInitError_Compositor_MessageOverlaySharedStateInitFailure","VRInitError_Compositor_PropertiesInterfaceIsNull","VRInitError_Compositor_CreateFullscreenWindowFailed","VRInitError_Compositor_SettingsInterfaceIsNull","VRInitError_Compositor_FailedToShowWindow","VRInitError_Compositor_DistortInterfaceIsNull","VRInitError_Compositor_DisplayFrequencyFailure","VRInitError_Compositor_RendererInitializationFailed","VRInitError_Compositor_DXGIFactoryInterfaceIsNull","VRInitError_Compositor_DXGIFactoryCreateFailed","VRInitError_Compositor_DXGIFactoryQueryFailed","VRInitError_Compositor_InvalidAdapterDesktop","VRInitError_Compositor_InvalidHmdAttachment","VRInitError_Compositor_InvalidOutputDesktop","VRInitError_Compositor_InvalidDeviceProvided","VRInitError_Compositor_D3D11RendererInitializationFailed","VRInitError_Compositor_FailedToFindDisplayMode","VRInitError_Compositor_FailedToCreateSwapChain","VRInitError_Compositor_FailedToGetBackBuffer","VRInitError_Compositor_FailedToCreateRenderTarget","VRInitError_Compositor_FailedToCreateDXGI2SwapChain","VRInitError_Compositor_FailedtoGetDXGI2BackBuffer","VRInitError_Compositor_FailedToCreateDXGI2RenderTarget","VRInitError_Compositor_FailedToGetDXGIDeviceInterface","VRInitError_Compositor_SelectDisplayMode","VRInitError_Compositor_FailedToCreateNvAPIRenderTargets","VRInitError_Compositor_NvAPISetDisplayMode","VRInitError_Compositor_FailedToCreateDirectModeDisplay","VRInitError_Compositor_InvalidHmdPropertyContainer","VRInitError_Compositor_UpdateDisplayFrequency","VRInitError_Compositor_CreateRasterizerState","VRInitError_Compositor_CreateWireframeRasterizerState","VRInitError_Compositor_CreateSamplerState","VRInitError_Compositor_CreateClampToBorderSamplerState","VRInitError_Compositor_CreateAnisoSamplerState","VRInitError_Compositor_CreateOverlaySamplerState","VRInitError_Compositor_CreatePanoramaSamplerState","VRInitError_Compositor_CreateFontSamplerState","VRInitError_Compositor_CreateNoBlendState","VRInitError_Compositor_CreateBlendState","VRInitError_Compositor_CreateAlphaBlendState","VRInitError_Compositor_CreateBlendStateMaskR","VRInitError_Compositor_CreateBlendStateMaskG","VRInitError_Compositor_CreateBlendStateMaskB","VRInitError_Compositor_CreateDepthStencilState","VRInitError_Compositor_CreateDepthStencilStateNoWrite","VRInitError_Compositor_CreateDepthStencilStateNoDepth","VRInitError_Compositor_CreateFlushTexture","VRInitError_Compositor_CreateDistortionSurfaces","VRInitError_Compositor_CreateConstantBuffer","VRInitError_Compositor_CreateHmdPoseConstantBuffer","VRInitError_Compositor_CreateHmdPoseStagingConstantBuffer","VRInitError_Compositor_CreateSharedFrameInfoConstantBuffer","VRInitError_Compositor_CreateOverlayConstantBuffer","VRInitError_Compositor_CreateSceneTextureIndexConstantBuffer","VRInitError_Compositor_CreateReadableSceneTextureIndexConstantBuffer","VRInitError_Compositor_CreateLayerGraphicsTextureIndexConstantBuffer","VRInitError_Compositor_CreateLayerComputeTextureIndexConstantBuffer","VRInitError_Compositor_CreateLayerComputeSceneTextureIndexConstantBuffer","VRInitError_Compositor_CreateComputeHmdPoseConstantBuffer","VRInitError_Compositor_CreateGeomConstantBuffer","VRInitError_Compositor_CreatePanelMaskConstantBuffer","VRInitError_Compositor_CreatePixelSimUBO","VRInitError_Compositor_CreateMSAARenderTextures","VRInitError_Compositor_CreateResolveRenderTextures","VRInitError_Compositor_CreateComputeResolveRenderTextures","VRInitError_Compositor_CreateDriverDirectModeResolveTextures","VRInitError_Compositor_OpenDriverDirectModeResolveTextures","VRInitError_Compositor_CreateFallbackSyncTexture","VRInitError_Compositor_ShareFallbackSyncTexture","VRInitError_Compositor_CreateOverlayIndexBuffer","VRInitError_Compositor_CreateOverlayVertexBuffer","VRInitError_Compositor_CreateTextVertexBuffer","VRInitError_Compositor_CreateTextIndexBuffer","VRInitError_Compositor_CreateMirrorTextures","VRInitError_Compositor_CreateLastFrameRenderTexture","VRInitError_Compositor_CreateMirrorOverlay","VRInitError_Compositor_FailedToCreateVirtualDisplayBackbuffer","VRInitError_Compositor_DisplayModeNotSupported","VRInitError_Compositor_CreateOverlayInvalidCall","VRInitError_Compositor_CreateOverlayAlreadyInitialized","VRInitError_Compositor_FailedToCreateMailbox",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRInitError_VendorSpecific_UnableToConnectToOculusRuntime","VRInitError_VendorSpecific_WindowsNotInDevMode",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRInitError_VendorSpecific_HmdFound_CantOpenDevice","VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart","VRInitError_VendorSpecific_HmdFound_NoStoredConfig","VRInitError_VendorSpecific_HmdFound_ConfigTooBig","VRInitError_VendorSpecific_HmdFound_ConfigTooSmall","VRInitError_VendorSpecific_HmdFound_UnableToInitZLib","VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion","VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart","VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart","VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext","VRInitError_VendorSpecific_HmdFound_UserDataAddressRange","VRInitError_VendorSpecific_HmdFound_UserDataError","VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck","VRInitError_VendorSpecific_OculusRuntimeBadInstall",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRInitError_Steam_SteamInstallationNotFound","VRInitError_LastError"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRInitError_strings) / sizeof(EVRInitError_strings[0]))
            return nullptr;
        return EVRInitError_strings[offset];
    }
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRScreenshotTypeToString(vr::EVRScreenshotType e)
    {
        static const char* const EVRScreenshotType_strings[] =
        {
        "VRScreenshotType_None","VRScreenshotType_Mono","VRScreenshotType_Stereo","VRScreenshotType_Cubemap","VRScreenshotType_MonoPanorama","VRScreenshotType_StereoPanorama"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRScreenshotType_strings) / sizeof(EVRScreenshotType_strings[0]))
            return nullptr;
        return EVRScreenshotType_strings[offset];
    }

    const char* EVRScreenshotPropertyFilenamesToString(vr::EVRScreenshotPropertyFilenames e)
    {
        static const char* const EVRScreenshotPropertyFilenames_strings[] =
        {
        "VRScreenshotPropertyFilenames_Preview","VRScreenshotPropertyFilenames_VR"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRScreenshotPropertyFilenames_strings) / sizeof(EVRScreenshotPropertyFilenames_strings[0]))
            return nullptr;
        return EVRScreenshotPropertyFilenames_strings[offset];
    }
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRTrackedCameraErrorToString(vr::EVRTrackedCameraError e)
    {
        static const char* const EVRTrackedCameraError_strings[] =
        {
        "VRTrackedCameraError_None",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRTrackedCameraError_OperationFailed","VRTrackedCameraError_InvalidHandle","VRTrackedCameraError_InvalidFrameHeaderVersion","VRTrackedCameraError_OutOfHandles","VRTrackedCameraError_IPCFailure","VRTrackedCameraError_NotSupportedForThisDevice","VRTrackedCameraError_SharedMemoryFailure","VRTrackedCameraError_FrameBufferingFailure","VRTrackedCameraError_StreamSetupFailure","VRTrackedCameraError_InvalidGLTextureId","VRTrackedCameraError_InvalidSharedTextureHandle","VRTrackedCameraError_FailedToGetGLTextureId","VRTrackedCameraError_SharedTextureFailure","VRTrackedCameraError_NoFrameAvailable","VRTrackedCameraError_InvalidArgument","VRTrackedCameraError_InvalidFrameBufferSize"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRTrackedCameraError_strings) / sizeof(EVRTrackedCameraError_strings[0]))
            return nullptr;
        return EVRTrackedCameraError_strings[offset];
}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRTrackedCameraFrameLayoutToString(vr::EVRTrackedCameraFrameLayout e)
    {
        static const char* const EVRTrackedCameraFrameLayout_strings[] =
        {
        "EVRTrackedCameraFrameLayout_Mono","EVRTrackedCameraFrameLayout_Stereo",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"EVRTrackedCameraFrameLayout_VerticalLayout",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"EVRTrackedCameraFrameLayout_HorizontalLayout"
        };

        int offset = (int)e - (1);
        if (offset < 0 || offset >= sizeof(EVRTrackedCameraFrameLayout_strings) / sizeof(EVRTrackedCameraFrameLayout_strings[0]))
            return nullptr;
        return EVRTrackedCameraFrameLayout_strings[offset];
    }

    const char* EVRTrackedCameraFrameTypeToString(vr::EVRTrackedCameraFrameType e)
    {
        static const char* const EVRTrackedCameraFrameType_strings[] =
        {
        "VRTrackedCameraFrameType_Distorted","VRTrackedCameraFrameType_Undistorted","VRTrackedCameraFrameType_MaximumUndistorted","MAX_CAMERA_FRAME_TYPES"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRTrackedCameraFrameType_strings) / sizeof(EVRTrackedCameraFrameType_strings[0]))
            return nullptr;
        return EVRTrackedCameraFrameType_strings[offset];
    }

    const char* EVRDistortionFunctionTypeToString(vr::EVRDistortionFunctionType e)
    {
        static const char* const EVRDistortionFunctionType_strings[] =
        {
        "VRDistortionFunctionType_None","VRDistortionFunctionType_FTheta","VRDistortionFunctionType_Extended_FTheta","MAX_DISTORTION_FUNCTION_TYPES"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRDistortionFunctionType_strings) / sizeof(EVRDistortionFunctionType_strings[0]))
            return nullptr;
        return EVRDistortionFunctionType_strings[offset];
}

    const char* EVSyncToString(vr::EVSync e)
    {
        static const char* const EVSync_strings[] =
        {
        "VSync_None","VSync_WaitRender","VSync_NoWaitRender"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVSync_strings) / sizeof(EVSync_strings[0]))
            return nullptr;
        return EVSync_strings[offset];
    }

    const char* EVRMuraCorrectionModeToString(vr::EVRMuraCorrectionMode e)
    {
        static const char* const EVRMuraCorrectionMode_strings[] =
        {
        "EVRMuraCorrectionMode_Default","EVRMuraCorrectionMode_NoCorrection"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRMuraCorrectionMode_strings) / sizeof(EVRMuraCorrectionMode_strings[0]))
            return nullptr;
        return EVRMuraCorrectionMode_strings[offset];
    }

    const char* Imu_OffScaleFlagsToString(vr::Imu_OffScaleFlags e)
    {
        static const char* const Imu_OffScaleFlags_strings[] =
        {
        "OffScale_AccelX","OffScale_AccelY",nullptr,"OffScale_AccelZ",nullptr,nullptr,nullptr,"OffScale_GyroX",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"OffScale_GyroY",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"OffScale_GyroZ"
        };

        int offset = (int)e - (1);
        if (offset < 0 || offset >= sizeof(Imu_OffScaleFlags_strings) / sizeof(Imu_OffScaleFlags_strings[0]))
            return nullptr;
        return Imu_OffScaleFlags_strings[offset];
    }
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRApplicationErrorToString(vr::EVRApplicationError e)
    {
        static const char* const EVRApplicationError_strings[] =
        {
        "VRApplicationError_None",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationError_AppKeyAlreadyExists","VRApplicationError_NoManifest","VRApplicationError_NoApplication","VRApplicationError_InvalidIndex","VRApplicationError_UnknownApplication","VRApplicationError_IPCFailed","VRApplicationError_ApplicationAlreadyRunning","VRApplicationError_InvalidManifest","VRApplicationError_InvalidApplication","VRApplicationError_LaunchFailed","VRApplicationError_ApplicationAlreadyStarting","VRApplicationError_LaunchInProgress","VRApplicationError_OldApplicationQuitting","VRApplicationError_TransitionAborted","VRApplicationError_IsTemplate","VRApplicationError_SteamVRIsExiting",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationError_BufferTooSmall","VRApplicationError_PropertyNotSet","VRApplicationError_UnknownProperty","VRApplicationError_InvalidParameter"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRApplicationError_strings) / sizeof(EVRApplicationError_strings[0]))
            return nullptr;
        return EVRApplicationError_strings[offset];
    }
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRApplicationPropertyToString(vr::EVRApplicationProperty e)
    {
        static const char* const EVRApplicationProperty_strings[] =
        {
        "VRApplicationProperty_Name_String",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_LaunchType_String","VRApplicationProperty_WorkingDirectory_String","VRApplicationProperty_BinaryPath_String","VRApplicationProperty_Arguments_String","VRApplicationProperty_URL_String",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_Description_String","VRApplicationProperty_NewsURL_String","VRApplicationProperty_ImagePath_String","VRApplicationProperty_Source_String","VRApplicationProperty_ActionManifestURL_String",nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_IsDashboardOverlay_Bool","VRApplicationProperty_IsTemplate_Bool","VRApplicationProperty_IsInstanced_Bool","VRApplicationProperty_IsInternal_Bool","VRApplicationProperty_WantsCompositorPauseInStandby_Bool","VRApplicationProperty_IsHidden_Bool",nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_LastLaunchTime_Uint64"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRApplicationProperty_strings) / sizeof(EVRApplicationProperty_strings[0]))
            return nullptr;
        return EVRApplicationProperty_strings[offset];
    }

    const char* EVRSceneApplicationStateToString(vr::EVRSceneApplicationState e)
    {
        static const char* const EVRSceneApplicationState_strings[] =
        {
        "EVRSceneApplicationState_None","EVRSceneApplicationState_Starting","EVRSceneApplicationState_Quitting","EVRSceneApplicationState_Running","EVRSceneApplicationState_Waiting"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRSceneApplicationState_strings) / sizeof(EVRSceneApplicationState_strings[0]))
            return nullptr;
        return EVRSceneApplicationState_strings[offset];
    }

    const char* ChaperoneCalibrationStateToString(vr::ChaperoneCalibrationState e)
    {
        static const char* const ChaperoneCalibrationState_strings[] =
        {
        "ChaperoneCalibrationState_OK",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"ChaperoneCalibrationState_Warning","ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved","ChaperoneCalibrationState_Warning_BaseStationRemoved","ChaperoneCalibrationState_Warning_SeatedBoundsInvalid",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"ChaperoneCalibrationState_Error","ChaperoneCalibrationState_Error_BaseStationUninitialized","ChaperoneCalibrationState_Error_BaseStationConflict","ChaperoneCalibrationState_Error_PlayAreaInvalid","ChaperoneCalibrationState_Error_CollisionBoundsInvalid"
        };

        int offset = (int)e - (1);
        if (offset < 0 || offset >= sizeof(ChaperoneCalibrationState_strings) / sizeof(ChaperoneCalibrationState_strings[0]))
            return nullptr;
        return ChaperoneCalibrationState_strings[offset];
    }

    const char* EChaperoneConfigFileToString(vr::EChaperoneConfigFile e)
    {
        static const char* const EChaperoneConfigFile_strings[] =
        {
        "EChaperoneConfigFile_Live","EChaperoneConfigFile_Temp"
        };

        int offset = (int)e - (1);
        if (offset < 0 || offset >= sizeof(EChaperoneConfigFile_strings) / sizeof(EChaperoneConfigFile_strings[0]))
            return nullptr;
        return EChaperoneConfigFile_strings[offset];
    }

    const char* EChaperoneImportFlagsToString(vr::EChaperoneImportFlags e)
    {
        switch (e)
        {
        case (EChaperoneImport_BoundsOnly): return "EChaperoneImport_BoundsOnly";
        default: return nullptr;
        }
    }

    const char* EVRCompositorErrorToString(vr::EVRCompositorError e)
    {
        static const char* const EVRCompositorError_strings[] =
        {
        "VRCompositorError_None","VRCompositorError_RequestFailed",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRCompositorError_IncompatibleVersion","VRCompositorError_DoNotHaveFocus","VRCompositorError_InvalidTexture","VRCompositorError_IsNotSceneApplication","VRCompositorError_TextureIsOnWrongDevice","VRCompositorError_TextureUsesUnsupportedFormat","VRCompositorError_SharedTexturesNotSupported","VRCompositorError_IndexOutOfRange","VRCompositorError_AlreadySubmitted","VRCompositorError_InvalidBounds","VRCompositorError_AlreadySet"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRCompositorError_strings) / sizeof(EVRCompositorError_strings[0]))
            return nullptr;
        return EVRCompositorError_strings[offset];
}

    const char* EVRCompositorTimingModeToString(vr::EVRCompositorTimingMode e)
    {
        static const char* const EVRCompositorTimingMode_strings[] =
        {
        "VRCompositorTimingMode_Implicit","VRCompositorTimingMode_Explicit_RuntimePerformsPostPresentHandoff","VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRCompositorTimingMode_strings) / sizeof(EVRCompositorTimingMode_strings[0]))
            return nullptr;
        return EVRCompositorTimingMode_strings[offset];
    }

    const char* VROverlayInputMethodToString(vr::VROverlayInputMethod e)
    {
        static const char* const VROverlayInputMethod_strings[] =
        {
        "VROverlayInputMethod_None","VROverlayInputMethod_Mouse"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(VROverlayInputMethod_strings) / sizeof(VROverlayInputMethod_strings[0]))
            return nullptr;
        return VROverlayInputMethod_strings[offset];
    }

    const char* VROverlayTransformTypeToString(vr::VROverlayTransformType e)
    {
        static const char* const VROverlayTransformType_strings[] =
        {
        "VROverlayTransform_Invalid","VROverlayTransform_Absolute","VROverlayTransform_TrackedDeviceRelative","VROverlayTransform_SystemOverlay","VROverlayTransform_TrackedComponent","VROverlayTransform_Cursor","VROverlayTransform_DashboardTab","VROverlayTransform_DashboardThumb","VROverlayTransform_Mountable"
        };

        int offset = (int)e - (-1);
        if (offset < 0 || offset >= sizeof(VROverlayTransformType_strings) / sizeof(VROverlayTransformType_strings[0]))
            return nullptr;
        return VROverlayTransformType_strings[offset];
    }

    const char* VROverlayFlagsToString(vr::VROverlayFlags e)
    {
        switch (e)
        {
        case (VROverlayFlags_NoDashboardTab): return "VROverlayFlags_NoDashboardTab";
        case (VROverlayFlags_SendVRDiscreteScrollEvents): return "VROverlayFlags_SendVRDiscreteScrollEvents";
        case (VROverlayFlags_SendVRTouchpadEvents): return "VROverlayFlags_SendVRTouchpadEvents";
        case (VROverlayFlags_ShowTouchPadScrollWheel): return "VROverlayFlags_ShowTouchPadScrollWheel";
        case (VROverlayFlags_TransferOwnershipToInternalProcess): return "VROverlayFlags_TransferOwnershipToInternalProcess";
        case (VROverlayFlags_SideBySide_Parallel): return "VROverlayFlags_SideBySide_Parallel";
        case (VROverlayFlags_SideBySide_Crossed): return "VROverlayFlags_SideBySide_Crossed";
        case (VROverlayFlags_Panorama): return "VROverlayFlags_Panorama";
        case (VROverlayFlags_StereoPanorama): return "VROverlayFlags_StereoPanorama";
        case (VROverlayFlags_SortWithNonSceneOverlays): return "VROverlayFlags_SortWithNonSceneOverlays";
        case (VROverlayFlags_VisibleInDashboard): return "VROverlayFlags_VisibleInDashboard";
        case (VROverlayFlags_MakeOverlaysInteractiveIfVisible): return "VROverlayFlags_MakeOverlaysInteractiveIfVisible";
        case (VROverlayFlags_SendVRSmoothScrollEvents): return "VROverlayFlags_SendVRSmoothScrollEvents";
        case (VROverlayFlags_ProtectedContent): return "VROverlayFlags_ProtectedContent";
        case (VROverlayFlags_HideLaserIntersection): return "VROverlayFlags_HideLaserIntersection";
        case (VROverlayFlags_WantsModalBehavior): return "VROverlayFlags_WantsModalBehavior";
        case (VROverlayFlags_IsPremultiplied): return "VROverlayFlags_IsPremultiplied";
        default: return nullptr;
    }
}

    const char* VRMessageOverlayResponseToString(vr::VRMessageOverlayResponse e)
    {
        static const char* const VRMessageOverlayResponse_strings[] =
        {
        "VRMessageOverlayResponse_ButtonPress_0","VRMessageOverlayResponse_ButtonPress_1","VRMessageOverlayResponse_ButtonPress_2","VRMessageOverlayResponse_ButtonPress_3","VRMessageOverlayResponse_CouldntFindSystemOverlay","VRMessageOverlayResponse_CouldntFindOrCreateClientOverlay","VRMessageOverlayResponse_ApplicationQuit"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(VRMessageOverlayResponse_strings) / sizeof(VRMessageOverlayResponse_strings[0]))
            return nullptr;
        return VRMessageOverlayResponse_strings[offset];
    }

    const char* EGamepadTextInputModeToString(vr::EGamepadTextInputMode e)
    {
        static const char* const EGamepadTextInputMode_strings[] =
        {
        "k_EGamepadTextInputModeNormal","k_EGamepadTextInputModePassword","k_EGamepadTextInputModeSubmit"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EGamepadTextInputMode_strings) / sizeof(EGamepadTextInputMode_strings[0]))
            return nullptr;
        return EGamepadTextInputMode_strings[offset];
    }

    const char* EGamepadTextInputLineModeToString(vr::EGamepadTextInputLineMode e)
    {
        static const char* const EGamepadTextInputLineMode_strings[] =
        {
        "k_EGamepadTextInputLineModeSingleLine","k_EGamepadTextInputLineModeMultipleLines"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EGamepadTextInputLineMode_strings) / sizeof(EGamepadTextInputLineMode_strings[0]))
            return nullptr;
        return EGamepadTextInputLineMode_strings[offset];
    }

    const char* EVROverlayIntersectionMaskPrimitiveTypeToString(vr::EVROverlayIntersectionMaskPrimitiveType e)
    {
        static const char* const EVROverlayIntersectionMaskPrimitiveType_strings[] =
        {
        "OverlayIntersectionPrimitiveType_Rectangle","OverlayIntersectionPrimitiveType_Circle"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVROverlayIntersectionMaskPrimitiveType_strings) / sizeof(EVROverlayIntersectionMaskPrimitiveType_strings[0]))
            return nullptr;
        return EVROverlayIntersectionMaskPrimitiveType_strings[offset];
    }

    const char* EKeyboardFlagsToString(vr::EKeyboardFlags e)
    {
        static const char* const EKeyboardFlags_strings[] =
        {
        "KeyboardFlag_Minimal","KeyboardFlag_Modal"
        };

        int offset = (int)e - (1);
        if (offset < 0 || offset >= sizeof(EKeyboardFlags_strings) / sizeof(EKeyboardFlags_strings[0]))
            return nullptr;
        return EKeyboardFlags_strings[offset];
    }

    const char* EDeviceTypeToString(vr::EDeviceType e)
    {
        static const char* const EDeviceType_strings[] =
        {
        "DeviceType_Invalid","DeviceType_DirectX11","DeviceType_Vulkan"
        };

        int offset = (int)e - (-1);
        if (offset < 0 || offset >= sizeof(EDeviceType_strings) / sizeof(EDeviceType_strings[0]))
            return nullptr;
        return EDeviceType_strings[offset];
    }

    const char* HeadsetViewMode_tToString(vr::HeadsetViewMode_t e)
    {
        static const char* const HeadsetViewMode_t_strings[] =
        {
        "HeadsetViewMode_Left","HeadsetViewMode_Right","HeadsetViewMode_Both"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(HeadsetViewMode_t_strings) / sizeof(HeadsetViewMode_t_strings[0]))
            return nullptr;
        return HeadsetViewMode_t_strings[offset];
    }
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRRenderModelErrorToString(vr::EVRRenderModelError e)
    {
        static const char* const EVRRenderModelError_strings[] =
        {
        "VRRenderModelError_None",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRRenderModelError_Loading",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRRenderModelError_NotSupported",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRRenderModelError_InvalidArg","VRRenderModelError_InvalidModel","VRRenderModelError_NoShapes","VRRenderModelError_MultipleShapes","VRRenderModelError_TooManyVertices","VRRenderModelError_MultipleTextures","VRRenderModelError_BufferTooSmall","VRRenderModelError_NotEnoughNormals","VRRenderModelError_NotEnoughTexCoords",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRRenderModelError_InvalidTexture"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRRenderModelError_strings) / sizeof(EVRRenderModelError_strings[0]))
            return nullptr;
        return EVRRenderModelError_strings[offset];
    }
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRRenderModelTextureFormatToString(vr::EVRRenderModelTextureFormat e)
    {
        static const char* const EVRRenderModelTextureFormat_strings[] =
        {
        "VRRenderModelTextureFormat_RGBA8_SRGB","VRRenderModelTextureFormat_BC2","VRRenderModelTextureFormat_BC4","VRRenderModelTextureFormat_BC7","VRRenderModelTextureFormat_BC7_SRGB"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRRenderModelTextureFormat_strings) / sizeof(EVRRenderModelTextureFormat_strings[0]))
            return nullptr;
        return EVRRenderModelTextureFormat_strings[offset];
    }

    const char* EVRNotificationTypeToString(vr::EVRNotificationType e)
    {
        static const char* const EVRNotificationType_strings[] =
        {
        "EVRNotificationType_Transient","EVRNotificationType_Persistent","EVRNotificationType_Transient_SystemWithUserValue"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRNotificationType_strings) / sizeof(EVRNotificationType_strings[0]))
            return nullptr;
        return EVRNotificationType_strings[offset];
    }

    const char* EVRNotificationStyleToString(vr::EVRNotificationStyle e)
    {
        static const char* const EVRNotificationStyle_strings[] =
        {
        "EVRNotificationStyle_None",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"EVRNotificationStyle_Application",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"EVRNotificationStyle_Contact_Disabled","EVRNotificationStyle_Contact_Enabled","EVRNotificationStyle_Contact_Active"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRNotificationStyle_strings) / sizeof(EVRNotificationStyle_strings[0]))
            return nullptr;
        return EVRNotificationStyle_strings[offset];
    }
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRSettingsErrorToString(vr::EVRSettingsError e)
    {
        static const char* const EVRSettingsError_strings[] =
        {
        "VRSettingsError_None","VRSettingsError_IPCFailed","VRSettingsError_WriteFailed","VRSettingsError_ReadFailed","VRSettingsError_JsonParseFailed","VRSettingsError_UnsetSettingHasNoDefault"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRSettingsError_strings) / sizeof(EVRSettingsError_strings[0]))
            return nullptr;
        return EVRSettingsError_strings[offset];
    }
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

    const char* EVRScreenshotErrorToString(vr::EVRScreenshotError e)
    {
        static const char* const EVRScreenshotError_strings[] =
        {
        "VRScreenshotError_None","VRScreenshotError_RequestFailed",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRScreenshotError_IncompatibleVersion","VRScreenshotError_NotFound","VRScreenshotError_BufferTooSmall",nullptr,nullptr,nullptr,nullptr,nullptr,"VRScreenshotError_ScreenshotAlreadyInProgress"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRScreenshotError_strings) / sizeof(EVRScreenshotError_strings[0]))
            return nullptr;
        return EVRScreenshotError_strings[offset];
    }

    const char* EVRSkeletalTransformSpaceToString(vr::EVRSkeletalTransformSpace e)
    {
        static const char* const EVRSkeletalTransformSpace_strings[] =
        {
        "VRSkeletalTransformSpace_Model","VRSkeletalTransformSpace_Parent"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRSkeletalTransformSpace_strings) / sizeof(EVRSkeletalTransformSpace_strings[0]))
            return nullptr;
        return EVRSkeletalTransformSpace_strings[offset];
    }

    const char* EVRSkeletalReferencePoseToString(vr::EVRSkeletalReferencePose e)
    {
        static const char* const EVRSkeletalReferencePose_strings[] =
        {
        "VRSkeletalReferencePose_BindPose","VRSkeletalReferencePose_OpenHand","VRSkeletalReferencePose_Fist","VRSkeletalReferencePose_GripLimit"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRSkeletalReferencePose_strings) / sizeof(EVRSkeletalReferencePose_strings[0]))
            return nullptr;
        return EVRSkeletalReferencePose_strings[offset];
    }

    const char* EVRFingerToString(vr::EVRFinger e)
    {
        static const char* const EVRFinger_strings[] =
        {
        "VRFinger_Thumb","VRFinger_Index","VRFinger_Middle","VRFinger_Ring","VRFinger_Pinky","VRFinger_Count"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRFinger_strings) / sizeof(EVRFinger_strings[0]))
            return nullptr;
        return EVRFinger_strings[offset];
    }

    const char* EVRFingerSplayToString(vr::EVRFingerSplay e)
    {
        static const char* const EVRFingerSplay_strings[] =
        {
        "VRFingerSplay_Thumb_Index","VRFingerSplay_Index_Middle","VRFingerSplay_Middle_Ring","VRFingerSplay_Ring_Pinky","VRFingerSplay_Count"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRFingerSplay_strings) / sizeof(EVRFingerSplay_strings[0]))
            return nullptr;
        return EVRFingerSplay_strings[offset];
    }

    const char* EVRSummaryTypeToString(vr::EVRSummaryType e)
    {
        static const char* const EVRSummaryType_strings[] =
        {
        "VRSummaryType_FromAnimation","VRSummaryType_FromDevice"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRSummaryType_strings) / sizeof(EVRSummaryType_strings[0]))
            return nullptr;
        return EVRSummaryType_strings[offset];
    }

    const char* EVRInputFilterCancelTypeToString(vr::EVRInputFilterCancelType e)
    {
        static const char* const EVRInputFilterCancelType_strings[] =
        {
        "VRInputFilterCancel_Timers","VRInputFilterCancel_Momentum"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRInputFilterCancelType_strings) / sizeof(EVRInputFilterCancelType_strings[0]))
            return nullptr;
        return EVRInputFilterCancelType_strings[offset];
    }

    const char* EVRInputStringBitsToString(vr::EVRInputStringBits e)
    {
        static const char* const EVRInputStringBits_strings[] =
        {
        "VRInputString_All",nullptr,"VRInputString_Hand","VRInputString_ControllerType",nullptr,"VRInputString_InputSource"
        };

        int offset = (int)e - (-1);
        if (offset < 0 || offset >= sizeof(EVRInputStringBits_strings) / sizeof(EVRInputStringBits_strings[0]))
            return nullptr;
        return EVRInputStringBits_strings[offset];
    }

    const char* EIOBufferErrorToString(vr::EIOBufferError e)
    {
        static const char* const EIOBufferError_strings[] =
        {
        "IOBuffer_Success",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"IOBuffer_OperationFailed","IOBuffer_InvalidHandle","IOBuffer_InvalidArgument","IOBuffer_PathExists","IOBuffer_PathDoesNotExist","IOBuffer_Permission"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EIOBufferError_strings) / sizeof(EIOBufferError_strings[0]))
            return nullptr;
        return EIOBufferError_strings[offset];
    }

    const char* EIOBufferModeToString(vr::EIOBufferMode e)
    {
        switch (e)
        {
        case (IOBufferMode_Read): return "IOBufferMode_Read";
        case (IOBufferMode_Write): return "IOBufferMode_Write";
        case (IOBufferMode_Create): return "IOBufferMode_Create";
        default: return nullptr;
        }
    }

    const char* EVRDebugErrorToString(vr::EVRDebugError e)
    {
        static const char* const EVRDebugError_strings[] =
        {
        "VRDebugError_Success","VRDebugError_BadParameter"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRDebugError_strings) / sizeof(EVRDebugError_strings[0]))
            return nullptr;
        return EVRDebugError_strings[offset];
    }

}	

//========= Copyright Sean Payne (2016) ============//
//
// this file is auto generated.
// 
// Convert enum to C-style strings.
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
            "Eye_Left", "Eye_Right"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVREye_strings) / sizeof(EVREye_strings[0]))
            return nullptr;
        return EVREye_strings[offset];
    }

    const char *EGraphicsAPIConventionToString(vr::EGraphicsAPIConvention e)
    {
        static const char * const EGraphicsAPIConvention_strings[] =
        {
            "API_DirectX", "API_OpenGL"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EGraphicsAPIConvention_strings) / sizeof(EGraphicsAPIConvention_strings[0]))
            return nullptr;
        return EGraphicsAPIConvention_strings[offset];
    }

    const char *EColorSpaceToString(vr::EColorSpace e)
    {
        static const char * const EColorSpace_strings[] =
        {
            "ColorSpace_Auto", "ColorSpace_Gamma", "ColorSpace_Linear"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EColorSpace_strings) / sizeof(EColorSpace_strings[0]))
            return nullptr;
        return EColorSpace_strings[offset];
    }

    const char *ETrackingResultToString(vr::ETrackingResult e)
    {
        switch (e)
        {
        case (TrackingResult_Uninitialized) : return "TrackingResult_Uninitialized";
        case (TrackingResult_Calibrating_InProgress) : return "TrackingResult_Calibrating_InProgress";
        case (TrackingResult_Calibrating_OutOfRange) : return "TrackingResult_Calibrating_OutOfRange";
        case (TrackingResult_Running_OK) : return "TrackingResult_Running_OK";
        case (TrackingResult_Running_OutOfRange) : return "TrackingResult_Running_OutOfRange";
        default: return nullptr;
        }
    }

    const char *ETrackedDeviceClassToString(vr::ETrackedDeviceClass e)
    {
        switch (e)
        {
        case (TrackedDeviceClass_Invalid) : return "TrackedDeviceClass_Invalid";
        case (TrackedDeviceClass_HMD) : return "TrackedDeviceClass_HMD";
        case (TrackedDeviceClass_Controller) : return "TrackedDeviceClass_Controller";
        case (TrackedDeviceClass_TrackingReference) : return "TrackedDeviceClass_TrackingReference";
        case (TrackedDeviceClass_Count) : return "TrackedDeviceClass_Count";
        case (TrackedDeviceClass_Other) : return "TrackedDeviceClass_Other";
        default: return nullptr;
        }
    }

    const char *ETrackedControllerRoleToString(vr::ETrackedControllerRole e)
    {
        static const char * const ETrackedControllerRole_strings[] =
        {
            "TrackedControllerRole_Invalid", "TrackedControllerRole_LeftHand", "TrackedControllerRole_RightHand"
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
            "TrackingUniverseSeated", "TrackingUniverseStanding", "TrackingUniverseRawAndUncalibrated"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(ETrackingUniverseOrigin_strings) / sizeof(ETrackingUniverseOrigin_strings[0]))
            return nullptr;
        return ETrackingUniverseOrigin_strings[offset];
    }

    static const vr::ETrackedDeviceProperty ETrackedDeviceProperty_check_table[] =
    { Prop_DisplaySuppressed_Bool, Prop_DeviceBatteryPercentage_Float, Prop_DriverVersion_String, Prop_DeviceCanPowerOff_Bool, Prop_Firmware_ProgrammingTarget_String, Prop_ScreenshotVerticalFieldOfViewDegrees_Float, Prop_DeviceIsCharging_Bool, Prop_ScreenshotHorizontalFieldOfViewDegrees_Float, Prop_DeviceIsWireless_Bool, Prop_CameraCompatibilityMode_Int32, Prop_ConnectedWirelessDongle_String, Prop_AudioFirmwareVersion_Uint64, Prop_AllWirelessDongleDescriptions_String, Prop_DisplayHardwareVersion_Uint64, Prop_HardwareRevision_String, Prop_DisplayBootloaderVersion_Uint64, Prop_TrackingFirmwareVersion_String, Prop_DisplayFPGAVersion_Uint64, Prop_ManufacturerName_String, Prop_CameraFirmwareDescription_String, Prop_WillDriftInYaw_Bool, Prop_CameraFirmwareVersion_Uint64, Prop_RenderModelName_String, Prop_UserHeadToEyeDepthMeters_Float, Prop_SerialNumber_String, Prop_LensCenterRightV_Float, Prop_ModelNumber_String, Prop_LensCenterRightU_Float, Prop_TrackingSystemName_String, Prop_BlockServerShutdown_Bool, Prop_DongleVersion_Uint64, Prop_RadioVersion_Uint64, Prop_VRCVersion_Uint64, Prop_FPGAVersion_Uint64, Prop_FirmwareVersion_Uint64, Prop_HardwareRevision_Uint64, Prop_Firmware_ManualUpdateURL_String, Prop_Firmware_ManualUpdate_Bool, Prop_Firmware_UpdateAvailable_Bool, Prop_StatusDisplayTransform_Matrix34, Prop_LensCenterLeftV_Float, Prop_LensCenterLeftU_Float, Prop_DisplayGCImage_String, Prop_DisplayGCPrescale_Float, Prop_DisplayGCScale_Float, Prop_DisplayGCOffset_Float, Prop_DisplayGCType_Int32, Prop_CameraToHeadTransform_Matrix34, Prop_EdidProductID_Int32, Prop_DisplayGCBlackClamp_Float, Prop_DisplayMCImageRight_String, Prop_DisplayMCImageLeft_String, Prop_EdidVendorID_Int32, Prop_DisplayMCScale_Float, Prop_DisplayMCOffset_Float, Prop_DisplayMCType_Int32, Prop_IsOnDesktop_Bool, Prop_DisplayFirmwareVersion_Uint64, Prop_PreviousUniverseId_Uint64, Prop_CurrentUniverseId_Uint64, Prop_UserIpdMeters_Float, Prop_DisplayFrequency_Float, Prop_SecondsFromVsyncToPhotons_Float, Prop_ReportsTimeSinceVSync_Bool, Prop_ControllerRoleHint_Int32, Prop_Axis4Type_Int32, Prop_Axis3Type_Int32, Prop_Axis2Type_Int32, Prop_Axis1Type_Int32, Prop_Axis0Type_Int32, Prop_SupportedButtons_Uint64, Prop_AttachedDeviceId_String, Prop_ModeLabel_String, Prop_TrackingRangeMaximumMeters_Float, Prop_TrackingRangeMinimumMeters_Float, Prop_FieldOfViewBottomDegrees_Float, Prop_FieldOfViewTopDegrees_Float, Prop_FieldOfViewRightDegrees_Float, Prop_FieldOfViewLeftDegrees_Float, Prop_NamedIconPathDeviceAlertLow_String, Prop_NamedIconPathDeviceStandby_String, Prop_NamedIconPathDeviceNotReady_String, Prop_NamedIconPathDeviceReadyAlert_String, Prop_NamedIconPathDeviceReady_String, Prop_NamedIconPathDeviceSearchingAlert_String, Prop_NamedIconPathDeviceSearching_String, Prop_NamedIconPathDeviceOff_String, Prop_IconPathName_String, Prop_VendorSpecific_Reserved_End, Prop_VendorSpecific_Reserved_Start, Prop_Firmware_ForceUpdateRequired_Bool, Prop_HasCamera_Bool, Prop_DeviceClass_Int32, Prop_DeviceProvidesBatteryStatus_Bool, Prop_ContainsProximitySensor_Bool, Prop_CanUnifyCoordinateSystemWithHmd_Bool, };

    static const char * const ETrackedDeviceProperty_string_table[] =
    { "Prop_DisplaySuppressed_Bool", "Prop_DeviceBatteryPercentage_Float", "Prop_DriverVersion_String", "Prop_DeviceCanPowerOff_Bool", "Prop_Firmware_ProgrammingTarget_String", "Prop_ScreenshotVerticalFieldOfViewDegrees_Float", "Prop_DeviceIsCharging_Bool", "Prop_ScreenshotHorizontalFieldOfViewDegrees_Float", "Prop_DeviceIsWireless_Bool", "Prop_CameraCompatibilityMode_Int32", "Prop_ConnectedWirelessDongle_String", "Prop_AudioFirmwareVersion_Uint64", "Prop_AllWirelessDongleDescriptions_String", "Prop_DisplayHardwareVersion_Uint64", "Prop_HardwareRevision_String", "Prop_DisplayBootloaderVersion_Uint64", "Prop_TrackingFirmwareVersion_String", "Prop_DisplayFPGAVersion_Uint64", "Prop_ManufacturerName_String", "Prop_CameraFirmwareDescription_String", "Prop_WillDriftInYaw_Bool", "Prop_CameraFirmwareVersion_Uint64", "Prop_RenderModelName_String", "Prop_UserHeadToEyeDepthMeters_Float", "Prop_SerialNumber_String", "Prop_LensCenterRightV_Float", "Prop_ModelNumber_String", "Prop_LensCenterRightU_Float", "Prop_TrackingSystemName_String", "Prop_BlockServerShutdown_Bool", "Prop_DongleVersion_Uint64", "Prop_RadioVersion_Uint64", "Prop_VRCVersion_Uint64", "Prop_FPGAVersion_Uint64", "Prop_FirmwareVersion_Uint64", "Prop_HardwareRevision_Uint64", "Prop_Firmware_ManualUpdateURL_String", "Prop_Firmware_ManualUpdate_Bool", "Prop_Firmware_UpdateAvailable_Bool", "Prop_StatusDisplayTransform_Matrix34", "Prop_LensCenterLeftV_Float", "Prop_LensCenterLeftU_Float", "Prop_DisplayGCImage_String", "Prop_DisplayGCPrescale_Float", "Prop_DisplayGCScale_Float", "Prop_DisplayGCOffset_Float", "Prop_DisplayGCType_Int32", "Prop_CameraToHeadTransform_Matrix34", "Prop_EdidProductID_Int32", "Prop_DisplayGCBlackClamp_Float", "Prop_DisplayMCImageRight_String", "Prop_DisplayMCImageLeft_String", "Prop_EdidVendorID_Int32", "Prop_DisplayMCScale_Float", "Prop_DisplayMCOffset_Float", "Prop_DisplayMCType_Int32", "Prop_IsOnDesktop_Bool", "Prop_DisplayFirmwareVersion_Uint64", "Prop_PreviousUniverseId_Uint64", "Prop_CurrentUniverseId_Uint64", "Prop_UserIpdMeters_Float", "Prop_DisplayFrequency_Float", "Prop_SecondsFromVsyncToPhotons_Float", "Prop_ReportsTimeSinceVSync_Bool", "Prop_ControllerRoleHint_Int32", "Prop_Axis4Type_Int32", "Prop_Axis3Type_Int32", "Prop_Axis2Type_Int32", "Prop_Axis1Type_Int32", "Prop_Axis0Type_Int32", "Prop_SupportedButtons_Uint64", "Prop_AttachedDeviceId_String", "Prop_ModeLabel_String", "Prop_TrackingRangeMaximumMeters_Float", "Prop_TrackingRangeMinimumMeters_Float", "Prop_FieldOfViewBottomDegrees_Float", "Prop_FieldOfViewTopDegrees_Float", "Prop_FieldOfViewRightDegrees_Float", "Prop_FieldOfViewLeftDegrees_Float", "Prop_NamedIconPathDeviceAlertLow_String", "Prop_NamedIconPathDeviceStandby_String", "Prop_NamedIconPathDeviceNotReady_String", "Prop_NamedIconPathDeviceReadyAlert_String", "Prop_NamedIconPathDeviceReady_String", "Prop_NamedIconPathDeviceSearchingAlert_String", "Prop_NamedIconPathDeviceSearching_String", "Prop_NamedIconPathDeviceOff_String", "Prop_IconPathName_String", "Prop_VendorSpecific_Reserved_End", "Prop_VendorSpecific_Reserved_Start", "Prop_Firmware_ForceUpdateRequired_Bool", "Prop_HasCamera_Bool", "Prop_DeviceClass_Int32", "Prop_DeviceProvidesBatteryStatus_Bool", "Prop_ContainsProximitySensor_Bool", "Prop_CanUnifyCoordinateSystemWithHmd_Bool", };

    const char* ETrackedDevicePropertyToString(vr::ETrackedDeviceProperty e)
    {
        static const unsigned char LUT[] =
        {
            93, 92, 91, 1, 2, 90, 89, 0, 88, 96,
            96, 32, 96, 96, 96, 36, 45, 96, 96, 40,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 44,
            96, 96, 52, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 47, 46, 45, 44,
            43, 42, 41, 40, 39, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            42, 41, 40, 39, 38, 37, 36, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 39, 38, 37, 36, 35, 34,
            33, 32, 96, 96, 96, 96, 96, 96, 96, 96,
            96, 96, 96, 96, 96, 96, 96, 96, 63, 62,
            61, 60, 59, 58, 57, 56, 55, 54, 53, 52,
            51, 50, 49, 48, 47, 46, 45, 44, 43, 42,
            41, 40, 27, 25, 23, 21, 19, 17, 15, 13,
            11, 9, 7, 5, 0, 38, 37, 36, 35, 34,
            33, 32, 31, 30, 29, 28
        };
        int offset = LUT[(unsigned char)(((unsigned int)e & 0xFF00) >> 8)] + LUT[(unsigned char)e];
        if (offset < (sizeof(ETrackedDeviceProperty_check_table) / sizeof(ETrackedDeviceProperty_check_table[0])) &&
            (e == ETrackedDeviceProperty_check_table[offset]))
        {
            return ETrackedDeviceProperty_string_table[offset];
        }
        return nullptr;
    }

    const char *EVRSubmitFlagsToString(vr::EVRSubmitFlags e)
    {
        static const char * const EVRSubmitFlags_strings[] =
        {
            "Submit_Default", "Submit_LensDistortionAlreadyApplied", "Submit_GlRenderBuffer", nullptr, "Submit_VulkanTexture"
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
            "VRState_Undefined", "VRState_Off", "VRState_Searching", "VRState_Searching_Alert", "VRState_Ready", "VRState_Ready_Alert", "VRState_NotReady", "VRState_Standby", "VRState_Ready_Alert_Low"
        };

        int offset = (int)e - (-1);
        if (offset < 0 || offset >= sizeof(EVRState_strings) / sizeof(EVRState_strings[0]))
            return nullptr;
        return EVRState_strings[offset];
    }

    const char *EDeviceActivityLevelToString(vr::EDeviceActivityLevel e)
    {
        static const char * const EDeviceActivityLevel_strings[] =
        {
            "k_EDeviceActivityLevel_Unknown", "k_EDeviceActivityLevel_Idle", "k_EDeviceActivityLevel_UserInteraction", "k_EDeviceActivityLevel_UserInteraction_Timeout", "k_EDeviceActivityLevel_Standby"
        };

        int offset = (int)e - (-1);
        if (offset < 0 || offset >= sizeof(EDeviceActivityLevel_strings) / sizeof(EDeviceActivityLevel_strings[0]))
            return nullptr;
        return EDeviceActivityLevel_strings[offset];
    }

    const char *EVRMouseButtonToString(vr::EVRMouseButton e)
    {
        static const char * const EVRMouseButton_strings[] =
        {
            "VRMouseButton_Left", "VRMouseButton_Right", nullptr, "VRMouseButton_Middle"
        };

        int offset = (int)e - (1);
        if (offset < 0 || offset >= sizeof(EVRMouseButton_strings) / sizeof(EVRMouseButton_strings[0]))
            return nullptr;
        return EVRMouseButton_strings[offset];
    }

    const char *EVRControllerEventOutputTypeToString(vr::EVRControllerEventOutputType e)
    {
        static const char * const EVRControllerEventOutputType_strings[] =
        {
            "ControllerEventOutput_OSEvents", "ControllerEventOutput_VREvents"
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
            "COLLISION_BOUNDS_STYLE_BEGINNER", "COLLISION_BOUNDS_STYLE_INTERMEDIATE", "COLLISION_BOUNDS_STYLE_SQUARES", "COLLISION_BOUNDS_STYLE_ADVANCED", "COLLISION_BOUNDS_STYLE_NONE", "COLLISION_BOUNDS_STYLE_COUNT"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(ECollisionBoundsStyle_strings) / sizeof(ECollisionBoundsStyle_strings[0]))
            return nullptr;
        return ECollisionBoundsStyle_strings[offset];
    }

    const char *EVRApplicationTypeToString(vr::EVRApplicationType e)
    {
        static const char * const EVRApplicationType_strings[] =
        {
            "VRApplication_Other", "VRApplication_Scene", "VRApplication_Overlay", "VRApplication_Background", "VRApplication_Utility", "VRApplication_VRMonitor", "VRApplication_SteamWatchdog", "VRApplication_Max"
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
            "VRFirmwareError_None", "VRFirmwareError_Success", "VRFirmwareError_Fail"
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
        case (VRNotificationError_OK) : return "VRNotificationError_OK";
        case (VRNotificationError_InvalidNotificationId) : return "VRNotificationError_InvalidNotificationId";
        case (VRNotificationError_NotificationQueueFull) : return "VRNotificationError_NotificationQueueFull";
        case (VRNotificationError_InvalidOverlayHandle) : return "VRNotificationError_InvalidOverlayHandle";
        case (VRNotificationError_SystemWithUserValueAlreadyExists) : return "VRNotificationError_SystemWithUserValueAlreadyExists";
        default: return nullptr;
        }
    }

    static const vr::EVRInitError EVRInitError_check_table[] =
    { VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck, VRInitError_VendorSpecific_HmdFound_UserDataError, VRInitError_VendorSpecific_HmdFound_UserDataAddressRange, VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext, VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart, VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart, VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion, VRInitError_VendorSpecific_HmdFound_UnableToInitZLib, VRInitError_VendorSpecific_HmdFound_ConfigTooSmall, VRInitError_VendorSpecific_HmdFound_ConfigTooBig, VRInitError_VendorSpecific_HmdFound_NoStoredConfig, VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart, VRInitError_Compositor_ScreenshotsInitFailed, VRInitError_Driver_HmdDisplayMirrored, VRInitError_Driver_HmdDriverIdOutOfBounds, VRInitError_Driver_TrackedDeviceInterfaceUnknown, VRInitError_Driver_HmdDisplayNotFound, VRInitError_Driver_CalibrationInvalid, VRInitError_Driver_NotCalibrated, VRInitError_Driver_HmdInUse, VRInitError_Driver_RuntimeOutOfDate, VRInitError_Driver_NotLoaded, VRInitError_Driver_HmdUnknown, VRInitError_Driver_Unknown, VRInitError_Driver_Failed, VRInitError_Unknown, VRInitError_None, VRInitError_Compositor_OverlayInitFailed, VRInitError_Compositor_FirmwareRequiresUpdate, VRInitError_Compositor_D3D11HardwareRequired, VRInitError_Compositor_Failed, VRInitError_Init_WatchdogDisabledInSettings, VRInitError_Init_NotAvailableToWatchdogApps, VRInitError_Init_InvalidApplicationType, VRInitError_Init_LowPowerWatchdogNotSupported, VRInitError_Init_VRMonitorStartupFailed, VRInitError_Init_VRMonitorNotFound, VRInitError_Init_HmdNotFoundPresenceFailed, VRInitError_Init_HmdDriverIdIsNone, VRInitError_Init_Internal, VRInitError_Init_NotAvailableToUtilityApps, VRInitError_Init_NotSupportedWithCompositor, VRInitError_Init_NoServerForBackgroundApp, VRInitError_Init_TooManyObjects, VRInitError_Init_ShuttingDown, VRInitError_Init_SettingsInitFailed, VRInitError_Init_AnotherAppLaunching, VRInitError_Init_InitCanceledByUser, VRInitError_Init_Retry, VRInitError_Init_AppInfoInitFailed, VRInitError_Init_PathRegistryNotWritable, VRInitError_Init_NoLogPath, VRInitError_Init_NoConfigPath, VRInitError_Init_PathRegistryNotFound, VRInitError_Init_NotInitialized, VRInitError_Init_HmdNotFound, VRInitError_Init_UserConfigDirectoryInvalid, VRInitError_Init_InvalidInterface, VRInitError_Init_InterfaceNotFound, VRInitError_Init_FactoryNotFound, VRInitError_Init_FileNotFound, VRInitError_Init_VRClientDLLNotFound, VRInitError_Init_InstallationCorrupt, VRInitError_Init_InstallationNotFound, VRInitError_VendorSpecific_HmdFound_CantOpenDevice, VRInitError_IPC_ConnectFailedAfterMultipleAttempts, VRInitError_IPC_CompositorInvalidConnectResponse, VRInitError_IPC_CompositorConnectFailed, VRInitError_IPC_Failed, VRInitError_IPC_MutexInitFailed, VRInitError_IPC_CompositorInitFailed, VRInitError_IPC_SharedStateInitFailed, VRInitError_IPC_ConnectFailed, VRInitError_IPC_ServerInitFailed, VRInitError_Steam_SteamInstallationNotFound, VRInitError_VendorSpecific_UnableToConnectToOculusRuntime, };

    static const char * const EVRInitError_string_table[] =
    { "VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck", "VRInitError_VendorSpecific_HmdFound_UserDataError", "VRInitError_VendorSpecific_HmdFound_UserDataAddressRange", "VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext", "VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart", "VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart", "VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion", "VRInitError_VendorSpecific_HmdFound_UnableToInitZLib", "VRInitError_VendorSpecific_HmdFound_ConfigTooSmall", "VRInitError_VendorSpecific_HmdFound_ConfigTooBig", "VRInitError_VendorSpecific_HmdFound_NoStoredConfig", "VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart", "VRInitError_Compositor_ScreenshotsInitFailed", "VRInitError_Driver_HmdDisplayMirrored", "VRInitError_Driver_HmdDriverIdOutOfBounds", "VRInitError_Driver_TrackedDeviceInterfaceUnknown", "VRInitError_Driver_HmdDisplayNotFound", "VRInitError_Driver_CalibrationInvalid", "VRInitError_Driver_NotCalibrated", "VRInitError_Driver_HmdInUse", "VRInitError_Driver_RuntimeOutOfDate", "VRInitError_Driver_NotLoaded", "VRInitError_Driver_HmdUnknown", "VRInitError_Driver_Unknown", "VRInitError_Driver_Failed", "VRInitError_Unknown", "VRInitError_None", "VRInitError_Compositor_OverlayInitFailed", "VRInitError_Compositor_FirmwareRequiresUpdate", "VRInitError_Compositor_D3D11HardwareRequired", "VRInitError_Compositor_Failed", "VRInitError_Init_WatchdogDisabledInSettings", "VRInitError_Init_NotAvailableToWatchdogApps", "VRInitError_Init_InvalidApplicationType", "VRInitError_Init_LowPowerWatchdogNotSupported", "VRInitError_Init_VRMonitorStartupFailed", "VRInitError_Init_VRMonitorNotFound", "VRInitError_Init_HmdNotFoundPresenceFailed", "VRInitError_Init_HmdDriverIdIsNone", "VRInitError_Init_Internal", "VRInitError_Init_NotAvailableToUtilityApps", "VRInitError_Init_NotSupportedWithCompositor", "VRInitError_Init_NoServerForBackgroundApp", "VRInitError_Init_TooManyObjects", "VRInitError_Init_ShuttingDown", "VRInitError_Init_SettingsInitFailed", "VRInitError_Init_AnotherAppLaunching", "VRInitError_Init_InitCanceledByUser", "VRInitError_Init_Retry", "VRInitError_Init_AppInfoInitFailed", "VRInitError_Init_PathRegistryNotWritable", "VRInitError_Init_NoLogPath", "VRInitError_Init_NoConfigPath", "VRInitError_Init_PathRegistryNotFound", "VRInitError_Init_NotInitialized", "VRInitError_Init_HmdNotFound", "VRInitError_Init_UserConfigDirectoryInvalid", "VRInitError_Init_InvalidInterface", "VRInitError_Init_InterfaceNotFound", "VRInitError_Init_FactoryNotFound", "VRInitError_Init_FileNotFound", "VRInitError_Init_VRClientDLLNotFound", "VRInitError_Init_InstallationCorrupt", "VRInitError_Init_InstallationNotFound", "VRInitError_VendorSpecific_HmdFound_CantOpenDevice", "VRInitError_IPC_ConnectFailedAfterMultipleAttempts", "VRInitError_IPC_CompositorInvalidConnectResponse", "VRInitError_IPC_CompositorConnectFailed", "VRInitError_IPC_Failed", "VRInitError_IPC_MutexInitFailed", "VRInitError_IPC_CompositorInitFailed", "VRInitError_IPC_SharedStateInitFailed", "VRInitError_IPC_ConnectFailed", "VRInitError_IPC_ServerInitFailed", "VRInitError_Steam_SteamInstallationNotFound", "VRInitError_VendorSpecific_UnableToConnectToOculusRuntime", };

    const char* EVRInitErrorToString(vr::EVRInitError e)
    {
        static const unsigned char LUT[] =
        {
            13, 12, 76, 38, 0, 76, 76, 71, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 61, 60, 59, 58, 57, 56,
            55, 54, 53, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 64, 11, 10,
            9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            50, 49, 48, 47, 46, 45, 44, 43, 42, 41,
            40, 39, 38, 37, 36, 35, 34, 33, 32, 31,
            30, 29, 28, 27, 26, 25, 24, 23, 22, 21,
            20, 19, 18, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 18, 17, 16, 15, 0, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            11, 10, 9, 8, 7, 6, 5, 4, 3, 2,
            76, 1, 0, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 37, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
            76, 76, 76, 76, 76, 76
        };
        int offset = LUT[(unsigned char)(((unsigned int)e & 0xFF00) >> 8)] + LUT[(unsigned char)e];
        if (offset < (sizeof(EVRInitError_check_table) / sizeof(EVRInitError_check_table[0])) &&
            (e == EVRInitError_check_table[offset]))
        {
            return EVRInitError_string_table[offset];
        }
        return nullptr;
    }

    const char *EVRScreenshotTypeToString(vr::EVRScreenshotType e)
    {
        static const char * const EVRScreenshotType_strings[] =
        {
            "VRScreenshotType_None", "VRScreenshotType_Mono", "VRScreenshotType_Stereo", "VRScreenshotType_Cubemap", "VRScreenshotType_MonoPanorama", "VRScreenshotType_StereoPanorama"
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
            "VRScreenshotPropertyFilenames_Preview", "VRScreenshotPropertyFilenames_VR"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRScreenshotPropertyFilenames_strings) / sizeof(EVRScreenshotPropertyFilenames_strings[0]))
            return nullptr;
        return EVRScreenshotPropertyFilenames_strings[offset];
    }

    const char *EVRTrackedCameraFrameTypeToString(vr::EVRTrackedCameraFrameType e)
    {
        static const char * const EVRTrackedCameraFrameType_strings[] =
        {
            "VRTrackedCameraFrameType_Distorted", "VRTrackedCameraFrameType_Undistorted", "VRTrackedCameraFrameType_MaximumUndistorted", "MAX_CAMERA_FRAME_TYPES"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRTrackedCameraFrameType_strings) / sizeof(EVRTrackedCameraFrameType_strings[0]))
            return nullptr;
        return EVRTrackedCameraFrameType_strings[offset];
    }

    static const vr::EVRApplicationProperty EVRApplicationProperty_check_table[] =
    { VRApplicationProperty_LastLaunchTime_Uint64, VRApplicationProperty_IsInstanced_Bool, VRApplicationProperty_IsTemplate_Bool, VRApplicationProperty_IsDashboardOverlay_Bool, VRApplicationProperty_Source_String, VRApplicationProperty_ImagePath_String, VRApplicationProperty_NewsURL_String, VRApplicationProperty_Description_String, VRApplicationProperty_URL_String, VRApplicationProperty_Arguments_String, VRApplicationProperty_BinaryPath_String, VRApplicationProperty_WorkingDirectory_String, VRApplicationProperty_LaunchType_String, VRApplicationProperty_Name_String, };

    static const char * const EVRApplicationProperty_string_table[] =
    { "VRApplicationProperty_LastLaunchTime_Uint64", "VRApplicationProperty_IsInstanced_Bool", "VRApplicationProperty_IsTemplate_Bool", "VRApplicationProperty_IsDashboardOverlay_Bool", "VRApplicationProperty_Source_String", "VRApplicationProperty_ImagePath_String", "VRApplicationProperty_NewsURL_String", "VRApplicationProperty_Description_String", "VRApplicationProperty_URL_String", "VRApplicationProperty_Arguments_String", "VRApplicationProperty_BinaryPath_String", "VRApplicationProperty_WorkingDirectory_String", "VRApplicationProperty_LaunchType_String", "VRApplicationProperty_Name_String", };

    const char* EVRApplicationPropertyToString(vr::EVRApplicationProperty e)
    {
        static const unsigned char LUT[] =
        {
            13, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 12, 11, 10, 9, 8, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            7, 6, 5, 4, 14, 14, 14, 14, 14, 14,
            3, 2, 1, 14, 14, 14, 14, 14, 14, 14,
            0, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
            14, 14, 14, 14, 14, 14
        };
        int offset = LUT[(unsigned char)e];
        if (offset < (sizeof(EVRApplicationProperty_check_table) / sizeof(EVRApplicationProperty_check_table[0])) &&
            (e == EVRApplicationProperty_check_table[offset]))
        {
            return EVRApplicationProperty_string_table[offset];
        }
        return nullptr;
    }

    const char *EVRApplicationTransitionStateToString(vr::EVRApplicationTransitionState e)
    {
        static const char * const EVRApplicationTransitionState_strings[] =
        {
            "VRApplicationTransition_None", nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, "VRApplicationTransition_OldAppQuitSent", "VRApplicationTransition_WaitingForExternalLaunch", nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, "VRApplicationTransition_NewAppLaunched"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRApplicationTransitionState_strings) / sizeof(EVRApplicationTransitionState_strings[0]))
            return nullptr;
        return EVRApplicationTransitionState_strings[offset];
    }

    const char *ChaperoneCalibrationStateToString(vr::ChaperoneCalibrationState e)
    {
        switch (e)
        {
        case (ChaperoneCalibrationState_OK) : return "ChaperoneCalibrationState_OK";
        case (ChaperoneCalibrationState_Warning) : return "ChaperoneCalibrationState_Warning";
        case (ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved) : return "ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved";
        case (ChaperoneCalibrationState_Warning_BaseStationRemoved) : return "ChaperoneCalibrationState_Warning_BaseStationRemoved";
        case (ChaperoneCalibrationState_Warning_SeatedBoundsInvalid) : return "ChaperoneCalibrationState_Warning_SeatedBoundsInvalid";
        case (ChaperoneCalibrationState_Error) : return "ChaperoneCalibrationState_Error";
        case (ChaperoneCalibrationState_Error_BaseStationUninitalized) : return "ChaperoneCalibrationState_Error_BaseStationUninitalized";
        case (ChaperoneCalibrationState_Error_BaseStationConflict) : return "ChaperoneCalibrationState_Error_BaseStationConflict";
        case (ChaperoneCalibrationState_Error_PlayAreaInvalid) : return "ChaperoneCalibrationState_Error_PlayAreaInvalid";
        case (ChaperoneCalibrationState_Error_CollisionBoundsInvalid) : return "ChaperoneCalibrationState_Error_CollisionBoundsInvalid";
        default: return nullptr;
        }
    }

    const char *EChaperoneConfigFileToString(vr::EChaperoneConfigFile e)
    {
        static const char * const EChaperoneConfigFile_strings[] =
        {
            "EChaperoneConfigFile_Live", "EChaperoneConfigFile_Temp"
        };

        int offset = (int)e - (1);
        if (offset < 0 || offset >= sizeof(EChaperoneConfigFile_strings) / sizeof(EChaperoneConfigFile_strings[0]))
            return nullptr;
        return EChaperoneConfigFile_strings[offset];
    }

    const char *EChaperoneImportFlagsToString(vr::EChaperoneImportFlags e)
    {
        switch (e)
        {
        case (EChaperoneImport_BoundsOnly) : return "EChaperoneImport_BoundsOnly";
        default: return nullptr;
        }
    }

    static const vr::EVRCompositorError EVRCompositorError_check_table[] =
    { VRCompositorError_IndexOutOfRange, VRCompositorError_SharedTexturesNotSupported, VRCompositorError_TextureUsesUnsupportedFormat, VRCompositorError_TextureIsOnWrongDevice, VRCompositorError_IsNotSceneApplication, VRCompositorError_InvalidTexture, VRCompositorError_DoNotHaveFocus, VRCompositorError_IncompatibleVersion, VRCompositorError_RequestFailed, VRCompositorError_None, };

    static const char * const EVRCompositorError_string_table[] =
    { "VRCompositorError_IndexOutOfRange", "VRCompositorError_SharedTexturesNotSupported", "VRCompositorError_TextureUsesUnsupportedFormat", "VRCompositorError_TextureIsOnWrongDevice", "VRCompositorError_IsNotSceneApplication", "VRCompositorError_InvalidTexture", "VRCompositorError_DoNotHaveFocus", "VRCompositorError_IncompatibleVersion", "VRCompositorError_RequestFailed", "VRCompositorError_None", };

    const char* EVRCompositorErrorToString(vr::EVRCompositorError e)
    {
        static const unsigned char LUT[] =
        {
            9, 8, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            7, 6, 5, 4, 3, 2, 1, 0, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
            10, 10, 10, 10, 10, 10
        };
        int offset = LUT[(unsigned char)e];
        if (offset < (sizeof(EVRCompositorError_check_table) / sizeof(EVRCompositorError_check_table[0])) &&
            (e == EVRCompositorError_check_table[offset]))
        {
            return EVRCompositorError_string_table[offset];
        }
        return nullptr;
    }

    const char *VROverlayInputMethodToString(vr::VROverlayInputMethod e)
    {
        static const char * const VROverlayInputMethod_strings[] =
        {
            "VROverlayInputMethod_None", "VROverlayInputMethod_Mouse"
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
            "VROverlayTransform_Absolute", "VROverlayTransform_TrackedDeviceRelative", "VROverlayTransform_SystemOverlay", "VROverlayTransform_TrackedComponent"
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
            "VROverlayFlags_None", "VROverlayFlags_Curved", "VROverlayFlags_RGSS4X", "VROverlayFlags_NoDashboardTab", "VROverlayFlags_AcceptsGamepadEvents", "VROverlayFlags_ShowGamepadFocus", "VROverlayFlags_SendVRScrollEvents", "VROverlayFlags_SendVRTouchpadEvents", "VROverlayFlags_ShowTouchPadScrollWheel", "VROverlayFlags_TransferOwnershipToInternalProcess", "VROverlayFlags_SideBySide_Parallel", "VROverlayFlags_SideBySide_Crossed", "VROverlayFlags_Panorama", "VROverlayFlags_StereoPanorama", "VROverlayFlags_SortWithNonSceneOverlays"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(VROverlayFlags_strings) / sizeof(VROverlayFlags_strings[0]))
            return nullptr;
        return VROverlayFlags_strings[offset];
    }

    const char *EGamepadTextInputModeToString(vr::EGamepadTextInputMode e)
    {
        static const char * const EGamepadTextInputMode_strings[] =
        {
            "k_EGamepadTextInputModeNormal", "k_EGamepadTextInputModePassword", "k_EGamepadTextInputModeSubmit"
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
            "k_EGamepadTextInputLineModeSingleLine", "k_EGamepadTextInputLineModeMultipleLines"
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
            "OverlayDirection_Up", "OverlayDirection_Down", "OverlayDirection_Left", "OverlayDirection_Right", "OverlayDirection_Count"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EOverlayDirection_strings) / sizeof(EOverlayDirection_strings[0]))
            return nullptr;
        return EOverlayDirection_strings[offset];
    }

    const char *EVRComponentPropertyToString(vr::EVRComponentProperty e)
    {
        static const char * const EVRComponentProperty_strings[] =
        {
            "VRComponentProperty_IsStatic", "VRComponentProperty_IsVisible", nullptr, "VRComponentProperty_IsTouched", nullptr, nullptr, nullptr, "VRComponentProperty_IsPressed", nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, "VRComponentProperty_IsScrolled"
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
            "EVRNotificationType_Transient", "EVRNotificationType_Persistent", "EVRNotificationType_Transient_SystemWithUserValue"
        };

        int offset = (int)e;
        if (offset < 0 || offset >= sizeof(EVRNotificationType_strings) / sizeof(EVRNotificationType_strings[0]))
            return nullptr;
        return EVRNotificationType_strings[offset];
    }

    const char *EVRNotificationStyleToString(vr::EVRNotificationStyle e)
    {
        switch (e)
        {
        case (EVRNotificationStyle_None) : return "EVRNotificationStyle_None";
        case (EVRNotificationStyle_Application) : return "EVRNotificationStyle_Application";
        case (EVRNotificationStyle_Contact_Disabled) : return "EVRNotificationStyle_Contact_Disabled";
        case (EVRNotificationStyle_Contact_Enabled) : return "EVRNotificationStyle_Contact_Enabled";
        case (EVRNotificationStyle_Contact_Active) : return "EVRNotificationStyle_Contact_Active";
        default: return nullptr;
        }
    }

    const char *EVRScreenshotErrorToString(vr::EVRScreenshotError e)
    {
        switch (e)
        {
        case (VRScreenshotError_None) : return "VRScreenshotError_None";
        case (VRScreenshotError_RequestFailed) : return "VRScreenshotError_RequestFailed";
        case (VRScreenshotError_IncompatibleVersion) : return "VRScreenshotError_IncompatibleVersion";
        case (VRScreenshotError_NotFound) : return "VRScreenshotError_NotFound";
        case (VRScreenshotError_BufferTooSmall) : return "VRScreenshotError_BufferTooSmall";
        case (VRScreenshotError_ScreenshotAlreadyInProgress) : return "VRScreenshotError_ScreenshotAlreadyInProgress";
        default: return nullptr;
        }
    }

}

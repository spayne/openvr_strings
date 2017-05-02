//========= Copyright Sean Payne (2016) ============//
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
  if (offset < 0 || offset >= sizeof(EVREye_strings)/sizeof(EVREye_strings[0]))
     return nullptr;
  return EVREye_strings[offset];
}

const char *ETextureTypeToString(vr::ETextureType e)
{
  static const char * const ETextureType_strings[] =
  {
  "TextureType_DirectX","TextureType_OpenGL","TextureType_Vulkan","TextureType_IOSurface","TextureType_DirectX12"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(ETextureType_strings)/sizeof(ETextureType_strings[0]))
     return nullptr;
  return ETextureType_strings[offset];
}

const char *EColorSpaceToString(vr::EColorSpace e)
{
  static const char * const EColorSpace_strings[] =
  {
  "ColorSpace_Auto","ColorSpace_Gamma","ColorSpace_Linear"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(EColorSpace_strings)/sizeof(EColorSpace_strings[0]))
     return nullptr;
  return EColorSpace_strings[offset];
}

static const vr::ETrackingResult ETrackingResult_check_table[] =
{TrackingResult_Running_OutOfRange,TrackingResult_Running_OK,TrackingResult_Calibrating_OutOfRange,TrackingResult_Calibrating_InProgress,TrackingResult_Uninitialized,};

static const char * const ETrackingResult_string_table[] =
{"TrackingResult_Running_OutOfRange","TrackingResult_Running_OK","TrackingResult_Calibrating_OutOfRange","TrackingResult_Calibrating_InProgress","TrackingResult_Uninitialized",};

const char* ETrackingResultToString(vr::ETrackingResult e)
{
  static const unsigned char LUT[] =
    {
      5, 4, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      3, 2, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      1, 0, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5
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
  "TrackedDeviceClass_Invalid","TrackedDeviceClass_HMD","TrackedDeviceClass_Controller","TrackedDeviceClass_GenericTracker","TrackedDeviceClass_TrackingReference","TrackedDeviceClass_DisplayRedirect"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(ETrackedDeviceClass_strings)/sizeof(ETrackedDeviceClass_strings[0]))
     return nullptr;
  return ETrackedDeviceClass_strings[offset];
}

const char *ETrackedControllerRoleToString(vr::ETrackedControllerRole e)
{
  static const char * const ETrackedControllerRole_strings[] =
  {
  "TrackedControllerRole_Invalid","TrackedControllerRole_LeftHand","TrackedControllerRole_RightHand"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(ETrackedControllerRole_strings)/sizeof(ETrackedControllerRole_strings[0]))
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
  if (offset < 0 || offset >= sizeof(ETrackingUniverseOrigin_strings)/sizeof(ETrackingUniverseOrigin_strings[0]))
     return nullptr;
  return ETrackingUniverseOrigin_strings[offset];
}

static const vr::ETrackedDeviceProperty ETrackedDeviceProperty_check_table[] =
{Prop_SecondsFromPhotonsToVblank_Float,Prop_FirmwareVersion_Uint64,Prop_DriverVersion_String,Prop_DeviceCanPowerOff_Bool,Prop_Firmware_ProgrammingTarget_String,Prop_CanUnifyCoordinateSystemWithHmd_Bool,Prop_Invalid,Prop_DisplayMCImageData_Binary,Prop_HardwareRevision_Uint64,Prop_DisplayMCImageNumChannels_Int32,Prop_Firmware_ManualUpdateURL_String,Prop_DisplayMCImageHeight_Int32,Prop_Firmware_ManualUpdate_Bool,Prop_DisplayMCImageWidth_Int32,Prop_Firmware_UpdateAvailable_Bool,Prop_DisplayAllowNightMode_Bool,Prop_StatusDisplayTransform_Matrix34,Prop_DisplaySuppressed_Bool,Prop_DeviceBatteryPercentage_Float,Prop_ScreenshotVerticalFieldOfViewDegrees_Float,Prop_DeviceIsCharging_Bool,Prop_ScreenshotHorizontalFieldOfViewDegrees_Float,Prop_DeviceIsWireless_Bool,Prop_CameraCompatibilityMode_Int32,Prop_ConnectedWirelessDongle_String,Prop_AudioFirmwareVersion_Uint64,Prop_AllWirelessDongleDescriptions_String,Prop_DisplayHardwareVersion_Uint64,Prop_HardwareRevision_String,Prop_DisplayBootloaderVersion_Uint64,Prop_TrackingFirmwareVersion_String,Prop_DisplayFPGAVersion_Uint64,Prop_ManufacturerName_String,Prop_CameraFirmwareDescription_String,Prop_WillDriftInYaw_Bool,Prop_CameraFirmwareVersion_Uint64,Prop_RenderModelName_String,Prop_UserHeadToEyeDepthMeters_Float,Prop_SerialNumber_String,Prop_LensCenterRightV_Float,Prop_ModelNumber_String,Prop_LensCenterRightU_Float,Prop_TrackingSystemName_String,Prop_BlockServerShutdown_Bool,Prop_DongleVersion_Uint64,Prop_RadioVersion_Uint64,Prop_VRCVersion_Uint64,Prop_FPGAVersion_Uint64,Prop_LensCenterLeftV_Float,Prop_LensCenterLeftU_Float,Prop_DisplayGCImage_String,Prop_DisplayGCPrescale_Float,Prop_DisplayGCScale_Float,Prop_DisplayGCOffset_Float,Prop_DisplayGCType_Int32,Prop_CameraToHeadTransform_Matrix34,Prop_EdidProductID_Int32,Prop_DisplayGCBlackClamp_Float,Prop_DisplayMCImageRight_String,Prop_DisplayMCImageLeft_String,Prop_EdidVendorID_Int32,Prop_DisplayMCScale_Float,Prop_DisplayMCOffset_Float,Prop_DisplayMCType_Int32,Prop_IsOnDesktop_Bool,Prop_DisplayFirmwareVersion_Uint64,Prop_PreviousUniverseId_Uint64,Prop_CurrentUniverseId_Uint64,Prop_UserIpdMeters_Float,Prop_DisplayFrequency_Float,Prop_SecondsFromVsyncToPhotons_Float,Prop_ReportsTimeSinceVSync_Bool,Prop_ResourceRoot_String,Prop_ControllerRoleHint_Int32,Prop_Axis4Type_Int32,Prop_Axis3Type_Int32,Prop_Axis2Type_Int32,Prop_Axis1Type_Int32,Prop_Axis0Type_Int32,Prop_SupportedButtons_Uint64,Prop_AttachedDeviceId_String,Prop_ModeLabel_String,Prop_TrackingRangeMaximumMeters_Float,Prop_TrackingRangeMinimumMeters_Float,Prop_FieldOfViewBottomDegrees_Float,Prop_FieldOfViewTopDegrees_Float,Prop_FieldOfViewRightDegrees_Float,Prop_FieldOfViewLeftDegrees_Float,Prop_DisplayHiddenArea_Binary_Start,Prop_NamedIconPathDeviceAlertLow_String,Prop_NamedIconPathDeviceStandby_String,Prop_NamedIconPathDeviceNotReady_String,Prop_NamedIconPathDeviceReadyAlert_String,Prop_NamedIconPathDeviceReady_String,Prop_NamedIconPathDeviceSearchingAlert_String,Prop_NamedIconPathDeviceSearching_String,Prop_NamedIconPathDeviceOff_String,Prop_IconPathName_String,Prop_HasVirtualDisplayComponent_Bool,Prop_HasDriverDirectModeComponent_Bool,Prop_HasCameraComponent_Bool,Prop_HasControllerComponent_Bool,Prop_HasDisplayComponent_Bool,Prop_InstallPath_String,Prop_UserConfigPath_String,Prop_VendorSpecific_Reserved_End,Prop_DisplayHiddenArea_Binary_End,Prop_VendorSpecific_Reserved_Start,Prop_ParentDriver_Uint64,Prop_ViveSystemButtonFixRequired_Bool,Prop_Firmware_ForceUpdateRequired_Bool,Prop_HasCamera_Bool,Prop_DeviceClass_Int32,Prop_DeviceProvidesBatteryStatus_Bool,Prop_ContainsProximitySensor_Bool,};

static const char * const ETrackedDeviceProperty_string_table[] =
{"Prop_SecondsFromPhotonsToVblank_Float","Prop_FirmwareVersion_Uint64","Prop_DriverVersion_String","Prop_DeviceCanPowerOff_Bool","Prop_Firmware_ProgrammingTarget_String","Prop_CanUnifyCoordinateSystemWithHmd_Bool","Prop_Invalid","Prop_DisplayMCImageData_Binary","Prop_HardwareRevision_Uint64","Prop_DisplayMCImageNumChannels_Int32","Prop_Firmware_ManualUpdateURL_String","Prop_DisplayMCImageHeight_Int32","Prop_Firmware_ManualUpdate_Bool","Prop_DisplayMCImageWidth_Int32","Prop_Firmware_UpdateAvailable_Bool","Prop_DisplayAllowNightMode_Bool","Prop_StatusDisplayTransform_Matrix34","Prop_DisplaySuppressed_Bool","Prop_DeviceBatteryPercentage_Float","Prop_ScreenshotVerticalFieldOfViewDegrees_Float","Prop_DeviceIsCharging_Bool","Prop_ScreenshotHorizontalFieldOfViewDegrees_Float","Prop_DeviceIsWireless_Bool","Prop_CameraCompatibilityMode_Int32","Prop_ConnectedWirelessDongle_String","Prop_AudioFirmwareVersion_Uint64","Prop_AllWirelessDongleDescriptions_String","Prop_DisplayHardwareVersion_Uint64","Prop_HardwareRevision_String","Prop_DisplayBootloaderVersion_Uint64","Prop_TrackingFirmwareVersion_String","Prop_DisplayFPGAVersion_Uint64","Prop_ManufacturerName_String","Prop_CameraFirmwareDescription_String","Prop_WillDriftInYaw_Bool","Prop_CameraFirmwareVersion_Uint64","Prop_RenderModelName_String","Prop_UserHeadToEyeDepthMeters_Float","Prop_SerialNumber_String","Prop_LensCenterRightV_Float","Prop_ModelNumber_String","Prop_LensCenterRightU_Float","Prop_TrackingSystemName_String","Prop_BlockServerShutdown_Bool","Prop_DongleVersion_Uint64","Prop_RadioVersion_Uint64","Prop_VRCVersion_Uint64","Prop_FPGAVersion_Uint64","Prop_LensCenterLeftV_Float","Prop_LensCenterLeftU_Float","Prop_DisplayGCImage_String","Prop_DisplayGCPrescale_Float","Prop_DisplayGCScale_Float","Prop_DisplayGCOffset_Float","Prop_DisplayGCType_Int32","Prop_CameraToHeadTransform_Matrix34","Prop_EdidProductID_Int32","Prop_DisplayGCBlackClamp_Float","Prop_DisplayMCImageRight_String","Prop_DisplayMCImageLeft_String","Prop_EdidVendorID_Int32","Prop_DisplayMCScale_Float","Prop_DisplayMCOffset_Float","Prop_DisplayMCType_Int32","Prop_IsOnDesktop_Bool","Prop_DisplayFirmwareVersion_Uint64","Prop_PreviousUniverseId_Uint64","Prop_CurrentUniverseId_Uint64","Prop_UserIpdMeters_Float","Prop_DisplayFrequency_Float","Prop_SecondsFromVsyncToPhotons_Float","Prop_ReportsTimeSinceVSync_Bool","Prop_ResourceRoot_String","Prop_ControllerRoleHint_Int32","Prop_Axis4Type_Int32","Prop_Axis3Type_Int32","Prop_Axis2Type_Int32","Prop_Axis1Type_Int32","Prop_Axis0Type_Int32","Prop_SupportedButtons_Uint64","Prop_AttachedDeviceId_String","Prop_ModeLabel_String","Prop_TrackingRangeMaximumMeters_Float","Prop_TrackingRangeMinimumMeters_Float","Prop_FieldOfViewBottomDegrees_Float","Prop_FieldOfViewTopDegrees_Float","Prop_FieldOfViewRightDegrees_Float","Prop_FieldOfViewLeftDegrees_Float","Prop_DisplayHiddenArea_Binary_Start","Prop_NamedIconPathDeviceAlertLow_String","Prop_NamedIconPathDeviceStandby_String","Prop_NamedIconPathDeviceNotReady_String","Prop_NamedIconPathDeviceReadyAlert_String","Prop_NamedIconPathDeviceReady_String","Prop_NamedIconPathDeviceSearchingAlert_String","Prop_NamedIconPathDeviceSearching_String","Prop_NamedIconPathDeviceOff_String","Prop_IconPathName_String","Prop_HasVirtualDisplayComponent_Bool","Prop_HasDriverDirectModeComponent_Bool","Prop_HasCameraComponent_Bool","Prop_HasControllerComponent_Bool","Prop_HasDisplayComponent_Bool","Prop_InstallPath_String","Prop_UserConfigPath_String","Prop_VendorSpecific_Reserved_End","Prop_DisplayHiddenArea_Binary_End","Prop_VendorSpecific_Reserved_Start","Prop_ParentDriver_Uint64","Prop_ViveSystemButtonFixRequired_Bool","Prop_Firmware_ForceUpdateRequired_Bool","Prop_HasCamera_Bool","Prop_DeviceClass_Int32","Prop_DeviceProvidesBatteryStatus_Bool","Prop_ContainsProximitySensor_Bool",};

const char* ETrackedDevicePropertyToString(vr::ETrackedDeviceProperty e)
{
  static const unsigned char LUT[] =
    {
        3, 112, 111,   1,   2, 110, 109,   0, 108, 107,
      106,  70, 115, 115, 115,  41,  54, 115, 115,  55,
       53, 115, 115,  49, 115, 115, 115, 115, 115, 115,
       53, 115, 115, 115, 115, 115, 115, 115, 115,  53,
      115, 115,  94, 115, 115, 115, 115, 115, 115, 115,
      115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
      115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
      115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
      115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
      115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
      115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
      115, 115,  55,  54,  53,  52,  51,  50,  49, 115,
      115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
      115, 115, 115, 115, 115, 115,  42,  41,  40,  39,
       38,  37,  36,  35,  34, 115, 115, 115, 115, 115,
      115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
       46,  45,  44,  43,  42,  41,  40, 115, 115, 115,
      115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
      115, 115, 115, 115,  10,   9,   8,   7,   6,   5,
        4,   3, 115, 115, 115, 115, 115, 115, 115, 115,
      115, 115, 115, 115, 115, 115, 115, 115,  71,  70,
       69,  68,  67,  66,  65,  64,  63,  62,  61,  60,
       59,  58,  57,  56,  55,  54,  53,  52,  51,  50,
       49,  48,  41,  39,  37,  35,  33,  31,  29,  27,
       25,  23,  21,  19,  17,  15,  13,  11,   9,   7,
        0,  46,  45,  44,  43,  42
    };
   int offset = LUT[(unsigned char)(((unsigned int)e & 0xFF00) >> 8)] + LUT[(unsigned char)e];
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
  "TrackedProp_Success","TrackedProp_WrongDataType","TrackedProp_WrongDeviceClass","TrackedProp_BufferTooSmall","TrackedProp_UnknownProperty","TrackedProp_InvalidDevice","TrackedProp_CouldNotContactServer","TrackedProp_ValueNotProvidedByDevice","TrackedProp_StringExceedsMaximumLength","TrackedProp_NotYetAvailable","TrackedProp_PermissionDenied","TrackedProp_InvalidOperation"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(ETrackedPropertyError_strings)/sizeof(ETrackedPropertyError_strings[0]))
     return nullptr;
  return ETrackedPropertyError_strings[offset];
}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

const char *EVRSubmitFlagsToString(vr::EVRSubmitFlags e)
{
  static const char * const EVRSubmitFlags_strings[] =
  {
  "Submit_Default","Submit_LensDistortionAlreadyApplied","Submit_GlRenderBuffer",nullptr,"Submit_Reserved"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(EVRSubmitFlags_strings)/sizeof(EVRSubmitFlags_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EVRState_strings)/sizeof(EVRState_strings[0]))
     return nullptr;
  return EVRState_strings[offset];
}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

static const vr::EVREventType EVREventType_check_table[] =
{VREvent_DashboardGuideButtonDown,VREvent_OverlayGamepadFocusLost,VREvent_None,VREvent_OverlaySharedTextureChanged,VREvent_OverlayGamepadFocusGained,VREvent_HideKeyboard,VREvent_ShowKeyboard,VREvent_ImageLoaded,VREvent_RenderToast,VREvent_ResetDashboard,VREvent_DashboardRequested,VREvent_DashboardThumbSelected,VREvent_DashboardDeactivated,VREvent_DashboardActivated,VREvent_OverlayHidden,VREvent_OverlayShown,VREvent_DashboardGuideButtonUp,VREvent_MCImageUpdated,VREvent_ImageFailed,VREvent_TrackedCamera_ResumeVideoStream,VREvent_TrackedCamera_PauseVideoStream,VREvent_TrackedCamera_StopVideoStream,VREvent_TrackedCamera_StartVideoStream,VREvent_ButtonUntouch,VREvent_ButtonTouch,VREvent_ButtonUnpress,VREvent_ButtonPress,VREvent_DriverRequestedQuit,VREvent_QuitAcknowledged,VREvent_QuitAborted_UserPrompt,VREvent_ProcessQuit,VREvent_Quit,VREvent_ScreenshotTriggered,VREvent_KeyboardDone,VREvent_KeyboardCharInput,VREvent_KeyboardClosed,VREvent_ShowRenderModels,VREvent_HideRenderModels,VREvent_SceneApplicationSecondaryRenderingStarted,VREvent_InputFocusChanged,VREvent_SceneFocusChanged,VREvent_SceneApplicationChanged,VREvent_SceneFocusGained,VREvent_SceneFocusLost,VREvent_InputFocusReleased,VREvent_InputFocusCaptured,VREvent_StatusUpdate,VREvent_Compositor_ChaperoneBoundsHidden,VREvent_Compositor_ChaperoneBoundsShown,VREvent_Compositor_MirrorWindowHidden,VREvent_Compositor_MirrorWindowShown,VREvent_DashboardOverlayCreated,VREvent_MessageOverlay_Closed,VREvent_PropertyChanged,VREvent_LensDistortionChanged,VREvent_WatchdogWakeUpRequested,VREvent_TrackedDeviceRoleChanged,VREvent_LeaveStandbyMode,VREvent_EnterStandbyMode,VREvent_IpdChanged,VREvent_TrackedDeviceUserInteractionEnded,VREvent_TrackedDeviceUserInteractionStarted,VREvent_TrackedDeviceUpdated,VREvent_TrackedDeviceDeactivated,VREvent_TrackedDeviceActivated,VREvent_Notification_Destroyed,VREvent_Notification_BeginInteraction,VREvent_Notification_Hidden,VREvent_Notification_Shown,VREvent_PowerSettingsHaveChanged,VREvent_EnvironmentSettingsHaveChanged,VREvent_ModelSkinSettingsHaveChanged,VREvent_ReprojectionSettingHasChanged,VREvent_CameraSettingsHaveChanged,VREvent_BackgroundSettingHasChanged,VREvent_FirmwareUpdateFinished,VREvent_FirmwareUpdateStarted,VREvent_PerformanceTest_FidelityLevel,VREvent_PerformanceTest_DisableCapture,VREvent_PerformanceTest_EnableCapture,VREvent_AudioSettingsHaveChanged,VREvent_OverlayFocusChanged,VREvent_TouchPadMove,VREvent_Scroll,VREvent_FocusLeave,VREvent_FocusEnter,VREvent_MouseButtonUp,VREvent_MouseButtonDown,VREvent_MouseMove,VREvent_SeatedZeroPoseReset,VREvent_ChaperoneSettingsHaveChanged,VREvent_ChaperoneTempDataHasChanged,VREvent_ChaperoneUniverseHasChanged,VREvent_ChaperoneDataHasChanged,VREvent_VendorSpecific_Reserved_End,VREvent_ProcessDisconnected,VREvent_ProcessConnected,VREvent_ApplicationTransitionNewAppLaunchComplete,VREvent_ApplicationMimeTypeLoad,VREvent_ApplicationListUpdated,VREvent_ApplicationTransitionNewAppStarted,VREvent_ApplicationTransitionAborted,VREvent_ApplicationTransitionStarted,VREvent_VendorSpecific_Reserved_Start,VREvent_TrackedCamera_EditingSurface,VREvent_PrimaryDashboardDeviceChanged,VREvent_ScreenshotProgressToDashboard,VREvent_SubmitScreenshotToDashboard,VREvent_ScreenshotFailed,VREvent_ScreenshotTaken,VREvent_RequestScreenshot,};

static const char * const EVREventType_string_table[] =
{"VREvent_DashboardGuideButtonDown","VREvent_OverlayGamepadFocusLost","VREvent_None","VREvent_OverlaySharedTextureChanged","VREvent_OverlayGamepadFocusGained","VREvent_HideKeyboard","VREvent_ShowKeyboard","VREvent_ImageLoaded","VREvent_RenderToast","VREvent_ResetDashboard","VREvent_DashboardRequested","VREvent_DashboardThumbSelected","VREvent_DashboardDeactivated","VREvent_DashboardActivated","VREvent_OverlayHidden","VREvent_OverlayShown","VREvent_DashboardGuideButtonUp","VREvent_MCImageUpdated","VREvent_ImageFailed","VREvent_TrackedCamera_ResumeVideoStream","VREvent_TrackedCamera_PauseVideoStream","VREvent_TrackedCamera_StopVideoStream","VREvent_TrackedCamera_StartVideoStream","VREvent_ButtonUntouch","VREvent_ButtonTouch","VREvent_ButtonUnpress","VREvent_ButtonPress","VREvent_DriverRequestedQuit","VREvent_QuitAcknowledged","VREvent_QuitAborted_UserPrompt","VREvent_ProcessQuit","VREvent_Quit","VREvent_ScreenshotTriggered","VREvent_KeyboardDone","VREvent_KeyboardCharInput","VREvent_KeyboardClosed","VREvent_ShowRenderModels","VREvent_HideRenderModels","VREvent_SceneApplicationSecondaryRenderingStarted","VREvent_InputFocusChanged","VREvent_SceneFocusChanged","VREvent_SceneApplicationChanged","VREvent_SceneFocusGained","VREvent_SceneFocusLost","VREvent_InputFocusReleased","VREvent_InputFocusCaptured","VREvent_StatusUpdate","VREvent_Compositor_ChaperoneBoundsHidden","VREvent_Compositor_ChaperoneBoundsShown","VREvent_Compositor_MirrorWindowHidden","VREvent_Compositor_MirrorWindowShown","VREvent_DashboardOverlayCreated","VREvent_MessageOverlay_Closed","VREvent_PropertyChanged","VREvent_LensDistortionChanged","VREvent_WatchdogWakeUpRequested","VREvent_TrackedDeviceRoleChanged","VREvent_LeaveStandbyMode","VREvent_EnterStandbyMode","VREvent_IpdChanged","VREvent_TrackedDeviceUserInteractionEnded","VREvent_TrackedDeviceUserInteractionStarted","VREvent_TrackedDeviceUpdated","VREvent_TrackedDeviceDeactivated","VREvent_TrackedDeviceActivated","VREvent_Notification_Destroyed","VREvent_Notification_BeginInteraction","VREvent_Notification_Hidden","VREvent_Notification_Shown","VREvent_PowerSettingsHaveChanged","VREvent_EnvironmentSettingsHaveChanged","VREvent_ModelSkinSettingsHaveChanged","VREvent_ReprojectionSettingHasChanged","VREvent_CameraSettingsHaveChanged","VREvent_BackgroundSettingHasChanged","VREvent_FirmwareUpdateFinished","VREvent_FirmwareUpdateStarted","VREvent_PerformanceTest_FidelityLevel","VREvent_PerformanceTest_DisableCapture","VREvent_PerformanceTest_EnableCapture","VREvent_AudioSettingsHaveChanged","VREvent_OverlayFocusChanged","VREvent_TouchPadMove","VREvent_Scroll","VREvent_FocusLeave","VREvent_FocusEnter","VREvent_MouseButtonUp","VREvent_MouseButtonDown","VREvent_MouseMove","VREvent_SeatedZeroPoseReset","VREvent_ChaperoneSettingsHaveChanged","VREvent_ChaperoneTempDataHasChanged","VREvent_ChaperoneUniverseHasChanged","VREvent_ChaperoneDataHasChanged","VREvent_VendorSpecific_Reserved_End","VREvent_ProcessDisconnected","VREvent_ProcessConnected","VREvent_ApplicationTransitionNewAppLaunchComplete","VREvent_ApplicationMimeTypeLoad","VREvent_ApplicationListUpdated","VREvent_ApplicationTransitionNewAppStarted","VREvent_ApplicationTransitionAborted","VREvent_ApplicationTransitionStarted","VREvent_VendorSpecific_Reserved_Start","VREvent_TrackedCamera_EditingSurface","VREvent_PrimaryDashboardDeviceChanged","VREvent_ScreenshotProgressToDashboard","VREvent_SubmitScreenshotToDashboard","VREvent_ScreenshotFailed","VREvent_ScreenshotTaken","VREvent_RequestScreenshot",};

const char* EVREventTypeToString(vr::EVREventType e)
{
  static const unsigned char LUT[] =
    {
        1,   3,   0,  16,  32,  18,  51, 111, 110, 109,
      108, 107, 106, 105,  53, 111,  52, 111, 111, 111,
       84,  83,  82,  81,  80,  79,  78,  77, 111, 111,
      111,  47,  77,  76,  75,  74,  73, 111, 111,  51,
      111, 111, 111, 111,  85,  84,  83,  82,  81,  80,
       79,  78,  64, 111, 111, 111, 111, 111, 111, 111,
      111, 111, 111, 111,  28,  27,  26, 111, 111, 111,
      111, 111, 111, 111, 111, 111,  44,  43,  47, 111,
      111, 111,  58,  57,  56,  55,  54,  53,  68,  67,
       66,  65, 111, 111, 111, 111, 111, 111, 111, 111,
       63,  62,  61,  60,  59,  58,  57,  56,  55,  54,
       53,  52, 111, 111,   1, 111, 111, 111, 111, 111,
       32,  31, 111, 111, 111, 111, 111, 111, 111, 111,
       30,  29,  30, 111, 111, 111, 111, 111, 111, 111,
      111, 111, 111, 111,  42,  41,  40,  39,  38,  37,
       36,  35, 111, 111,  34,  33, 111, 111, 111, 111,
      111, 111, 111, 111, 111, 111, 111, 111, 111, 111,
      111, 111, 111, 111, 111, 111,   3,   2,   1, 111,
      111, 111, 111, 111, 111, 111, 111, 111,  31,  30,
       29,  28,  27, 111, 111, 111, 111, 111, 111, 111,
       25,  24,  23,  22, 111, 111, 111, 111, 111, 111,
      111, 111, 111, 111, 111, 111, 111, 111, 111, 111,
        4,   3,   2,   1, 111, 111, 111, 111, 111, 111,
      111, 111,   1, 111, 111, 111, 111, 111, 111, 111,
      111, 111, 111, 111,  12,  11,  10,   9,   8,   7,
        6,   5,   4,   3,   2,   1
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
  if (offset < 0 || offset >= sizeof(EDeviceActivityLevel_strings)/sizeof(EDeviceActivityLevel_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EVRButtonId_strings)/sizeof(EVRButtonId_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EVRMouseButton_strings)/sizeof(EVRMouseButton_strings[0]))
     return nullptr;
  return EVRMouseButton_strings[offset];
}

const char *EHiddenAreaMeshTypeToString(vr::EHiddenAreaMeshType e)
{
  static const char * const EHiddenAreaMeshType_strings[] =
  {
  "k_eHiddenAreaMesh_Standard","k_eHiddenAreaMesh_Inverse","k_eHiddenAreaMesh_LineLoop","k_eHiddenAreaMesh_Max"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(EHiddenAreaMeshType_strings)/sizeof(EHiddenAreaMeshType_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EVRControllerAxisType_strings)/sizeof(EVRControllerAxisType_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EVRControllerEventOutputType_strings)/sizeof(EVRControllerEventOutputType_strings[0]))
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
  if (offset < 0 || offset >= sizeof(ECollisionBoundsStyle_strings)/sizeof(ECollisionBoundsStyle_strings[0]))
     return nullptr;
  return ECollisionBoundsStyle_strings[offset];
}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

const char *EVROverlayErrorToString(vr::EVROverlayError e)
{
  static const char * const EVROverlayError_strings[] =
  {
  "VROverlayError_None",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VROverlayError_UnknownOverlay","VROverlayError_InvalidHandle","VROverlayError_PermissionDenied","VROverlayError_OverlayLimitExceeded","VROverlayError_WrongVisibilityType","VROverlayError_KeyTooLong","VROverlayError_NameTooLong","VROverlayError_KeyInUse","VROverlayError_WrongTransformType","VROverlayError_InvalidTrackedDevice","VROverlayError_InvalidParameter","VROverlayError_ThumbnailCantBeDestroyed","VROverlayError_ArrayTooSmall","VROverlayError_RequestFailed","VROverlayError_InvalidTexture","VROverlayError_UnableToLoadFile","VROverlayError_KeyboardAlreadyInUse","VROverlayError_NoNeighbor",nullptr,"VROverlayError_TooManyMaskPrimitives","VROverlayError_BadMaskPrimitive"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(EVROverlayError_strings)/sizeof(EVROverlayError_strings[0]))
     return nullptr;
  return EVROverlayError_strings[offset];
}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

const char *EVRApplicationTypeToString(vr::EVRApplicationType e)
{
  static const char * const EVRApplicationType_strings[] =
  {
  "VRApplication_Other","VRApplication_Scene","VRApplication_Overlay","VRApplication_Background","VRApplication_Utility","VRApplication_VRMonitor","VRApplication_SteamWatchdog","VRApplication_Bootstrapper","VRApplication_Max"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(EVRApplicationType_strings)/sizeof(EVRApplicationType_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EVRFirmwareError_strings)/sizeof(EVRFirmwareError_strings[0]))
     return nullptr;
  return EVRFirmwareError_strings[offset];
}

static const vr::EVRNotificationError EVRNotificationError_check_table[] =
{VRNotificationError_SystemWithUserValueAlreadyExists,VRNotificationError_InvalidOverlayHandle,VRNotificationError_NotificationQueueFull,VRNotificationError_InvalidNotificationId,VRNotificationError_OK,};

static const char * const EVRNotificationError_string_table[] =
{"VRNotificationError_SystemWithUserValueAlreadyExists","VRNotificationError_InvalidOverlayHandle","VRNotificationError_NotificationQueueFull","VRNotificationError_InvalidNotificationId","VRNotificationError_OK",};

const char* EVRNotificationErrorToString(vr::EVRNotificationError e)
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
      3, 2, 1, 0, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5, 5, 5, 5, 5, 5
    };
   int offset = LUT[(unsigned char)e];
   if (offset < (sizeof(EVRNotificationError_check_table) / sizeof(EVRNotificationError_check_table[0])) &&
      (e == EVRNotificationError_check_table[offset]))
   {
      return EVRNotificationError_string_table[offset];
   }
   return nullptr;
}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

static const vr::EVRInitError EVRInitError_check_table[] =
{VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck,VRInitError_VendorSpecific_HmdFound_UserDataError,VRInitError_VendorSpecific_HmdFound_UserDataAddressRange,VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext,VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart,VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart,VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion,VRInitError_VendorSpecific_HmdFound_UnableToInitZLib,VRInitError_VendorSpecific_HmdFound_ConfigTooSmall,VRInitError_VendorSpecific_HmdFound_ConfigTooBig,VRInitError_VendorSpecific_HmdFound_NoStoredConfig,VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart,VRInitError_Compositor_ScreenshotsInitFailed,VRInitError_Driver_HmdDisplayMirrored,VRInitError_Driver_HmdDriverIdOutOfBounds,VRInitError_Driver_TrackedDeviceInterfaceUnknown,VRInitError_Driver_HmdDisplayNotFound,VRInitError_Driver_CalibrationInvalid,VRInitError_Driver_NotCalibrated,VRInitError_Driver_HmdInUse,VRInitError_Driver_RuntimeOutOfDate,VRInitError_Driver_NotLoaded,VRInitError_Driver_HmdUnknown,VRInitError_Driver_Unknown,VRInitError_Driver_Failed,VRInitError_Unknown,VRInitError_None,VRInitError_Compositor_OverlayInitFailed,VRInitError_Compositor_FirmwareRequiresUpdate,VRInitError_Compositor_D3D11HardwareRequired,VRInitError_Compositor_Failed,VRInitError_Init_VRDashboardStartupFailed,VRInitError_Init_VRDashboardNotFound,VRInitError_Init_WatchdogDisabledInSettings,VRInitError_Init_NotAvailableToWatchdogApps,VRInitError_Init_InvalidApplicationType,VRInitError_Init_LowPowerWatchdogNotSupported,VRInitError_Init_VRMonitorStartupFailed,VRInitError_Init_VRMonitorNotFound,VRInitError_Init_HmdNotFoundPresenceFailed,VRInitError_Init_HmdDriverIdIsNone,VRInitError_Init_Internal,VRInitError_Init_NotAvailableToUtilityApps,VRInitError_Init_NotSupportedWithCompositor,VRInitError_Init_NoServerForBackgroundApp,VRInitError_Init_TooManyObjects,VRInitError_Init_ShuttingDown,VRInitError_Init_SettingsInitFailed,VRInitError_Init_AnotherAppLaunching,VRInitError_Init_InitCanceledByUser,VRInitError_Init_Retry,VRInitError_Init_AppInfoInitFailed,VRInitError_Init_PathRegistryNotWritable,VRInitError_Init_NoLogPath,VRInitError_Init_NoConfigPath,VRInitError_Init_PathRegistryNotFound,VRInitError_Init_NotInitialized,VRInitError_Init_HmdNotFound,VRInitError_Init_UserConfigDirectoryInvalid,VRInitError_Init_InvalidInterface,VRInitError_Init_InterfaceNotFound,VRInitError_Init_FactoryNotFound,VRInitError_Init_FileNotFound,VRInitError_Init_VRClientDLLNotFound,VRInitError_Init_InstallationCorrupt,VRInitError_Init_InstallationNotFound,VRInitError_VendorSpecific_HmdFound_CantOpenDevice,VRInitError_IPC_ConnectFailedAfterMultipleAttempts,VRInitError_IPC_CompositorInvalidConnectResponse,VRInitError_IPC_CompositorConnectFailed,VRInitError_IPC_Failed,VRInitError_IPC_MutexInitFailed,VRInitError_IPC_CompositorInitFailed,VRInitError_IPC_SharedStateInitFailed,VRInitError_IPC_ConnectFailed,VRInitError_IPC_ServerInitFailed,VRInitError_Steam_SteamInstallationNotFound,VRInitError_VendorSpecific_UnableToConnectToOculusRuntime,};

static const char * const EVRInitError_string_table[] =
{"VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck","VRInitError_VendorSpecific_HmdFound_UserDataError","VRInitError_VendorSpecific_HmdFound_UserDataAddressRange","VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext","VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart","VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart","VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion","VRInitError_VendorSpecific_HmdFound_UnableToInitZLib","VRInitError_VendorSpecific_HmdFound_ConfigTooSmall","VRInitError_VendorSpecific_HmdFound_ConfigTooBig","VRInitError_VendorSpecific_HmdFound_NoStoredConfig","VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart","VRInitError_Compositor_ScreenshotsInitFailed","VRInitError_Driver_HmdDisplayMirrored","VRInitError_Driver_HmdDriverIdOutOfBounds","VRInitError_Driver_TrackedDeviceInterfaceUnknown","VRInitError_Driver_HmdDisplayNotFound","VRInitError_Driver_CalibrationInvalid","VRInitError_Driver_NotCalibrated","VRInitError_Driver_HmdInUse","VRInitError_Driver_RuntimeOutOfDate","VRInitError_Driver_NotLoaded","VRInitError_Driver_HmdUnknown","VRInitError_Driver_Unknown","VRInitError_Driver_Failed","VRInitError_Unknown","VRInitError_None","VRInitError_Compositor_OverlayInitFailed","VRInitError_Compositor_FirmwareRequiresUpdate","VRInitError_Compositor_D3D11HardwareRequired","VRInitError_Compositor_Failed","VRInitError_Init_VRDashboardStartupFailed","VRInitError_Init_VRDashboardNotFound","VRInitError_Init_WatchdogDisabledInSettings","VRInitError_Init_NotAvailableToWatchdogApps","VRInitError_Init_InvalidApplicationType","VRInitError_Init_LowPowerWatchdogNotSupported","VRInitError_Init_VRMonitorStartupFailed","VRInitError_Init_VRMonitorNotFound","VRInitError_Init_HmdNotFoundPresenceFailed","VRInitError_Init_HmdDriverIdIsNone","VRInitError_Init_Internal","VRInitError_Init_NotAvailableToUtilityApps","VRInitError_Init_NotSupportedWithCompositor","VRInitError_Init_NoServerForBackgroundApp","VRInitError_Init_TooManyObjects","VRInitError_Init_ShuttingDown","VRInitError_Init_SettingsInitFailed","VRInitError_Init_AnotherAppLaunching","VRInitError_Init_InitCanceledByUser","VRInitError_Init_Retry","VRInitError_Init_AppInfoInitFailed","VRInitError_Init_PathRegistryNotWritable","VRInitError_Init_NoLogPath","VRInitError_Init_NoConfigPath","VRInitError_Init_PathRegistryNotFound","VRInitError_Init_NotInitialized","VRInitError_Init_HmdNotFound","VRInitError_Init_UserConfigDirectoryInvalid","VRInitError_Init_InvalidInterface","VRInitError_Init_InterfaceNotFound","VRInitError_Init_FactoryNotFound","VRInitError_Init_FileNotFound","VRInitError_Init_VRClientDLLNotFound","VRInitError_Init_InstallationCorrupt","VRInitError_Init_InstallationNotFound","VRInitError_VendorSpecific_HmdFound_CantOpenDevice","VRInitError_IPC_ConnectFailedAfterMultipleAttempts","VRInitError_IPC_CompositorInvalidConnectResponse","VRInitError_IPC_CompositorConnectFailed","VRInitError_IPC_Failed","VRInitError_IPC_MutexInitFailed","VRInitError_IPC_CompositorInitFailed","VRInitError_IPC_SharedStateInitFailed","VRInitError_IPC_ConnectFailed","VRInitError_IPC_ServerInitFailed","VRInitError_Steam_SteamInstallationNotFound","VRInitError_VendorSpecific_UnableToConnectToOculusRuntime",};

const char* EVRInitErrorToString(vr::EVRInitError e)
{
  static const unsigned char LUT[] =
    {
      13, 12, 78, 39,  0, 78, 78, 73, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 63, 62, 61, 60, 59, 58,
      57, 56, 55, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 66, 11, 10,
       9,  8,  7,  6,  5,  4,  3,  2,  1,  0,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      52, 51, 50, 49, 48, 47, 46, 45, 44, 43,
      42, 41, 40, 39, 38, 37, 36, 35, 34, 33,
      32, 31, 30, 29, 28, 27, 26, 25, 24, 23,
      22, 21, 20, 19, 18, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 18, 17, 16, 15,  0, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      11, 10,  9,  8,  7,  6,  5,  4,  3,  2,
      78,  1,  0, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 38, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
      78, 78, 78, 78, 78, 78
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
  if (offset < 0 || offset >= sizeof(EVRScreenshotType_strings)/sizeof(EVRScreenshotType_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EVRScreenshotPropertyFilenames_strings)/sizeof(EVRScreenshotPropertyFilenames_strings[0]))
     return nullptr;
  return EVRScreenshotPropertyFilenames_strings[offset];
}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

const char *EVRTrackedCameraErrorToString(vr::EVRTrackedCameraError e)
{
  static const char * const EVRTrackedCameraError_strings[] =
  {
  "VRTrackedCameraError_None",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRTrackedCameraError_OperationFailed","VRTrackedCameraError_InvalidHandle","VRTrackedCameraError_InvalidFrameHeaderVersion","VRTrackedCameraError_OutOfHandles","VRTrackedCameraError_IPCFailure","VRTrackedCameraError_NotSupportedForThisDevice","VRTrackedCameraError_SharedMemoryFailure","VRTrackedCameraError_FrameBufferingFailure","VRTrackedCameraError_StreamSetupFailure","VRTrackedCameraError_InvalidGLTextureId","VRTrackedCameraError_InvalidSharedTextureHandle","VRTrackedCameraError_FailedToGetGLTextureId","VRTrackedCameraError_SharedTextureFailure","VRTrackedCameraError_NoFrameAvailable","VRTrackedCameraError_InvalidArgument","VRTrackedCameraError_InvalidFrameBufferSize"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(EVRTrackedCameraError_strings)/sizeof(EVRTrackedCameraError_strings[0]))
     return nullptr;
  return EVRTrackedCameraError_strings[offset];
}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

const char *EVRTrackedCameraFrameTypeToString(vr::EVRTrackedCameraFrameType e)
{
  static const char * const EVRTrackedCameraFrameType_strings[] =
  {
  "VRTrackedCameraFrameType_Distorted","VRTrackedCameraFrameType_Undistorted","VRTrackedCameraFrameType_MaximumUndistorted","MAX_CAMERA_FRAME_TYPES"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(EVRTrackedCameraFrameType_strings)/sizeof(EVRTrackedCameraFrameType_strings[0]))
     return nullptr;
  return EVRTrackedCameraFrameType_strings[offset];
}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

static const vr::EVRApplicationError EVRApplicationError_check_table[] =
{VRApplicationError_InvalidParameter,VRApplicationError_UnknownProperty,VRApplicationError_PropertyNotSet,VRApplicationError_BufferTooSmall,VRApplicationError_IsTemplate,VRApplicationError_TransitionAborted,VRApplicationError_OldApplicationQuitting,VRApplicationError_LaunchInProgress,VRApplicationError_ApplicationAlreadyStarting,VRApplicationError_LaunchFailed,VRApplicationError_InvalidApplication,VRApplicationError_InvalidManifest,VRApplicationError_ApplicationAlreadyRunning,VRApplicationError_IPCFailed,VRApplicationError_UnknownApplication,VRApplicationError_InvalidIndex,VRApplicationError_NoApplication,VRApplicationError_NoManifest,VRApplicationError_AppKeyAlreadyExists,VRApplicationError_None,};

static const char * const EVRApplicationError_string_table[] =
{"VRApplicationError_InvalidParameter","VRApplicationError_UnknownProperty","VRApplicationError_PropertyNotSet","VRApplicationError_BufferTooSmall","VRApplicationError_IsTemplate","VRApplicationError_TransitionAborted","VRApplicationError_OldApplicationQuitting","VRApplicationError_LaunchInProgress","VRApplicationError_ApplicationAlreadyStarting","VRApplicationError_LaunchFailed","VRApplicationError_InvalidApplication","VRApplicationError_InvalidManifest","VRApplicationError_ApplicationAlreadyRunning","VRApplicationError_IPCFailed","VRApplicationError_UnknownApplication","VRApplicationError_InvalidIndex","VRApplicationError_NoApplication","VRApplicationError_NoManifest","VRApplicationError_AppKeyAlreadyExists","VRApplicationError_None",};

const char* EVRApplicationErrorToString(vr::EVRApplicationError e)
{
  static const unsigned char LUT[] =
    {
      19, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      18, 17, 16, 15, 14, 13, 12, 11, 10,  9,
       8,  7,  6,  5,  4, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
       3,  2,  1,  0, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20
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
  "VRApplicationProperty_Name_String",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_LaunchType_String","VRApplicationProperty_WorkingDirectory_String","VRApplicationProperty_BinaryPath_String","VRApplicationProperty_Arguments_String","VRApplicationProperty_URL_String",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_Description_String","VRApplicationProperty_NewsURL_String","VRApplicationProperty_ImagePath_String","VRApplicationProperty_Source_String",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_IsDashboardOverlay_Bool","VRApplicationProperty_IsTemplate_Bool","VRApplicationProperty_IsInstanced_Bool","VRApplicationProperty_IsInternal_Bool",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_LastLaunchTime_Uint64"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(EVRApplicationProperty_strings)/sizeof(EVRApplicationProperty_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EVRApplicationTransitionState_strings)/sizeof(EVRApplicationTransitionState_strings[0]))
     return nullptr;
  return EVRApplicationTransitionState_strings[offset];
}

static const vr::ChaperoneCalibrationState ChaperoneCalibrationState_check_table[] =
{ChaperoneCalibrationState_Error_CollisionBoundsInvalid,ChaperoneCalibrationState_Error_PlayAreaInvalid,ChaperoneCalibrationState_Error_BaseStationConflict,ChaperoneCalibrationState_Error_BaseStationUninitialized,ChaperoneCalibrationState_Error,ChaperoneCalibrationState_Warning_SeatedBoundsInvalid,ChaperoneCalibrationState_Warning_BaseStationRemoved,ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved,ChaperoneCalibrationState_Warning,ChaperoneCalibrationState_OK,};

static const char * const ChaperoneCalibrationState_string_table[] =
{"ChaperoneCalibrationState_Error_CollisionBoundsInvalid","ChaperoneCalibrationState_Error_PlayAreaInvalid","ChaperoneCalibrationState_Error_BaseStationConflict","ChaperoneCalibrationState_Error_BaseStationUninitialized","ChaperoneCalibrationState_Error","ChaperoneCalibrationState_Warning_SeatedBoundsInvalid","ChaperoneCalibrationState_Warning_BaseStationRemoved","ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved","ChaperoneCalibrationState_Warning","ChaperoneCalibrationState_OK",};

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
  static const char * const EChaperoneConfigFile_strings[] =
  {
  "EChaperoneConfigFile_Live","EChaperoneConfigFile_Temp"
  };

  int offset = (int)e - (1);
  if (offset < 0 || offset >= sizeof(EChaperoneConfigFile_strings)/sizeof(EChaperoneConfigFile_strings[0]))
     return nullptr;
  return EChaperoneConfigFile_strings[offset];
}

const char *EChaperoneImportFlagsToString(vr::EChaperoneImportFlags e)
{
  static const char * const EChaperoneImportFlags_strings[] =
  {
  "EChaperoneImport_BoundsOnly"
  };

  int offset = (int)e - (1);
  if (offset < 0 || offset >= sizeof(EChaperoneImportFlags_strings)/sizeof(EChaperoneImportFlags_strings[0]))
     return nullptr;
  return EChaperoneImportFlags_strings[offset];
}

static const vr::EVRCompositorError EVRCompositorError_check_table[] =
{VRCompositorError_AlreadySubmitted,VRCompositorError_IndexOutOfRange,VRCompositorError_SharedTexturesNotSupported,VRCompositorError_TextureUsesUnsupportedFormat,VRCompositorError_TextureIsOnWrongDevice,VRCompositorError_IsNotSceneApplication,VRCompositorError_InvalidTexture,VRCompositorError_DoNotHaveFocus,VRCompositorError_IncompatibleVersion,VRCompositorError_RequestFailed,VRCompositorError_None,};

static const char * const EVRCompositorError_string_table[] =
{"VRCompositorError_AlreadySubmitted","VRCompositorError_IndexOutOfRange","VRCompositorError_SharedTexturesNotSupported","VRCompositorError_TextureUsesUnsupportedFormat","VRCompositorError_TextureIsOnWrongDevice","VRCompositorError_IsNotSceneApplication","VRCompositorError_InvalidTexture","VRCompositorError_DoNotHaveFocus","VRCompositorError_IncompatibleVersion","VRCompositorError_RequestFailed","VRCompositorError_None",};

const char* EVRCompositorErrorToString(vr::EVRCompositorError e)
{
  static const unsigned char LUT[] =
    {
      10,  9, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
       8,  7,  6,  5,  4,  3,  2,  1,  0, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 11
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
  "VROverlayInputMethod_None","VROverlayInputMethod_Mouse"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(VROverlayInputMethod_strings)/sizeof(VROverlayInputMethod_strings[0]))
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
  if (offset < 0 || offset >= sizeof(VROverlayTransformType_strings)/sizeof(VROverlayTransformType_strings[0]))
     return nullptr;
  return VROverlayTransformType_strings[offset];
}

const char *VROverlayFlagsToString(vr::VROverlayFlags e)
{
  static const char * const VROverlayFlags_strings[] =
  {
  "VROverlayFlags_None","VROverlayFlags_Curved","VROverlayFlags_RGSS4X","VROverlayFlags_NoDashboardTab","VROverlayFlags_AcceptsGamepadEvents","VROverlayFlags_ShowGamepadFocus","VROverlayFlags_SendVRScrollEvents","VROverlayFlags_SendVRTouchpadEvents","VROverlayFlags_ShowTouchPadScrollWheel","VROverlayFlags_TransferOwnershipToInternalProcess","VROverlayFlags_SideBySide_Parallel","VROverlayFlags_SideBySide_Crossed","VROverlayFlags_Panorama","VROverlayFlags_StereoPanorama","VROverlayFlags_SortWithNonSceneOverlays","VROverlayFlags_VisibleInDashboard"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(VROverlayFlags_strings)/sizeof(VROverlayFlags_strings[0]))
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
  if (offset < 0 || offset >= sizeof(VRMessageOverlayResponse_strings)/sizeof(VRMessageOverlayResponse_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EGamepadTextInputMode_strings)/sizeof(EGamepadTextInputMode_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EGamepadTextInputLineMode_strings)/sizeof(EGamepadTextInputLineMode_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EOverlayDirection_strings)/sizeof(EOverlayDirection_strings[0]))
     return nullptr;
  return EOverlayDirection_strings[offset];
}

const char *EVROverlayIntersectionMaskPrimitiveTypeToString(vr::EVROverlayIntersectionMaskPrimitiveType e)
{
  static const char * const EVROverlayIntersectionMaskPrimitiveType_strings[] =
  {
  "OverlayIntersectionPrimitiveType_Rectangle","OverlayIntersectionPrimitiveType_Circle"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(EVROverlayIntersectionMaskPrimitiveType_strings)/sizeof(EVROverlayIntersectionMaskPrimitiveType_strings[0]))
     return nullptr;
  return EVROverlayIntersectionMaskPrimitiveType_strings[offset];
}
#ifdef OPENVR_STRINGS_DISABLE_PASSTHRU

static const vr::EVRRenderModelError EVRRenderModelError_check_table[] =
{VRRenderModelError_NotSupported,VRRenderModelError_InvalidTexture,VRRenderModelError_Loading,VRRenderModelError_NotEnoughTexCoords,VRRenderModelError_NotEnoughNormals,VRRenderModelError_BufferTooSmall,VRRenderModelError_MultipleTextures,VRRenderModelError_TooManyVertices,VRRenderModelError_MultipleShapes,VRRenderModelError_NoShapes,VRRenderModelError_InvalidModel,VRRenderModelError_InvalidArg,VRRenderModelError_None,};

static const char * const EVRRenderModelError_string_table[] =
{"VRRenderModelError_NotSupported","VRRenderModelError_InvalidTexture","VRRenderModelError_Loading","VRRenderModelError_NotEnoughTexCoords","VRRenderModelError_NotEnoughNormals","VRRenderModelError_BufferTooSmall","VRRenderModelError_MultipleTextures","VRRenderModelError_TooManyVertices","VRRenderModelError_MultipleShapes","VRRenderModelError_NoShapes","VRRenderModelError_InvalidModel","VRRenderModelError_InvalidArg","VRRenderModelError_None",};

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
  if (offset < 0 || offset >= sizeof(EVRComponentProperty_strings)/sizeof(EVRComponentProperty_strings[0]))
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
  if (offset < 0 || offset >= sizeof(EVRNotificationType_strings)/sizeof(EVRNotificationType_strings[0]))
     return nullptr;
  return EVRNotificationType_strings[offset];
}

static const vr::EVRNotificationStyle EVRNotificationStyle_check_table[] =
{EVRNotificationStyle_Contact_Active,EVRNotificationStyle_Contact_Enabled,EVRNotificationStyle_Contact_Disabled,EVRNotificationStyle_Application,EVRNotificationStyle_None,};

static const char * const EVRNotificationStyle_string_table[] =
{"EVRNotificationStyle_Contact_Active","EVRNotificationStyle_Contact_Enabled","EVRNotificationStyle_Contact_Disabled","EVRNotificationStyle_Application","EVRNotificationStyle_None",};

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
  if (offset < 0 || offset >= sizeof(EVRSettingsError_strings)/sizeof(EVRSettingsError_strings[0]))
     return nullptr;
  return EVRSettingsError_strings[offset];
}
#endif // OPENVR_STRINGS_DISABLE_PASSTHRU

static const vr::EVRScreenshotError EVRScreenshotError_check_table[] =
{VRScreenshotError_ScreenshotAlreadyInProgress,VRScreenshotError_BufferTooSmall,VRScreenshotError_NotFound,VRScreenshotError_IncompatibleVersion,VRScreenshotError_RequestFailed,VRScreenshotError_None,};

static const char * const EVRScreenshotError_string_table[] =
{"VRScreenshotError_ScreenshotAlreadyInProgress","VRScreenshotError_BufferTooSmall","VRScreenshotError_NotFound","VRScreenshotError_IncompatibleVersion","VRScreenshotError_RequestFailed","VRScreenshotError_None",};

const char* EVRScreenshotErrorToString(vr::EVRScreenshotError e)
{
  static const unsigned char LUT[] =
    {
      5, 4, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      3, 2, 1, 6, 6, 6, 6, 6, 0, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
      6, 6, 6, 6, 6, 6
    };
   int offset = LUT[(unsigned char)e];
   if (offset < (sizeof(EVRScreenshotError_check_table) / sizeof(EVRScreenshotError_check_table[0])) &&
      (e == EVRScreenshotError_check_table[offset]))
   {
      return EVRScreenshotError_string_table[offset];
   }
   return nullptr;
}
}


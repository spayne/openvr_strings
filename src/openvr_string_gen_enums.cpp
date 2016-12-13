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
  "TextureType_DirectX","TextureType_OpenGL","TextureType_Vulkan"
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
  "TrackedDeviceClass_Invalid","TrackedDeviceClass_HMD","TrackedDeviceClass_Controller","TrackedDeviceClass_GenericTracker","TrackedDeviceClass_TrackingReference"
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
{Prop_DisplayAllowNightMode_Bool,Prop_StatusDisplayTransform_Matrix34,Prop_DriverVersion_String,Prop_DeviceCanPowerOff_Bool,Prop_Firmware_ProgrammingTarget_String,Prop_CanUnifyCoordinateSystemWithHmd_Bool,Prop_Invalid,Prop_DisplaySuppressed_Bool,Prop_DeviceBatteryPercentage_Float,Prop_ScreenshotVerticalFieldOfViewDegrees_Float,Prop_DeviceIsCharging_Bool,Prop_ScreenshotHorizontalFieldOfViewDegrees_Float,Prop_DeviceIsWireless_Bool,Prop_CameraCompatibilityMode_Int32,Prop_ConnectedWirelessDongle_String,Prop_AudioFirmwareVersion_Uint64,Prop_AllWirelessDongleDescriptions_String,Prop_DisplayHardwareVersion_Uint64,Prop_HardwareRevision_String,Prop_DisplayBootloaderVersion_Uint64,Prop_TrackingFirmwareVersion_String,Prop_DisplayFPGAVersion_Uint64,Prop_ManufacturerName_String,Prop_CameraFirmwareDescription_String,Prop_WillDriftInYaw_Bool,Prop_CameraFirmwareVersion_Uint64,Prop_RenderModelName_String,Prop_UserHeadToEyeDepthMeters_Float,Prop_SerialNumber_String,Prop_LensCenterRightV_Float,Prop_ModelNumber_String,Prop_LensCenterRightU_Float,Prop_TrackingSystemName_String,Prop_BlockServerShutdown_Bool,Prop_DongleVersion_Uint64,Prop_RadioVersion_Uint64,Prop_VRCVersion_Uint64,Prop_FPGAVersion_Uint64,Prop_FirmwareVersion_Uint64,Prop_HardwareRevision_Uint64,Prop_Firmware_ManualUpdateURL_String,Prop_Firmware_ManualUpdate_Bool,Prop_Firmware_UpdateAvailable_Bool,Prop_LensCenterLeftV_Float,Prop_LensCenterLeftU_Float,Prop_DisplayGCImage_String,Prop_DisplayGCPrescale_Float,Prop_DisplayGCScale_Float,Prop_DisplayGCOffset_Float,Prop_DisplayGCType_Int32,Prop_CameraToHeadTransform_Matrix34,Prop_EdidProductID_Int32,Prop_DisplayGCBlackClamp_Float,Prop_DisplayMCImageRight_String,Prop_DisplayMCImageLeft_String,Prop_EdidVendorID_Int32,Prop_DisplayMCScale_Float,Prop_DisplayMCOffset_Float,Prop_DisplayMCType_Int32,Prop_IsOnDesktop_Bool,Prop_DisplayFirmwareVersion_Uint64,Prop_PreviousUniverseId_Uint64,Prop_CurrentUniverseId_Uint64,Prop_UserIpdMeters_Float,Prop_DisplayFrequency_Float,Prop_SecondsFromVsyncToPhotons_Float,Prop_ReportsTimeSinceVSync_Bool,Prop_ControllerRoleHint_Int32,Prop_Axis4Type_Int32,Prop_Axis3Type_Int32,Prop_Axis2Type_Int32,Prop_Axis1Type_Int32,Prop_Axis0Type_Int32,Prop_SupportedButtons_Uint64,Prop_AttachedDeviceId_String,Prop_ModeLabel_String,Prop_TrackingRangeMaximumMeters_Float,Prop_TrackingRangeMinimumMeters_Float,Prop_FieldOfViewBottomDegrees_Float,Prop_FieldOfViewTopDegrees_Float,Prop_FieldOfViewRightDegrees_Float,Prop_FieldOfViewLeftDegrees_Float,Prop_NamedIconPathDeviceAlertLow_String,Prop_NamedIconPathDeviceStandby_String,Prop_NamedIconPathDeviceNotReady_String,Prop_NamedIconPathDeviceReadyAlert_String,Prop_NamedIconPathDeviceReady_String,Prop_NamedIconPathDeviceSearchingAlert_String,Prop_NamedIconPathDeviceSearching_String,Prop_NamedIconPathDeviceOff_String,Prop_IconPathName_String,Prop_VendorSpecific_Reserved_End,Prop_VendorSpecific_Reserved_Start,Prop_ViveSystemButtonFixRequired_Bool,Prop_Firmware_ForceUpdateRequired_Bool,Prop_HasCamera_Bool,Prop_DeviceClass_Int32,Prop_DeviceProvidesBatteryStatus_Bool,Prop_ContainsProximitySensor_Bool,};

static const char * const ETrackedDeviceProperty_string_table[] =
{"Prop_DisplayAllowNightMode_Bool","Prop_StatusDisplayTransform_Matrix34","Prop_DriverVersion_String","Prop_DeviceCanPowerOff_Bool","Prop_Firmware_ProgrammingTarget_String","Prop_CanUnifyCoordinateSystemWithHmd_Bool","Prop_Invalid","Prop_DisplaySuppressed_Bool","Prop_DeviceBatteryPercentage_Float","Prop_ScreenshotVerticalFieldOfViewDegrees_Float","Prop_DeviceIsCharging_Bool","Prop_ScreenshotHorizontalFieldOfViewDegrees_Float","Prop_DeviceIsWireless_Bool","Prop_CameraCompatibilityMode_Int32","Prop_ConnectedWirelessDongle_String","Prop_AudioFirmwareVersion_Uint64","Prop_AllWirelessDongleDescriptions_String","Prop_DisplayHardwareVersion_Uint64","Prop_HardwareRevision_String","Prop_DisplayBootloaderVersion_Uint64","Prop_TrackingFirmwareVersion_String","Prop_DisplayFPGAVersion_Uint64","Prop_ManufacturerName_String","Prop_CameraFirmwareDescription_String","Prop_WillDriftInYaw_Bool","Prop_CameraFirmwareVersion_Uint64","Prop_RenderModelName_String","Prop_UserHeadToEyeDepthMeters_Float","Prop_SerialNumber_String","Prop_LensCenterRightV_Float","Prop_ModelNumber_String","Prop_LensCenterRightU_Float","Prop_TrackingSystemName_String","Prop_BlockServerShutdown_Bool","Prop_DongleVersion_Uint64","Prop_RadioVersion_Uint64","Prop_VRCVersion_Uint64","Prop_FPGAVersion_Uint64","Prop_FirmwareVersion_Uint64","Prop_HardwareRevision_Uint64","Prop_Firmware_ManualUpdateURL_String","Prop_Firmware_ManualUpdate_Bool","Prop_Firmware_UpdateAvailable_Bool","Prop_LensCenterLeftV_Float","Prop_LensCenterLeftU_Float","Prop_DisplayGCImage_String","Prop_DisplayGCPrescale_Float","Prop_DisplayGCScale_Float","Prop_DisplayGCOffset_Float","Prop_DisplayGCType_Int32","Prop_CameraToHeadTransform_Matrix34","Prop_EdidProductID_Int32","Prop_DisplayGCBlackClamp_Float","Prop_DisplayMCImageRight_String","Prop_DisplayMCImageLeft_String","Prop_EdidVendorID_Int32","Prop_DisplayMCScale_Float","Prop_DisplayMCOffset_Float","Prop_DisplayMCType_Int32","Prop_IsOnDesktop_Bool","Prop_DisplayFirmwareVersion_Uint64","Prop_PreviousUniverseId_Uint64","Prop_CurrentUniverseId_Uint64","Prop_UserIpdMeters_Float","Prop_DisplayFrequency_Float","Prop_SecondsFromVsyncToPhotons_Float","Prop_ReportsTimeSinceVSync_Bool","Prop_ControllerRoleHint_Int32","Prop_Axis4Type_Int32","Prop_Axis3Type_Int32","Prop_Axis2Type_Int32","Prop_Axis1Type_Int32","Prop_Axis0Type_Int32","Prop_SupportedButtons_Uint64","Prop_AttachedDeviceId_String","Prop_ModeLabel_String","Prop_TrackingRangeMaximumMeters_Float","Prop_TrackingRangeMinimumMeters_Float","Prop_FieldOfViewBottomDegrees_Float","Prop_FieldOfViewTopDegrees_Float","Prop_FieldOfViewRightDegrees_Float","Prop_FieldOfViewLeftDegrees_Float","Prop_NamedIconPathDeviceAlertLow_String","Prop_NamedIconPathDeviceStandby_String","Prop_NamedIconPathDeviceNotReady_String","Prop_NamedIconPathDeviceReadyAlert_String","Prop_NamedIconPathDeviceReady_String","Prop_NamedIconPathDeviceSearchingAlert_String","Prop_NamedIconPathDeviceSearching_String","Prop_NamedIconPathDeviceOff_String","Prop_IconPathName_String","Prop_VendorSpecific_Reserved_End","Prop_VendorSpecific_Reserved_Start","Prop_ViveSystemButtonFixRequired_Bool","Prop_Firmware_ForceUpdateRequired_Bool","Prop_HasCamera_Bool","Prop_DeviceClass_Int32","Prop_DeviceProvidesBatteryStatus_Bool","Prop_ContainsProximitySensor_Bool",};

const char* ETrackedDevicePropertyToString(vr::ETrackedDeviceProperty e)
{
  static const unsigned char LUT[] =
    {
       3, 96, 95,  1,  2, 94, 93,  0, 92, 91,
      99, 34, 99, 99, 99, 38, 46, 99, 99, 41,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 46,
      99, 99, 51, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 49, 48, 47, 46,
      45, 44, 43, 42, 41, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      43, 42, 41, 40, 39, 38, 37, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 40, 39, 38, 37, 36, 35,
      34, 33, 99, 99, 99, 99, 99, 99, 99, 99,
      99, 99, 99, 99, 99, 99, 99, 99, 66, 65,
      64, 63, 62, 61, 60, 59, 58, 57, 56, 55,
      54, 53, 52, 51, 50, 49, 48, 47, 46, 45,
      44, 43, 31, 29, 27, 25, 23, 21, 19, 17,
      15, 13, 11,  9,  7,  0, 41, 40, 39, 38,
      37, 36, 35, 34, 33, 32
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
  "k_eHiddenAreaMesh_Standard","k_eHiddenAreaMesh_Inverse","k_eHiddenAreaMesh_LineLoop"
  };

  int offset = (int)e;
  if (offset < 0 || offset >= sizeof(EHiddenAreaMeshType_strings)/sizeof(EHiddenAreaMeshType_strings[0]))
     return nullptr;
  return EHiddenAreaMeshType_strings[offset];
}

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

const char *EVRApplicationTypeToString(vr::EVRApplicationType e)
{
  static const char * const EVRApplicationType_strings[] =
  {
  "VRApplication_Other","VRApplication_Scene","VRApplication_Overlay","VRApplication_Background","VRApplication_Utility","VRApplication_VRMonitor","VRApplication_SteamWatchdog","VRApplication_Max"
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

const char *EVRApplicationPropertyToString(vr::EVRApplicationProperty e)
{
  static const char * const EVRApplicationProperty_strings[] =
  {
  "VRApplicationProperty_Name_String",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_LaunchType_String","VRApplicationProperty_WorkingDirectory_String","VRApplicationProperty_BinaryPath_String","VRApplicationProperty_Arguments_String","VRApplicationProperty_URL_String",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_Description_String","VRApplicationProperty_NewsURL_String","VRApplicationProperty_ImagePath_String","VRApplicationProperty_Source_String",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_IsDashboardOverlay_Bool","VRApplicationProperty_IsTemplate_Bool","VRApplicationProperty_IsInstanced_Bool",nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,"VRApplicationProperty_LastLaunchTime_Uint64"
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


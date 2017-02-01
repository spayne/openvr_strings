//========= Copyright Sean Payne (2016) ============//
//
// openvr_string_passthru_enums.cpp
// 
// Wrap pre-existing openvr enum converters.
//  
//    Since some enum conversions are already provided by openvr, they are wrapped
//    below to match the declaration structure of the ones that are generated
//    in openvr_string_gen_enums.cpp.  
//

#include <openvr.h>
#ifndef OPENVR_STRINGS_DISABLE_PASSTHRU
using namespace vr;
namespace openvr_string
{
    const char *EVRInitErrorToString(vr::EVRInitError e)
    {
		return VR_GetVRInitErrorAsSymbol(e);
    }
    const char *EVRTrackedCameraErrorToString(vr::EVRTrackedCameraError e)
    {
        return VRTrackedCamera()->GetCameraErrorNameFromEnum(e);
    }
    const char *EVRRenderModelErrorToString(vr::EVRRenderModelError e)
    {
        return VRRenderModels()->GetRenderModelErrorNameFromEnum(e);
    }
    const char *EVROverlayErrorToString(vr::EVROverlayError e)
    {
        return VROverlay()->GetOverlayErrorNameFromEnum(e);
    }
    const char *EVRSettingsErrorToString(vr::EVRSettingsError e)
    {
        return VRSettings()->GetSettingsErrorNameFromEnum(e);
    }
    const char *EVRApplicationErrorToString(vr::EVRApplicationError e)
    {
        return VRApplications()->GetApplicationsErrorNameFromEnum(e);
    }
    const char *EVRControllerAxisTypeToString(vr::EVRControllerAxisType e)
    {
        return VRSystem()->GetControllerAxisTypeNameFromEnum(e);
    }
    const char* EVRButtonIdToString(vr::EVRButtonId e)
    {
        return VRSystem()->GetButtonIdNameFromEnum(e);
    }
    const char*ETrackedPropertyErrorToString(vr::ETrackedPropertyError e)
    {
        return VRSystem()->GetPropErrorNameFromEnum(e);
    }
    const char* EVREventTypeToString(vr::EVREventType e)
    {
        return VRSystem()->GetEventTypeNameFromEnum(e);
    }
}
#endif

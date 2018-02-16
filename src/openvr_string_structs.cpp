//========= Copyright Sean Payne (2016) ============//
//
// openvr_string_structs.cpp
//
//  Convert openvr structs to C-style strings
// 
//
#include <openvr.h>
#include <openvr_string.h>

#include <assert.h>
#include <cmath>
#include <string.h>
#include <cstdio>
#include <cctype>
#include <cinttypes>
#include <stdarg.h> 
#include <limits>

using namespace vr;

// byte_counter_t:
//
// alot of the code counts bytes.  I'm going for signed counting so that
// I don't have to code explicitly for underflow:
typedef int32_t byte_counter_t;

// EventDetailsType:
//
// Since openvr event structures are delivered as a union type. to 
// print out an event, you need to figure out - based on the event type
// what the EventDetails type is. 
//
// This enum  and the next function or two performs that mapping
//
enum EventDetailsType
{
    EDT_EventDetails_None,
    EDT_EventDetails_Reserved,
    EDT_EventDetails_Controller,
    EDT_EventDetails_Mouse,
    EDT_EventDetails_Scroll,
    EDT_EventDetails_Process,
    EDT_EventDetails_Notification,
    EDT_EventDetails_Overlay,
    EDT_EventDetails_Status,
    EDT_EventDetails_Keyboard,
    EDT_EventDetails_Ipd,
    EDT_EventDetails_Chaperone,
    EDT_EventDetails_PerformanceTest,
    EDT_EventDetails_TouchPadMove,
    EDT_EventDetails_SeatedZeroPoseReset,
    EDT_EventDetails_Screenshot,
    EDT_EventDetails_ScreenshotProgress,
    EDT_EventDetails_ApplicationLaunch,
    EDT_EventDetails_EditingCameraSurface,
	EDT_EventDetails_MessageOverlay,
	EDT_EventDetails_Property,
	EDT_EventDetails_Haptic
};

static const char *subtype_to_str(EventDetailsType edt)
{
    switch (edt)
    {
    case EDT_EventDetails_None: return "None";
    case EDT_EventDetails_Reserved: return "Reserved";
    case EDT_EventDetails_Controller: return "Controller";
    case EDT_EventDetails_Mouse: return "Mouse";
    case EDT_EventDetails_Scroll: return "Scroll";
    case EDT_EventDetails_Process: return "Process";
    case EDT_EventDetails_Notification: return "Notification";
    case EDT_EventDetails_Overlay: return "Overlay";
    case EDT_EventDetails_Status: return "Status";
    case EDT_EventDetails_Keyboard: return "Keyboard";
    case EDT_EventDetails_Ipd: return "Ipd";
    case EDT_EventDetails_Chaperone: return "Chaperone";
    case EDT_EventDetails_PerformanceTest: return "PerformanceTest";
    case EDT_EventDetails_TouchPadMove: return "TouchPadMove";
    case EDT_EventDetails_SeatedZeroPoseReset: return "SeatedZeroPoseReset";
    case EDT_EventDetails_Screenshot: return "Screenshot";
    case EDT_EventDetails_ScreenshotProgress: return "ScreenshotProgress";
    case EDT_EventDetails_ApplicationLaunch: return "ApplicationLaunch";
    case EDT_EventDetails_EditingCameraSurface: return "EditingCameraSurface";
	case EDT_EventDetails_MessageOverlay: return "MessageOverlay";
	case EDT_EventDetails_Property: return "Property";
	case EDT_EventDetails_Haptic: return "Haptic";
    }
    return nullptr;
}

static EventDetailsType event_details_for_event_type(uint32_t event_type)
{
    switch (event_type)
    {
    case VREvent_None:										return EDT_EventDetails_None;

    case VREvent_TrackedDeviceActivated:					return EDT_EventDetails_None;
    case VREvent_TrackedDeviceDeactivated:					return EDT_EventDetails_None;
    case VREvent_TrackedDeviceUpdated:						return EDT_EventDetails_None;
    case VREvent_TrackedDeviceUserInteractionStarted:		return EDT_EventDetails_None;
    case VREvent_TrackedDeviceUserInteractionEnded:			return EDT_EventDetails_None;
    case VREvent_IpdChanged:								return EDT_EventDetails_Ipd;
    case VREvent_EnterStandbyMode:							return EDT_EventDetails_None;
    case VREvent_LeaveStandbyMode:							return EDT_EventDetails_None;
    case VREvent_TrackedDeviceRoleChanged:					return EDT_EventDetails_None;
    case VREvent_WatchdogWakeUpRequested:					return EDT_EventDetails_None;
    case VREvent_LensDistortionChanged:						return EDT_EventDetails_None;
	case VREvent_PropertyChanged:                           return EDT_EventDetails_Property;
	case VREvent_WirelessDisconnect:						return EDT_EventDetails_None;
	case VREvent_WirelessReconnect:							return EDT_EventDetails_None;

    case VREvent_ButtonPress:								return EDT_EventDetails_Controller;
    case VREvent_ButtonUnpress:								return EDT_EventDetails_Controller;
    case VREvent_ButtonTouch:								return EDT_EventDetails_Controller;
    case VREvent_ButtonUntouch:								return EDT_EventDetails_Controller;

    case VREvent_MouseMove:									return EDT_EventDetails_Mouse;
    case VREvent_MouseButtonDown:							return EDT_EventDetails_Mouse;
    case VREvent_MouseButtonUp:								return EDT_EventDetails_Mouse;
    case VREvent_FocusEnter:								return EDT_EventDetails_Overlay;
    case VREvent_FocusLeave:								return EDT_EventDetails_Overlay;
    case VREvent_Scroll:									return EDT_EventDetails_Scroll;   // can be either scroll or mouse bleh
    case VREvent_TouchPadMove:								return EDT_EventDetails_TouchPadMove; // logical guess - though it *contradicts* the comment in openvr.h which says that this is a mouse event
    case VREvent_OverlayFocusChanged:						return EDT_EventDetails_Overlay;

    case VREvent_InputFocusCaptured:						return EDT_EventDetails_Process;
    case VREvent_InputFocusReleased:						return EDT_EventDetails_Process;
    case VREvent_SceneFocusLost:							return EDT_EventDetails_Process;
    case VREvent_SceneFocusGained:							return EDT_EventDetails_Process;
    case VREvent_SceneApplicationChanged:					return EDT_EventDetails_Process;
    case VREvent_SceneFocusChanged:							return EDT_EventDetails_Process;
    case VREvent_InputFocusChanged:							return EDT_EventDetails_Process;
    case VREvent_SceneApplicationSecondaryRenderingStarted:	return EDT_EventDetails_Process;
	case VREvent_SceneApplicationUsingWrongGraphicsAdapter:	return EDT_EventDetails_Process;

    case VREvent_HideRenderModels:							return EDT_EventDetails_None;
    case VREvent_ShowRenderModels:							return EDT_EventDetails_None;

    case VREvent_OverlayShown:								return EDT_EventDetails_None;
    case VREvent_OverlayHidden:								return EDT_EventDetails_None;
    case VREvent_DashboardActivated:						return EDT_EventDetails_None;
    case VREvent_DashboardDeactivated:						return EDT_EventDetails_None;
    case VREvent_DashboardThumbSelected:					return EDT_EventDetails_Overlay;
    case VREvent_DashboardRequested:						return EDT_EventDetails_Overlay;
    case VREvent_ResetDashboard:							return EDT_EventDetails_None;
    case VREvent_RenderToast:								return EDT_EventDetails_Notification;
    case VREvent_ImageLoaded:								return EDT_EventDetails_None;
    case VREvent_ShowKeyboard:								return EDT_EventDetails_None;
    case VREvent_HideKeyboard:								return EDT_EventDetails_None;
    case VREvent_OverlayGamepadFocusGained:					return EDT_EventDetails_None;
    case VREvent_OverlayGamepadFocusLost:					return EDT_EventDetails_None;
    case VREvent_OverlaySharedTextureChanged:				return EDT_EventDetails_None;
    case VREvent_ScreenshotTriggered:						return EDT_EventDetails_None;
    case VREvent_ImageFailed:								return EDT_EventDetails_None;
    case VREvent_DashboardOverlayCreated:					return EDT_EventDetails_None;
	case VREvent_SwitchGamepadFocus:						return EDT_EventDetails_None;


    case VREvent_RequestScreenshot:							return EDT_EventDetails_None;
    case VREvent_ScreenshotTaken:							return EDT_EventDetails_Screenshot;	//logical guess
    case VREvent_ScreenshotFailed:							return EDT_EventDetails_None;
    case VREvent_SubmitScreenshotToDashboard:				return EDT_EventDetails_None;
    case VREvent_ScreenshotProgressToDashboard:				return EDT_EventDetails_ScreenshotProgress; // logical guess

	case VREvent_PrimaryDashboardDeviceChanged:             return EDT_EventDetails_None;
	case VREvent_RoomViewShown:								return EDT_EventDetails_None;
	case VREvent_RoomViewHidden:							return EDT_EventDetails_None;

    case VREvent_Notification_Shown:						return EDT_EventDetails_None;
    case VREvent_Notification_Hidden:						return EDT_EventDetails_None;
    case VREvent_Notification_BeginInteraction:				return EDT_EventDetails_None;
    case VREvent_Notification_Destroyed:					return EDT_EventDetails_None;

    case VREvent_Quit:										return EDT_EventDetails_Process;
    case VREvent_ProcessQuit:								return EDT_EventDetails_Process;
    case VREvent_QuitAborted_UserPrompt:					return EDT_EventDetails_Process;
    case VREvent_QuitAcknowledged:							return EDT_EventDetails_Process;
    case VREvent_DriverRequestedQuit:						return EDT_EventDetails_Process;

    case VREvent_ChaperoneDataHasChanged:                   return EDT_EventDetails_None;
    case VREvent_ChaperoneUniverseHasChanged:				return EDT_EventDetails_Chaperone; // logical guess
    case VREvent_ChaperoneTempDataHasChanged:				return EDT_EventDetails_None;
    case VREvent_ChaperoneSettingsHaveChanged:				return EDT_EventDetails_None;
    case VREvent_SeatedZeroPoseReset:						return EDT_EventDetails_SeatedZeroPoseReset; //logical guess

    case VREvent_AudioSettingsHaveChanged:                  return EDT_EventDetails_None;

    case VREvent_BackgroundSettingHasChanged:				return EDT_EventDetails_None;
    case VREvent_CameraSettingsHaveChanged:					return EDT_EventDetails_None;
    case VREvent_ReprojectionSettingHasChanged:				return EDT_EventDetails_None;
    case VREvent_ModelSkinSettingsHaveChanged:				return EDT_EventDetails_None;
    case VREvent_EnvironmentSettingsHaveChanged:			return EDT_EventDetails_None;
    case VREvent_PowerSettingsHaveChanged:					return EDT_EventDetails_None;

        // StatusUpdate was added at the same time as the status struct, 
        // ref: https://cm-gitlab.stanford.edu/ethan/OpenVRAudio/commit/088a60b823f89670f811391136c1a70c9de64d97
        //
    case VREvent_StatusUpdate:								return EDT_EventDetails_Status;

    case VREvent_MCImageUpdated:							return EDT_EventDetails_None;

    case VREvent_FirmwareUpdateStarted:						return EDT_EventDetails_None;
    case VREvent_FirmwareUpdateFinished:					return EDT_EventDetails_None;

    case VREvent_KeyboardClosed:							return EDT_EventDetails_None;
    case VREvent_KeyboardCharInput:							return EDT_EventDetails_Keyboard; // logical guess
    case VREvent_KeyboardDone:								return EDT_EventDetails_None;

    case VREvent_ApplicationTransitionStarted:				return EDT_EventDetails_None;
    case VREvent_ApplicationTransitionAborted:				return EDT_EventDetails_None;
    case VREvent_ApplicationTransitionNewAppStarted:		return EDT_EventDetails_ApplicationLaunch; // logical guess
    case VREvent_ApplicationListUpdated:					return EDT_EventDetails_None;
    case VREvent_ApplicationMimeTypeLoad:					return EDT_EventDetails_None;
	case VREvent_ApplicationTransitionNewAppLaunchComplete: return EDT_EventDetails_None;

    case VREvent_Compositor_MirrorWindowShown:				return EDT_EventDetails_None;
    case VREvent_Compositor_MirrorWindowHidden:             return EDT_EventDetails_None;
    case VREvent_Compositor_ChaperoneBoundsShown:			return EDT_EventDetails_None;
    case VREvent_Compositor_ChaperoneBoundsHidden:			return EDT_EventDetails_None;

    case VREvent_TrackedCamera_StartVideoStream:			return EDT_EventDetails_None;
    case VREvent_TrackedCamera_StopVideoStream:				return EDT_EventDetails_None;
    case VREvent_TrackedCamera_PauseVideoStream:			return EDT_EventDetails_None;
    case VREvent_TrackedCamera_ResumeVideoStream:			return EDT_EventDetails_None;
    case VREvent_TrackedCamera_EditingSurface:				return EDT_EventDetails_EditingCameraSurface; // logical guess

    case VREvent_PerformanceTest_EnableCapture:				return EDT_EventDetails_None;
    case VREvent_PerformanceTest_DisableCapture:            return EDT_EventDetails_None;
    case VREvent_PerformanceTest_FidelityLevel:				return EDT_EventDetails_PerformanceTest; // logical guess

	case VREvent_MessageOverlay_Closed:						return EDT_EventDetails_Overlay;
	case VREvent_MessageOverlayCloseRequested:				return EDT_EventDetails_Overlay;

	case VREvent_Input_HapticVibration:						return EDT_EventDetails_Haptic;
    }
    return EDT_EventDetails_None;
};

// traversal_state
//
// This structure holds two pieces of information
// 1/  When printing structures, you need to know how 'deep' you are so that the printer
//     can apply the correct amount of indentation.  This 'traversal state' embeds the
//     depth. 
// 2/  It also embeds the 'max_key_width' or - actually - how much to indent the first level.
//     some structures have really large field names and need more indenting than others 
//
struct traversal_state
{
    traversal_state(char w, char d)
        : max_key_width(w), current_depth(d)
    {}
    char max_key_width;
    char current_depth;
    traversal_state operator+(char a)
    {
        return traversal_state(this->max_key_width, this->current_depth+a);
    }
};

// SNPRINTF 
//
// This is the key formatting routine
// 
// To make the formats easy to specify and fast to print, and not use any 
// extra heap or stack space, snprintf is used.
//
static int SNPRINTF(char * buffer, byte_counter_t n, const char * format, ...)
{
    va_list args;
    va_start(args, format);
    size_t n_size_t;
    if (n < 0)
    {
        n_size_t = 0;
    }
    else
    {
        n_size_t = n;
    }

    int ret = vsnprintf(buffer, n_size_t, format, args);

#ifdef WIN32
    // win32 vsnprintf is weird/non-standard in 2013
    // * windows returns -1 versus the required size
    // * also it doesn't null terminate on overflow
    
    if (ret < 0)
    {
        if (n > 0)
        {
            // case: ret is <0 so error.
            //       n > 0 so bytes were provided by caller
            //  windows may have overflowed - so make sure 
            // the buffer is terminated
            buffer[n-1] = '\0'; 
        }
        // case: error return the number of bytes required for this string
        // 
        ret = _vscprintf(format, args);
        if (ret < 0)
        {
            // if even counting the string fails, it's really broken
            ret = 0;
            if (n > 0)
            {
                buffer[0] = '\0';
            }
        }
    }
    else if (ret - n == 0)	// terminate if exactly the right number of bytes are written
    {
        if (n > 0)
        {
            buffer[n-1] = '\0';
        }
    }

#endif
    va_end(args);
    // sanity check
    assert(ret >= 0);
    return ret;
}

// encoded_value_width 
//
// given an integer, how wide of a string do you need. 
// only called with n >= 0 
//
static inline int encoded_value_width(int n) {
    if (n < 10) return 1;
    if (n < 100) return 2;
    if (n < 1000) return 3;
    if (n < 10000) return 4;
    if (n < 100000) return 5;
    if (n < 1000000) return 6;
    if (n < 10000000) return 7;
    if (n < 100000000) return 8;
    if (n < 1000000000) return 9;
    return 10;
}


// encoded_value_width(const float *fbuf, int num_floats)
//
// given an an array of float, how wide of a string do you need for 
// the decimal part of the largest float.  
// 
// (assumes non-exponent printing)
// 
static int encoded_value_width(const float *fbuf, int num_floats)
{
    float f_max = fbuf[0];
    float f_min = fbuf[0];
    for (int i = 1; i < num_floats; i++)
    {
        float f = fbuf[i];
        if (f > f_max)
        {
            f_max = f;
        }
        else if (f < f_min)
            f_min = f;
    }
    float max_width = fabs(f_max) > fabs(f_min) ? fabs(f_max) : fabs(f_min);
    int width = encoded_value_width((int)max_width);
    if (f_min < 0)
    {
        width++; // add space for negative
    }
    return width;
}

// field_encoder
//
// the actual encoding routines are split into two templatized "structures"
// the field_encoder one here encodes the field name (called key) and the values below
// 
// (further down is the struct encoder which walks the structures) 
//
// the templetization here isn't really necessary.  It's placeholder until
// I find out if/what other encoding formats are desired.
//
static const int basic_indent = 3;
static const int sub_indent = 8;
template <bool isCSV, char field_sep, bool bEncodeType>
struct field_encoder
{
private:
    // private: so only other methods cal call into encode_key
    static byte_counter_t encode_key(traversal_state ts, char *s, byte_counter_t n, const char *key)
    {
        if (isCSV || !key)
        {
            return 0;	// don't encode anything
        }
        else
        {
            return SNPRINTF(s, n, "%*s: ", basic_indent + ts.max_key_width + (ts.current_depth - 1) * sub_indent, key);
        }
    }

    static byte_counter_t encode_key(traversal_state ts, char *s, byte_counter_t n, const char *key, const char *type_name)
    {
        if (isCSV || !key)
        {
            return 0;	// don't encode anything
        }
        else
        {
            if (bEncodeType)
            {
                return SNPRINTF(s, n, "%*s %s: ", basic_indent +  ts.max_key_width + (ts.current_depth - 1) * sub_indent - strlen(key) - 2, type_name, key);
            }
            else
            {
                return SNPRINTF(s, n, "%*s: ", basic_indent +  ts.max_key_width + (ts.current_depth - 1) * sub_indent, key);
            }
        }
    }

    // e.g. rAxis [0] 
    static byte_counter_t encode_indexed_key(traversal_state ts, char *s, byte_counter_t n, const char *key, const char *type_name, int index, int max_index_width)
    {
        if (isCSV || !key)
        {
            return 0;	// don't encode anything
        }
        else
        {
            if (bEncodeType)
            {
                return SNPRINTF(s, n, "%*s %s[%*d]: ", basic_indent + ts.max_key_width - 2 - max_index_width - strlen(key) - 2, type_name, key, max_index_width, index);
            }
            else
            {
                return SNPRINTF(s, n, "%*s[%*d]: ", basic_indent + ts.max_key_width - 2 - max_index_width, key, max_index_width, index);
            }
        }
    }

public:
    static byte_counter_t encode_substructure_start(traversal_state ts, char *s, byte_counter_t n, const char *key, const char *type_name)
    {
        byte_counter_t w = 0;
        if (isCSV || !key)
        {
            return 0;	// don't encode anything
        }
        else
        {
            w += encode_key(ts, s + w, n - w, key, type_name);
            w += SNPRINTF(s + w, n - w, "%c", field_sep);
        }
        return w;
    }

    static byte_counter_t encode_substructure_start(traversal_state ts, char *s, byte_counter_t n, const char *key, const char *type_name, int index, int max_index_width)
    {
        if (isCSV || !key)
        {
            return 0;	// don't encode anything
        }
        else
        {
            byte_counter_t w = 0;
            w += encode_indexed_key(ts, s + w, n - w, key, type_name, index, max_index_width);
            w += SNPRINTF(s + w, n - w, "%c", field_sep);
            return w;
        }
    }

    static byte_counter_t encode_substructure_end(traversal_state ts, char *s, byte_counter_t n)
    {
        byte_counter_t w = 0;
        return w;
    }

    static byte_counter_t encode_b(traversal_state ts, char *s, byte_counter_t n, const char *key, bool b)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s + w, n - w, key, "b");

        w += SNPRINTF(s + w, n - w, "%s%c", b ? "true" : "false", field_sep);
        return w;
    }

    static byte_counter_t encode_u64hex(traversal_state ts, char *s, byte_counter_t n, const char *key, uint64_t value)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "u64hex");

#ifdef WIN32
        w += SNPRINTF(s + w, n - w, "%" PRIx64 "%c", value, field_sep);
#else
        w += SNPRINTF(s + w,n-w, "%llx%c", value, field_sep);
#endif
        return w;
    }

    static byte_counter_t encode_u32dec(traversal_state ts, char *s, byte_counter_t n, const char *key, uint32_t value)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "u32");
        w += SNPRINTF(s + w, n - w, "%u%c", value, field_sep);
        return w;
    }

    static byte_counter_t encode_u32hex(traversal_state ts, char *s, byte_counter_t n, const char *key, uint32_t value)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "u32hex");
        w += SNPRINTF(s + w, n - w, "%x%c", value, field_sep);
        return w;
    }

    static byte_counter_t encode_double(traversal_state ts, char *s, byte_counter_t n, const char *key, double value)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "double");
        w += SNPRINTF(s + w, n - w, "% f%c", value, field_sep);
        return w;
    }

    static byte_counter_t encode_f(traversal_state ts, char *s, byte_counter_t n, const char *key, float value)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s + w, n - w, key, "f");
        w += SNPRINTF(s + w, n - w, "% f%c", value, field_sep);
        return w;
    }

    static byte_counter_t encode32bytes(char *s, int n, const uint8_t *input)
    {
        const char LUT[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f' };

        int uints_to_process = (n > 63) ? 8 : n / 8; // up to 8 integer writes
        const uint32_t *input_as_uint = (const uint32_t*)input;
        int w = 0;
        for (int i = 0; i < uints_to_process; i++)
        {
            uint32_t a = input_as_uint[i];
            s[w + 0] = LUT[(a & 0x000000F0) >> 4];
            s[w + 1] = LUT[(a & 0x0000000F) >> 0];
            s[w + 2] = LUT[(a & 0x0000F000) >> 12];
            s[w + 3] = LUT[(a & 0x00000F00) >> 8];
            s[w + 4] = LUT[(a & 0x00F00000) >> 20];
            s[w + 5] = LUT[(a & 0x000F0000) >> 16];
            s[w + 6] = LUT[(a & 0xF0000000) >> 28];
            s[w + 7] = LUT[(a & 0x0F000000) >> 24];
            w += 8;
        }

        return 64;
    }

    static byte_counter_t encode_u8_hex_array(traversal_state ts, char *s, byte_counter_t n, const char *key, byte_counter_t vn, const uint8_t *value)
    {
        byte_counter_t w = 0; // number of bytes written
        int i = 0;

        // 64 byte steps through input to reduce calls to snprintf
        while (i <= vn - 64)
        {
            w += SNPRINTF(s + w, n - w, "%c", field_sep);
            w += encode_indexed_key(ts, s + w, n - w, key, "img", i, 3);
            w += encode32bytes(s + w, n - w, &value[i]);
            w += encode32bytes(s + w, n - w, &value[i + 32]);
            i += 64;
        }

		// ensure the null terminator
		// snprintf semantics: null terminate
		if (n-w <= 0 && n > 0)
		{
			s[n-1] = '\0';
		}


        // one byte steps through input value
        while (i < vn)
        {
            if (i % 64 == 0)
            {
                w += SNPRINTF(s + w, n - w, "%c", field_sep);
                w += encode_indexed_key(ts,s + w, n - w, key, "img", i, 3);
            }
            w += SNPRINTF(s + w, n - w, "%02x", value[i] & 0xFF);	
            i++;
        }
        w += SNPRINTF(s + w, n - w, "%c", field_sep);
        return w;
    }

    static byte_counter_t encode_u16_triangle_index_array(traversal_state ts, char *s, byte_counter_t n, const char *key, byte_counter_t num_triangles, const uint16_t *v_array)
    {
        byte_counter_t w = 0;
        for (byte_counter_t i = 0; i < num_triangles; i++)
        {
            w += encode_indexed_key(ts, s + w, n - w, key, "tri", i, encoded_value_width(num_triangles - 1));
            w += SNPRINTF(s + w, n - w, "\nf %d %d %d%c", 
                                v_array[i * 3] + 1, 
                                v_array[i * 3 + 1] + 1, 
                                v_array[i * 3 + 2] + 1, field_sep);
        }
        return w;
    }

    static byte_counter_t encode_char_mixed_array(traversal_state ts, char *s, byte_counter_t n, const char *key, byte_counter_t vn, const char *value)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "char[]");
        for (byte_counter_t i = 0; i < vn; i++)
        {
            unsigned char c = value[i];
            if (isprint(c))
            {
                w += SNPRINTF(s + w, n - w, "%c", c);
            }
            else
            {
                // signed-chars converted to int by default get sign extended. so do the following to 
                // convert to int without sign extending:
                w += SNPRINTF(s + w, n - w, "\\x%x", c &0xFF); 
            }
        }
        w += SNPRINTF(s + w, n - w, "%c", field_sep);
        return w;
    }

    static byte_counter_t encode_axis_array(traversal_state ts, char *s, byte_counter_t n, const char *key, const VRControllerAxis_t *v_array)
    {
        byte_counter_t w = 0;
        for (unsigned int i = 0; i < k_unControllerStateAxisCount; i++)
        {
            w += encode_indexed_key(ts, s + w, n - w, key, "axis", i, 1);
            w += SNPRINTF(s + w, n - w, "% f % f%c", v_array[i].x,v_array[i].y, field_sep);
        }
        return w;
    }
    
    static byte_counter_t encode_area_mesh_model_vertex(traversal_state ts, char *s, byte_counter_t n, const char *key, const HmdVector2_t *v,
                            int num_triangles)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "vertex_data");
        int indent = w;
        
        for (int i = 0; i < num_triangles; i++)
        {
            w += SNPRINTF(s + w, n - w, "%f %f, %f %f, %f %f",
                v[i * 3].v[0], v[i * 3].v[1],
                v[i * 3 + 1].v[0], v[i * 3 + 1].v[1],
                v[i * 3 + 2].v[0], v[i * 3 + 2].v[1]);
            if (i != num_triangles - 1)
            {
                w+= SNPRINTF(s + w, n - w, "\n%*s", indent, "");
            }
        }
        w += SNPRINTF(s + w, n - w, "%c", field_sep);
        return w;
    }

    // this doesn't really belong here BECAUSE ITS A STRUCT (and this is the field encoders section)
    static byte_counter_t encode_render_model_vertex(traversal_state ts, char *s, byte_counter_t n, const char *key, const RenderModel_Vertex_t *v)
    {
        byte_counter_t w = 0;
        w += encode_f3(ts, s + w, n - w, "vPosition", v->vPosition.v);
        w += encode_f3(ts, s + w, n - w, "vNormal", v->vNormal.v);
        w += encode_f2(ts, s + w, n - w, "rfTextureCoord", v->rfTextureCoord);
        return w;
    }

    static byte_counter_t encode_render_model_vertex_array(traversal_state ts, char *s, byte_counter_t n, const char *key, byte_counter_t vn, const RenderModel_Vertex_t *v_array)
    {
        byte_counter_t w = 0;
		// do vertices
        for (byte_counter_t i = 0; i < vn; i++)
        {
			w += SNPRINTF(s + w, n - w, "v ", field_sep);
			w += encode_f3(ts, s + w, n - w, nullptr, v_array[i].vPosition.v);
        }
		// do normals
		for (byte_counter_t i = 0; i < vn; i++)
		{
			w += SNPRINTF(s + w, n - w, "vn ", field_sep);
			w += encode_f3(ts, s + w, n - w, nullptr, v_array[i].vNormal.v);
		}
		// do uvs
		for (byte_counter_t i = 0; i < vn; i++)
		{
			w += SNPRINTF(s + w, n - w, "vt ", field_sep);
			w += encode_f2(ts, s + w, n - w, nullptr, v_array[i].rfTextureCoord);
		}
        return w;
    }

    static byte_counter_t encode_f2(traversal_state ts, char *s, byte_counter_t n, const char *key, const float f[2])
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "f2");
        w += SNPRINTF(s + w, n-w, "%f %f%c", f[0], f[1], field_sep);
        return w;
    }

	static byte_counter_t encode_f3(traversal_state ts, char *s, byte_counter_t n, const char *key, const float a, const float b, const float c)
	{
		byte_counter_t w = 0;
		w += encode_key(ts, s + w, n - w, key, "f3");
		w += SNPRINTF(s + w, n - w, "% f % f % f%c", a,b,c, field_sep);
		return w;
	}
    static byte_counter_t encode_f3(traversal_state ts, char *s, byte_counter_t n, const char *key, const float f[3])
    {
		return encode_f3(ts, s, n, key, f[0], f[1], f[2]);
    }

    static byte_counter_t encode_f4(traversal_state ts, char *s, byte_counter_t n, const char *key, const float f[4])
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "f4");
        w += SNPRINTF(s + w, n-w, "%f %f %f %f%c",
            f[0], f[1], f[2], f[3], field_sep);
        return w;
    }

    static byte_counter_t encode_f34(traversal_state ts, char *s, byte_counter_t n, const char *key, const float f[3][4])
    {
		float t[4][4];
		memcpy(t, f, 12*sizeof(float));
		t[3][0] = 0;
		t[3][1] = 0;
		t[3][2] = 0;
		t[3][3] = 1.0f;
		return encode_f44(ts, s, n, key, t);
    }

	// since it's a transform matrix, encode the roll pitch and yaw as well
	static byte_counter_t encode_transform34(traversal_state ts, char *s, byte_counter_t n, const char *key, const float f[3][4])
	{
		byte_counter_t w = 0;
		w += encode_f34(ts, s+w, n-w, key, f);
		float a = atan2(f[1][0], f[0][0]);
		float b = atan2(-f[2][0], sqrt(f[2][1]*f[2][1]+f[2][2]*f[2][2]));
		float g = atan2(f[2][1], f[2][2]);
		w += encode_f(ts, s + w, n - w, "roll a", a);
		w += encode_f(ts, s + w, n - w, "yaw b", b);
		w += encode_f(ts, s + w, n - w, "pitch g", g);

		w += encode_f3(ts, s + w, n - w, "z_ref direction vector", -f[0][2], -f[1][2], -f[2][2]);
		

		return w;
	}

	
    
    static byte_counter_t encode_f44(traversal_state ts, char *s, byte_counter_t n, const char *key, const float f[4][4])
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "f44");
        int indent = w;
        int width = encoded_value_width(&f[0][0], 4 * 4) + 7; // 6 for default precision + 1 for the decimal point
        assert(width > 0);
        w += SNPRINTF(s + w, n - w, "[%*.6f %*.6f %*.6f %*.6f\n %*s%*.6f %*.6f %*.6f %*.6f\n %*s%*.6f %*.6f %*.6f %*.6f\n %*s%*.6f %*.6f %*.6f %*.6f]%c",
            width, f[0][0], width, f[0][1], width, f[0][2], width, f[0][3], indent, "",
            width, f[1][0], width, f[1][1], width, f[1][2], width, f[1][3], indent, "",
            width, f[2][0], width, f[2][1], width, f[2][2], width, f[2][3], indent, "",
            width, f[3][0], width, f[3][1], width, f[3][2], width, f[3][3],
            field_sep);
        return w;
    }

    static byte_counter_t encode_enum_s_and_u32dec(traversal_state ts, char *s, byte_counter_t n, const char *key, const char *string_value, uint32_t u32_value)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s + w, n - w, key, "enum");
        if (string_value == nullptr)
            string_value = "?";
        w += SNPRINTF(s + w, n - w, "%s (%u)%c", string_value, u32_value, field_sep);
        return w;
    }

    static byte_counter_t encode_enum_mask_strings(traversal_state ts, char *s, byte_counter_t n, const char *values[], int num_values)
    {
        byte_counter_t w = 0;
        for (int i = 0; i < num_values; i++)
        {
            w += SNPRINTF(s + w, n - w, "%s", values[i]);
            if (i < num_values - 1)
            {
                w += SNPRINTF(s + w, n - w, "|", values[i]);
            }
        }
        return w;
    }

	// print something like A|B|C (0x123) by 
	// walks down num_values of values[] character array.
	// (assumes caller has done all of the matching)
    static byte_counter_t encode_enum_mask_strings_and_u32hex(traversal_state ts, char *s, byte_counter_t n, const char *key, const char *values[], int num_values, uint32_t u32_value)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "enum");
        w += encode_enum_mask_strings(ts, s + w, n - w, values, num_values);
        w += SNPRINTF(s + w, n - w, " (%u)%c", u32_value, field_sep);
        return w;
    }

	static byte_counter_t encode_reprojection_flags(traversal_state ts, char *s, byte_counter_t n, const char *key, const uint32_t v)
	{
		byte_counter_t w = 0;
		int num_matches = 0;
		const char *match_list[3];
		if (v & VRCompositor_ReprojectionReason_Cpu)
		{
			match_list[num_matches++] = "Reason_Cpu";
		}
		if (v & VRCompositor_ReprojectionReason_Gpu)
		{
			match_list[num_matches++] = "Reason_Gpu";
		}
		if (v & VRCompositor_ReprojectionAsync)
		{
			match_list[num_matches++] = "Async";
		}
		w += encode_enum_mask_strings_and_u32hex(ts, s + w, n - w,key, match_list, num_matches, v);
		return w;
	}

    static byte_counter_t encode_button_mask(traversal_state ts, char *s, byte_counter_t n, const char *key, uint64_t button_state)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "mask");

        // the following is most generic but up to O(64) (not fast)
        //      
        int num_matches = 0;
        const char *match_list[64];
        uint64_t mask = 0x1;
        int index = 0;
        uint64_t remaining_state = button_state;
        while (remaining_state)
        {
            if (remaining_state & mask)
            {
                // value at index was set
                const char* button_string = openvr_string::EVRButtonIdToString(vr::EVRButtonId(index));
                if (button_string)
                {
                    match_list[num_matches++] = button_string;
                }
                else
                {
                    match_list[num_matches++] = "?";
                }
                remaining_state = remaining_state & (~mask); // clear the set value
            }
            mask <<= 1;
            index++;
        }
        
        w += encode_enum_mask_strings(ts, s + w, n - w, match_list, num_matches);

		// because button_state is 64 bit: just do it here
#ifdef WIN32
        w += SNPRINTF(s + w, n - w, " (%" PRIx64 ")%c", button_state, field_sep);
#else
        w += SNPRINTF(s + w, n - w, " (%llx)%c", button_state, field_sep);
#endif
        return w;
    }

	


    static byte_counter_t encode_color(traversal_state ts, char *s, byte_counter_t n, const char *key, const HmdColor_t *v)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "color");
        w += SNPRINTF(s + w, n - w, "%f %f %f %f%c",
            v->r, v->g, v->b, v->a, field_sep);
        return w;
    }

    // 4x3
    static byte_counter_t encode_quad(traversal_state ts, char *s, byte_counter_t n, const char *key, const HmdQuad_t *v)
    {
        byte_counter_t w = 0;
        w += encode_key(ts, s+w, n - w, key, "quad");
        int indent = w;
        // calculate the max width of the values so the format lines up
        int width = encoded_value_width(&v->vCorners[0].v[0], 4 * 3) + 7; // 6 for default precision + 1 for the decimal point

        w += SNPRINTF(s + w, n - w,    "%*.6f %*.6f %*.6f\n"
                                    "%*s%*.6f %*.6f %*.6f\n"
                                    "%*s%*.6f %*.6f %*.6f\n"
                                    "%*s%*.6f %*.6f %*.6f" "%c",
                        width, v->vCorners[0].v[0], width, v->vCorners[0].v[1], width, v->vCorners[0].v[2], 
            indent, "",	width, v->vCorners[1].v[0], width, v->vCorners[1].v[1], width, v->vCorners[1].v[2], 
            indent, "", width, v->vCorners[2].v[0], width, v->vCorners[2].v[1], width, v->vCorners[2].v[2], 
            indent, "", width, v->vCorners[3].v[0], width, v->vCorners[3].v[1], width, v->vCorners[3].v[2], 
            field_sep);
        return w;
    }
};

// struct_encoder
//
// This is the second block of encoding functions.  Here each struct is walked to generate the corresponding string
//
//
template <typename field_encoder>
struct struct_encoder
{
    typedef field_encoder field_encoder_type;

    // non-primitive encoders:
    static byte_counter_t encode_render_controller_mode_state(traversal_state ts, char *s, byte_counter_t n, const char *key, const RenderModel_ControllerMode_State_t*v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_b(ts, s + w, n - w, "bScrollWheelVisible", v->bScrollWheelVisible);
        return w;
    };

	static byte_counter_t encode_texture_depth_mode(traversal_state ts, char *s, byte_counter_t n, const char *key, const VRTextureDepthInfo_t *v)
	{
		byte_counter_t w = 0;
		w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "handle", (uint64_t)v->handle);
		w += field_encoder_type::encode_f44(ts, s + w, n - w, "mProjection", v->mProjection.m);
		w += field_encoder_type::encode_f2(ts, s + w, n - w, "vRange", v->vRange.v);
		return w;
	}

    static byte_counter_t encode_render_model(traversal_state ts, char *s, byte_counter_t n, const char *key, const RenderModel_t*v)
    {
        byte_counter_t w = 0;
		w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "# unVertexCount", v->unVertexCount);
		w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "# unTriangleCount", v->unTriangleCount);
		w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "# diffuseTextureId", v->diffuseTextureId);
		w += field_encoder_type::encode_render_model_vertex_array(ts, s + w, n - w, "# rVertexData", v->unVertexCount, v->rVertexData);
		w += field_encoder_type::encode_u16_triangle_index_array(ts, s + w, n - w, "# rIndexData", v->unTriangleCount, v->rIndexData);
        return w;
    }

    static byte_counter_t encode_render_model_texturemap(traversal_state ts, char *s, byte_counter_t n, const char *key, const RenderModel_TextureMap_t*v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_double(ts, s + w, n - w, "unWidth", v->unWidth);
        w += field_encoder_type::encode_double(ts, s + w, n - w, "unHeight", v->unHeight);
        w += field_encoder_type::encode_u8_hex_array(ts, s + w, n - w, "rubTextureMapData", v->unHeight * v->unWidth * 4, v->rubTextureMapData);
        return w;
    }

    static byte_counter_t encode_render_model_component_state(traversal_state ts, char *s, byte_counter_t n, const char *key, const RenderModel_ComponentState_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f34(ts, s + w, n - w, "mTrackingToComponentRenderModel", v->mTrackingToComponentRenderModel.m);
        w += field_encoder_type::encode_f34(ts, s + w, n - w, "mTrackingToComponentLocal", v->mTrackingToComponentLocal.m);

        int num_matches = 0;
        const char *match_list[5];
        if (v->uProperties & VRComponentProperty_IsStatic)
        {
            match_list[num_matches++] = openvr_string::EVRComponentPropertyToString(VRComponentProperty_IsStatic);
        }
        if (v->uProperties & VRComponentProperty_IsVisible)
        {
            match_list[num_matches++] = openvr_string::EVRComponentPropertyToString(VRComponentProperty_IsVisible);
        }
        if (v->uProperties & VRComponentProperty_IsTouched)
        {
            match_list[num_matches++] = openvr_string::EVRComponentPropertyToString(VRComponentProperty_IsTouched);
        }
        if (v->uProperties & VRComponentProperty_IsPressed)
        {
            match_list[num_matches++] = openvr_string::EVRComponentPropertyToString(VRComponentProperty_IsPressed);
        }
        if (v->uProperties & VRComponentProperty_IsScrolled)
        {
            match_list[num_matches++] = openvr_string::EVRComponentPropertyToString(VRComponentProperty_IsScrolled);
        }
        w += field_encoder_type::encode_enum_mask_strings_and_u32hex(ts, s + w, n - w, "uProperties", match_list, num_matches, v->uProperties);
        return w;
    }


	static byte_counter_t encode_intersection_mask_circle(traversal_state ts, char *s, byte_counter_t n, const char *key, const IntersectionMaskCircle_t*v)
	{
		byte_counter_t w = 0;
		w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flCenterX", v->m_flCenterX);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flCenterY", v->m_flCenterY);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flRadius", v->m_flRadius);
		return w;
	};

	static byte_counter_t encode_intersection_mask_rectangle(traversal_state ts, char *s, byte_counter_t n, const char *key, const IntersectionMaskRectangle_t*v)
	{
		byte_counter_t w = 0;
		w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flTopLeftX", v->m_flTopLeftX);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flTopLeftY", v->m_flTopLeftY);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flWidth", v->m_flWidth);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flHeight", v->m_flHeight);
		return w;
	}

	static byte_counter_t encode_overlay_intersection_mask_primitive(traversal_state ts, char *s, byte_counter_t n, const char *key, const VROverlayIntersectionMaskPrimitive_t *v)
	{
		byte_counter_t w = 0;
		w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "m_nPrimitiveType",
			openvr_string::EVROverlayIntersectionMaskPrimitiveTypeToString(v->m_nPrimitiveType), v->m_nPrimitiveType);

		if (v->m_nPrimitiveType == OverlayIntersectionPrimitiveType_Rectangle)
		{
			w += encode_intersection_mask_rectangle(ts, s + w, n - w, "m_Primitive", &v->m_Primitive.m_Rectangle);
		}
		else if (v->m_nPrimitiveType == OverlayIntersectionPrimitiveType_Circle)
		{
			w += encode_intersection_mask_circle(ts, s + w, n - w, "m_Primitive", &v->m_Primitive.m_Circle);
		}
		return w;
	}

    static byte_counter_t encode_overlay_intersection_results(traversal_state ts, char *s, byte_counter_t n, const char *key, const VROverlayIntersectionResults_t*v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f3(ts, s + w, n - w, "vPoint", v->vPoint.v);
        w += field_encoder_type::encode_f3(ts, s + w, n - w, "vNormal", v->vNormal.v);
        w += field_encoder_type::encode_f2(ts, s + w, n - w, "vUVs", v->vUVs.v);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "fDistance", v->fDistance);
        return w;
    }

    static byte_counter_t encode_overlay_intersection_params(traversal_state ts, char *s, byte_counter_t n, const char *key, const VROverlayIntersectionParams_t*v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f3(ts, s + w, n - w, "vSource", v->vSource.v);
        w += field_encoder_type::encode_f3(ts, s + w, n - w, "vDirection", v->vDirection.v);
        w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "eOrigin", 
                                    openvr_string::ETrackingUniverseOriginToString(v->eOrigin), v->eOrigin);
        return w;
    }

    static byte_counter_t encode_notification_bitmap(traversal_state ts, char *s, byte_counter_t n, const char *key, const NotificationBitmap_t*v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nWidth", v->m_nWidth);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nHeight", v->m_nHeight);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nBytesPerPixel", v->m_nBytesPerPixel);
        w += field_encoder_type::encode_u8_hex_array(ts, s + w, n - w, "m_pImageData", v->m_nHeight * v->m_nWidth * v->m_nBytesPerPixel,
            (const uint8_t *)v->m_pImageData);
        return w;
    }

    static byte_counter_t encode_compositor_cumulative_stats(traversal_state ts, char *s, byte_counter_t n, const char *key, const Compositor_CumulativeStats*v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nPid", v->m_nPid);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumFramePresents", v->m_nNumFramePresents);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumDroppedFrames", v->m_nNumDroppedFrames);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumReprojectedFrames", v->m_nNumReprojectedFrames);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumFramePresentsOnStartup", v->m_nNumFramePresentsOnStartup);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumDroppedFramesOnStartup", v->m_nNumDroppedFramesOnStartup);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumReprojectedFramesOnStartup", v->m_nNumReprojectedFramesOnStartup);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumLoading", v->m_nNumLoading);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumFramePresentsLoading", v->m_nNumFramePresentsLoading);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumDroppedFramesLoading", v->m_nNumDroppedFramesLoading);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumReprojectedFramesLoading", v->m_nNumReprojectedFramesLoading);


        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumTimedOut", v->m_nNumTimedOut);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumFramePresentsTimedOut", v->m_nNumFramePresentsTimedOut);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumDroppedFramesTimedOut", v->m_nNumDroppedFramesTimedOut);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumReprojectedFramesTimedOut", v->m_nNumReprojectedFramesTimedOut);

        return w;
    }

    static byte_counter_t encode_compositor_frame_timing(traversal_state ts, char *s, byte_counter_t n, const char *key, const Compositor_FrameTiming*v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nSize", v->m_nSize);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nFrameIndex", v->m_nFrameIndex);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumFramePresents", v->m_nNumFramePresents);
		w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumMisPresented", v->m_nNumMisPresented);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumDroppedFrames", v->m_nNumDroppedFrames);
		w += field_encoder_type::encode_reprojection_flags(ts, s + w, n - w, "m_nReprojectionFlags", v->m_nReprojectionFlags);
        w += field_encoder_type::encode_double(ts, s + w, n - w, "m_flSystemTimeInSeconds", v->m_flSystemTimeInSeconds);

        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flPreSubmitGpuMs", v->m_flPreSubmitGpuMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flPostSubmitGpuMs", v->m_flPostSubmitGpuMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flTotalRenderGpuMs", v->m_flTotalRenderGpuMs);

        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flCompositorRenderGpuMs", v->m_flCompositorRenderGpuMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flCompositorRenderCpuMs", v->m_flCompositorRenderCpuMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flCompositorRenderIdleCpuMs", v->m_flCompositorIdleCpuMs);

        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flClientFrameIntervalMs", v->m_flClientFrameIntervalMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flPresentCallCpuMs", v->m_flPresentCallCpuMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flWaitForPresentCpuMs", v->m_flWaitForPresentCpuMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flSubmitFrameMs", v->m_flSubmitFrameMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flWaitGetPosesCalledMs", v->m_flWaitGetPosesCalledMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flNewPosesReadyMs", v->m_flNewPosesReadyMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flNewFrameReadyMs", v->m_flNewFrameReadyMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flCompositorUpdateStartMs", v->m_flCompositorUpdateStartMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flCompositorUpdateEndMs", v->m_flCompositorUpdateEndMs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "m_flCompositorRenderStartMs", v->m_flCompositorRenderStartMs);
        w += field_encoder_type::encode_substructure_start(ts, s + w, n - w, "m_HmdPose", "DevicePose");
        w += encode_pose(ts + 1, s + w, n - w, nullptr, &v->m_HmdPose);
        w += field_encoder_type::encode_substructure_end(ts, s + w, n - w);
        return w;
    }

	static byte_counter_t encode_driverdirectmode_frame_timing(traversal_state ts, char *s, byte_counter_t n, const char *key, const DriverDirectMode_FrameTiming *v)
	{
		byte_counter_t w = 0;
		w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nSize", v->m_nSize);
		w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumFramePresents", v->m_nNumFramePresents);
		w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumMisPresented", v->m_nNumMisPresented);
		w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nNumDroppedFrames", v->m_nNumDroppedFrames);
		w += field_encoder_type::encode_reprojection_flags(ts, s + w, n - w, "m_nReprojectionFlags", v->m_nReprojectionFlags);
		return w;
	}

    static byte_counter_t encode_camera_video_stream_frame_header(traversal_state ts, char *s, byte_counter_t n, const char *key, const CameraVideoStreamFrameHeader_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "eFrameType", 
            openvr_string::EVRTrackedCameraFrameTypeToString(v->eFrameType), v->eFrameType);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "nWidth", v->nWidth);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "nHeight", v->nHeight);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "nBytesPerPixel", v->nBytesPerPixel);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "nFrameSequence", v->nFrameSequence);
        w += field_encoder_type::encode_substructure_start(ts, s + w, n - w, "standingTrackedDevicePose", "device pose");
        w += encode_pose(ts + 1, s + w, n - w, nullptr, &v->standingTrackedDevicePose);
        w += field_encoder_type::encode_substructure_end(ts, s + w, n - w);
        return w;
    }

    static byte_counter_t encode_compositor_overlay_settings(traversal_state ts, char *s, byte_counter_t n, const char *key, const Compositor_OverlaySettings *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "size", v->size);
        w += field_encoder_type::encode_b(ts, s + w, n - w, "curved", v->curved);
        w += field_encoder_type::encode_b(ts, s + w, n - w, "antialias", v->antialias);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "scale", v->scale);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "distance", v->distance);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "alpha", v->alpha);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "uOffset", v->uOffset);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "vOffset", v->vOffset);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "uScale", v->uScale);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "vScale", v->vScale);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "gridDivs", v->gridDivs);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "gridWidth", v->gridWidth);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "gridScale", v->gridScale);
        w += field_encoder_type::encode_f44(ts, s + w, n - w, "transform", v->transform.m);
        return w;
    }

    static byte_counter_t encode_reserved(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Reserved_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "reserved0", v->reserved0);
        w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "reserved1", v->reserved1);
        return w;
    }

    static byte_counter_t encode_controller_state(traversal_state ts, char *s, byte_counter_t n, const char *key, const VRControllerState001_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "unPacketNum", v->unPacketNum);
        w += field_encoder_type::encode_button_mask(ts, s + w, n - w, "ulButtonPressed", v->ulButtonPressed);
        w += field_encoder_type::encode_button_mask(ts, s + w, n - w, "ulButtonTouched", v->ulButtonTouched);
        
        // unroll the axis array in a meaningful way:
        w += field_encoder_type::encode_axis_array(ts, s + w, n - w, "rAxis", v->rAxis);
        return w;
    }


    static byte_counter_t encode_controller_axis(traversal_state ts, char *s, byte_counter_t n, const char *key, const VRControllerAxis_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f(ts, s + w, n - w, "x", v->x);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "y", v->y);
        return w;
    }

    static byte_counter_t encode_hidden_area_mesh(traversal_state ts, char *s, byte_counter_t n, const char *key, const HiddenAreaMesh_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "unTriangleCount", v->unTriangleCount);
        w += field_encoder_type::encode_area_mesh_model_vertex(ts, s + w, n-w, "pVertexData", v->pVertexData, v->unTriangleCount);
        return w;
    }

    static byte_counter_t encode_texture_bounds(traversal_state ts, char *s, byte_counter_t n, const char *key, const VRTextureBounds_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f(ts, s + w, n - w, "uMin", v->uMin);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "vMin", v->vMin);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "uMax", v->uMax);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "vMax", v->vMax);
        return w;
    }

    static byte_counter_t encode_pose(traversal_state ts, char *s, byte_counter_t n, const char *key, const TrackedDevicePose_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_transform34(ts, s + w, n - w, "mDeviceToAbsoluteTracking", v->mDeviceToAbsoluteTracking.m);
        w += field_encoder_type::encode_f3(ts, s + w, n - w, "vVelocity", v->vVelocity.v);
        w += field_encoder_type::encode_f3(ts, s + w, n - w, "vAngularVelocity", v->vAngularVelocity.v);
        w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "eTrackingResult", 
            openvr_string::ETrackingResultToString(v->eTrackingResult), v->eTrackingResult);
        w += field_encoder_type::encode_b(ts, s + w, n - w, "bPoseIsValid", v->bPoseIsValid);
        w += field_encoder_type::encode_b(ts, s + w, n - w, "bDeviceIsConnected", v->bDeviceIsConnected);
        return w;
    }

    static byte_counter_t encode_texture(traversal_state ts, char *s, byte_counter_t n, const char *key, const Texture_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "handle", (uint64_t)v->handle);
        w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "eType", 
            openvr_string::ETextureTypeToString(v->eType), v->eType);
        w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "eColorSpace", 
            openvr_string::EColorSpaceToString(v->eColorSpace), v->eColorSpace);
        return w;
    }

	static byte_counter_t encode_texture_with_pose(traversal_state ts, char *s, byte_counter_t n, const char *key, const VRTextureWithPose_t *v)
	{
		byte_counter_t w = 0;
		w += encode_texture(ts, s + w, n - w, "texture", v);
		w += field_encoder_type::encode_transform34(ts, s + w, n - w, "mDeviceToAbsoluteTracking", v->mDeviceToAbsoluteTracking.m);
		return w;
	}

    static byte_counter_t encode_distortion(traversal_state ts, char *s, byte_counter_t n, const char *key, const DistortionCoordinates_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f2(ts, s + w, n - w, "red", v->rfRed);
        w += field_encoder_type::encode_f2(ts, s + w, n - w, "green", v->rfGreen);
        w += field_encoder_type::encode_f2(ts, s + w, n - w, "blue", v->rfBlue);
        return w;
    }

    static byte_counter_t encode_rect2(traversal_state ts, char *s, byte_counter_t n, const char *key, const HmdRect2_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f2(ts, s + w, n - w, "vTopLeft", v->vTopLeft.v);
        w += field_encoder_type::encode_f2(ts, s + w, n - w, "vBottomRight", v->vBottomRight.v);
        return w;
    }

    static byte_counter_t encode_controller(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Controller_t *d)
    {
        return field_encoder_type::encode_enum_s_and_u32dec(ts, s, n, key, 
            openvr_string::EVRButtonIdToString((vr::EVRButtonId)d->button), d->button);
    }

    static byte_counter_t encode_mouse(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Mouse_t *v)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f(ts, s + w, n - w, "x", v->x);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "y", v->y);
        int num_matches = 0;
        const char *match_list[3];
        if (v->button & VRMouseButton_Left)
        {
            match_list[num_matches++] = openvr_string::EVRMouseButtonToString(VRMouseButton_Left);
        }
        if (v->button & VRMouseButton_Right)
        {
            match_list[num_matches++] = openvr_string::EVRMouseButtonToString(VRMouseButton_Right);
        }
        if (v->button & VRMouseButton_Middle)
        {
            match_list[num_matches++] = openvr_string::EVRMouseButtonToString(VRMouseButton_Middle);
        }
        w += field_encoder_type::encode_enum_mask_strings_and_u32hex(ts, s + w, n - w, "button", match_list, num_matches, v->button);
        return w;
    }

    static byte_counter_t encode_scroll(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Scroll_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f(ts, s + w, n - w, "xdelta", d->xdelta);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "ydelta", d->ydelta);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "repeatCount", d->repeatCount);
        return w;
    }
    static byte_counter_t encode_process(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Process_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "pid", d->pid);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "oldPid", d->oldPid);
        w += field_encoder_type::encode_b(ts, s + w, n - w, "bForced", d->bForced);
        return w;
    }
    static byte_counter_t encode_notification(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Notification_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "ulUserValue", d->ulUserValue);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "pid", d->notificationId);
        return w;
    }
    static byte_counter_t encode_overlay(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Overlay_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "overlayHandle", d->overlayHandle);
        return w;
    }
    static byte_counter_t encode_status(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Status_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "statusState", 
            openvr_string::EVRStateToString((vr::EVRState)d->statusState), d->statusState);
        return w;
    }
    static byte_counter_t encode_keyboard(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Keyboard_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_char_mixed_array(ts, s + w, n - w, "cNewInput", sizeof(d->cNewInput), d->cNewInput);
        w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "uUserValue", d->uUserValue);
        return w;
    }
    static byte_counter_t encode_ipd(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Ipd_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f(ts, s + w, n - w, "ipdMeters", d->ipdMeters);
        return w;
    }
    static byte_counter_t encode_chaperone(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Chaperone_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "m_nPreviousUniverse", d->m_nPreviousUniverse);	// todo: m_nPrevious - c++/hungarian notation
        w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "m_nCurrentUniverse", d->m_nCurrentUniverse);
        return w;
    }
    static byte_counter_t encode_performance_test(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_PerformanceTest_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "m_nFidelityLevel", d->m_nFidelityLevel);	// todo: m_nPrevious - c++/hungarian notation
        return w;
    }
    static byte_counter_t encode_touch_pad_move(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_TouchPadMove_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_b(ts, s + w, n - w, "bFingerDown", d->bFingerDown);	// todo: m_nPrevious - c++/hungarian notation
        w += field_encoder_type::encode_f(ts, s + w, n - w, "flSecondsFingerDown", d->flSecondsFingerDown);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "fValueXFirst", d->fValueXFirst);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "fValueYFirst", d->fValueYFirst);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "fValueXRaw", d->fValueXRaw);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "fValueYRaw", d->fValueYRaw);
        return w;
    }
    static byte_counter_t encode_seated_zero_pose_reset(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_SeatedZeroPoseReset_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_b(ts, s + w, n - w, "bResetBySystemMenu", d->bResetBySystemMenu);
        return w;
    }
    static byte_counter_t encode_screenshot(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Screenshot_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u32hex(ts, s + w, n - w, "handle", d->handle);
        w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "type", 
            openvr_string::EVRScreenshotTypeToString(EVRScreenshotType(d->type)), d->type);
        return w;
    }
    static byte_counter_t encode_screenshot_progress(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_ScreenshotProgress_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_f(ts, s + w, n - w, "progress", d->progress);
        return w;
    }
    static byte_counter_t encode_application_launch(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_ApplicationLaunch_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "pid", d->pid);
        w += field_encoder_type::encode_u32hex(ts, s + w, n - w, "unArgsHandle", d->unArgsHandle);
        return w;
    }
    static byte_counter_t encode_editing_camera_surface(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_EditingCameraSurface_t *d)
    {
        byte_counter_t w = 0;
        w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "overlayHandle", d->overlayHandle);
        w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "nVisualMode", 
            openvr_string::EVRTrackedCameraFrameTypeToString((EVRTrackedCameraFrameType)d->nVisualMode), d->nVisualMode);	// todo: this is a guess
        return w;
    }
	static byte_counter_t encode_message_overlay(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_MessageOverlay_t *d)
	{
		byte_counter_t w = 0;
		w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "unVRMessageOverlayResponse",
			openvr_string::VRMessageOverlayResponseToString((VRMessageOverlayResponse)d->unVRMessageOverlayResponse), d->unVRMessageOverlayResponse);
		return w;
	}
	static byte_counter_t encode_property(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_Property_t *d)
	{
		byte_counter_t w = 0;
		w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "container", d->container);
		w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "prop",
			openvr_string::ETrackedDevicePropertyToString(d->prop), d->prop);
		return w;
	}

	static byte_counter_t encode_dualanalog_event(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_DualAnalog_t *d)
	{
		byte_counter_t w = 0;
		w += field_encoder_type::encode_f(ts, s + w, n - w, "x", d->x);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "y", d->y);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "transformedX", d->transformedX);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "transformedY", d->transformedY);
		w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "prop",
			openvr_string::EDualAnalogWhichToString(d->which), d->which);
		return w;
	}

	static byte_counter_t encode_hapticvibration_event(traversal_state ts, char *s, byte_counter_t n, const char *key, const VREvent_HapticVibration_t*d)
	{
		byte_counter_t w = 0;
		w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "containerHandle", d->containerHandle);
		w += field_encoder_type::encode_u64hex(ts, s + w, n - w, "componentHandle", d->componentHandle);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "fDurationSeconds", d->fDurationSeconds);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "fFrequency", d->fFrequency);
		w += field_encoder_type::encode_f(ts, s + w, n - w, "fAmplitude", d->fAmplitude);
		return w;
	}

    // size includes null byte
    static byte_counter_t encode_event(traversal_state ts, char *s, byte_counter_t n, const char *, const VREvent_t *e)
    {
        byte_counter_t w = 0; // num_written
        vr::EVREventType event_type = (vr::EVREventType)e->eventType;
        w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "eventType", 
            openvr_string::EVREventTypeToString(event_type), event_type);
        w += field_encoder_type::encode_u32dec(ts, s + w, n - w, "trackedDeviceIndex", e->trackedDeviceIndex);
        w += field_encoder_type::encode_f(ts, s + w, n - w, "eventAgeSeconds", e->eventAgeSeconds);

        EventDetailsType sub_type = event_details_for_event_type(event_type);
        w += field_encoder_type::encode_enum_s_and_u32dec(ts, s + w, n - w, "dataType", subtype_to_str(sub_type), sub_type);

        const char *key = "eventDetails";


		byte_counter_t detail_bytes_used = 0;

        switch (sub_type)
        {
		case EDT_EventDetails_None: 
													detail_bytes_used = 0; 
													break;

        case EDT_EventDetails_Reserved:				w += encode_reserved(ts, s + w, n - w, key, &e->data.reserved); 
													detail_bytes_used = sizeof(e->data.reserved);
													break;

        case EDT_EventDetails_Controller:			w += encode_controller(ts, s + w, n - w, key, &e->data.controller); 
													detail_bytes_used = sizeof(e->data.controller);
													break;

        case EDT_EventDetails_Mouse:				w += encode_mouse(ts, s + w, n - w, key, &e->data.mouse); 
													detail_bytes_used = sizeof(e->data.mouse);
													break;

        case EDT_EventDetails_Scroll:				w += encode_scroll(ts, s + w, n - w, key, &e->data.scroll); 
													detail_bytes_used = sizeof(e->data.scroll);
													break;

        case EDT_EventDetails_Process:				w += encode_process(ts, s + w, n - w, key, &e->data.process); 
													detail_bytes_used = sizeof(e->data.process);
													break;

        case EDT_EventDetails_Notification: 		w += encode_notification(ts, s + w, n - w, key, &e->data.notification); 
													detail_bytes_used = sizeof(e->data.notification);
													break;

        case EDT_EventDetails_Overlay:				w += encode_overlay(ts, s + w, n - w, key, &e->data.overlay); 
													detail_bytes_used = sizeof(e->data.overlay);
													break;

        case EDT_EventDetails_Status:				w += encode_status(ts, s + w, n - w, key, &e->data.status); 
													detail_bytes_used = sizeof(e->data.status);
													break;

        case EDT_EventDetails_Keyboard:				w += encode_keyboard(ts, s + w, n - w, key, &e->data.keyboard); 
													detail_bytes_used = sizeof(e->data.keyboard);
													break;

        case EDT_EventDetails_Ipd:					w += encode_ipd(ts, s + w, n - w, key, &e->data.ipd); 
													detail_bytes_used = sizeof(e->data.ipd);
													break;

        case EDT_EventDetails_Chaperone:			w += encode_chaperone(ts, s + w, n - w, key, &e->data.chaperone); 
													detail_bytes_used = sizeof(e->data.chaperone);
													break;

        case EDT_EventDetails_PerformanceTest:		w += encode_performance_test(ts, s + w, n - w, key, &e->data.performanceTest); 
													detail_bytes_used = sizeof(e->data.performanceTest);
													break;
				
        case EDT_EventDetails_TouchPadMove:			w += encode_touch_pad_move(ts, s + w, n - w, key, &e->data.touchPadMove); 
													detail_bytes_used = sizeof(e->data.touchPadMove);
													break;
        case EDT_EventDetails_SeatedZeroPoseReset:	w += encode_seated_zero_pose_reset(ts, s + w, n - w, key, &e->data.seatedZeroPoseReset); 
													detail_bytes_used = sizeof(e->data.seatedZeroPoseReset);
													break;
        case EDT_EventDetails_Screenshot:			w += encode_screenshot(ts, s + w, n - w, key, &e->data.screenshot); 
													detail_bytes_used = sizeof(e->data.screenshot);
													break;
        case EDT_EventDetails_ScreenshotProgress:	w += encode_screenshot_progress(ts, s + w, n - w, key, &e->data.screenshotProgress); 
													detail_bytes_used = sizeof(e->data.screenshotProgress);
													break;
        case EDT_EventDetails_ApplicationLaunch:	w += encode_application_launch(ts, s + w, n - w, key, &e->data.applicationLaunch); 
													detail_bytes_used = sizeof(e->data.applicationLaunch);
													break;
        case EDT_EventDetails_EditingCameraSurface:	w += encode_editing_camera_surface(ts, s + w, n - w, key, &e->data.cameraSurface); 
													detail_bytes_used = sizeof(e->data.cameraSurface);
													break;
		case EDT_EventDetails_MessageOverlay:       w += encode_message_overlay(ts, s + w, n - w, key, &e->data.messageOverlay); 
													detail_bytes_used = sizeof(e->data.messageOverlay);
													break;
		case EDT_EventDetails_Property:	            w += encode_property(ts, s + w, n - w, key, &e->data.property); 
													detail_bytes_used = sizeof(e->data.property);
													break;
		case EDT_EventDetails_Haptic:	            w += encode_hapticvibration_event(ts, s + w, n - w, key, &e->data.hapticVibration);
													detail_bytes_used = sizeof(e->data.hapticVibration);
													break;
        }


		static VREvent_Data_t zero_data;
		byte_counter_t unused_byte_count = sizeof(VREvent_Data_t) - detail_bytes_used;
		if (unused_byte_count > 0)
		{
			uint8_t *unused_bytes = ((uint8_t *)&e->data) + detail_bytes_used;
			if (memcmp(unused_bytes, &zero_data, unused_byte_count) != 0)
			{
				// found dirty bytes at the end of the event
				w += field_encoder_type::encode_u8_hex_array(ts, s + w, n - w, "dirty_bytes", unused_byte_count, unused_bytes);
			}
		}
		

        return w;
    }
};

// csv_field_encoder
// tagged_field_encoder
//
// * these are the instaniated types of encoders.  The tagged field encoder is the one exposed
//   to the outside.  csv_field_encoder is to test that other encoders could be instanitated 
//
typedef field_encoder<true, ',', false> csv_field_encoder;
typedef field_encoder<false, '\n', false> tagged_field_encoder;


// tagged_struct_encoder:
// csv_struct_encoder:
// 
// Corresponding struct encoders paired with field encoders
//
typedef struct_encoder<tagged_field_encoder> tagged_struct_encoder;
typedef struct_encoder<csv_field_encoder> csv_struct_encoder;

//
// public interface:
//
// The following functions are C-like public interface.  I didn't want to expose 
// the implementation out to clients.
//
//
uint32_t openvr_string::GetAsString(const VREvent_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_event(traversal_state(23,1), s, n, "event", &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Controller_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_controller(traversal_state(22, 1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Mouse_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_mouse(traversal_state(22, 1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Scroll_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_scroll(traversal_state(22, 1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_TouchPadMove_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_touch_pad_move(traversal_state(22, 1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Notification_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_notification(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Process_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_process(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Overlay_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_overlay(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Status_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_status(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Keyboard_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_keyboard(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Ipd_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_ipd(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Chaperone_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_chaperone(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Reserved_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_reserved(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_PerformanceTest_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_performance_test(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_SeatedZeroPoseReset_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_seated_zero_pose_reset(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Screenshot_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_screenshot(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_ScreenshotProgress_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_screenshot_progress(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_ApplicationLaunch_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_application_launch(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_EditingCameraSurface_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_editing_camera_surface(traversal_state(22,1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_MessageOverlay_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
	return tagged_struct_encoder::encode_message_overlay(traversal_state(22, 1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_Property_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
	return tagged_struct_encoder::encode_property(traversal_state(22, 1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_DualAnalog_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
	return tagged_struct_encoder::encode_dualanalog_event(traversal_state(22, 1), s, n, nullptr, &e) + 1;
}

uint32_t openvr_string::GetAsString(const VREvent_HapticVibration_t &e, VR_OUT_STRING() char *s, uint32_t n)
{
	return tagged_struct_encoder::encode_hapticvibration_event(traversal_state(22, 1), s, n, nullptr, &e) + 1;
}


// external interface - at least for now - these don't include themselves as having names
uint32_t openvr_string::GetAsString(const HmdMatrix34_t h, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::field_encoder_type::encode_f34(traversal_state(22,1), s, n, nullptr, h.m) + 1;
}

uint32_t openvr_string::GetAsString(const HmdMatrix44_t h, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::field_encoder_type::encode_f44(traversal_state(22,1), s, n, nullptr, h.m) + 1;
}

uint32_t openvr_string::GetAsString(const HmdVector2_t v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::field_encoder_type::encode_f2(traversal_state(22,1), s, n, nullptr, v.v) + 1;
}

uint32_t openvr_string::GetAsString(const HmdVector3_t v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::field_encoder_type::encode_f3(traversal_state(22,1), s, n, nullptr, v.v) + 1;
}

uint32_t openvr_string::GetAsString(const HmdVector4_t v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::field_encoder_type::encode_f4(traversal_state(22,1), s, n, nullptr, v.v) + 1;
}

uint32_t openvr_string::GetAsString(const HmdColor_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::field_encoder_type::encode_color(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const HmdQuad_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::field_encoder_type::encode_quad(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const HmdRect2_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_rect2(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const DistortionCoordinates_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_distortion(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const Texture_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_texture(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const TrackedDevicePose_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_pose(traversal_state(25,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const VRTextureBounds_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_texture_bounds(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const VRTextureWithPose_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
	return tagged_struct_encoder::encode_texture_with_pose(traversal_state(22, 1), s, n, nullptr, &v) + 1;
}


uint32_t openvr_string::GetAsString(const HiddenAreaMesh_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_hidden_area_mesh(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const VRControllerAxis_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_controller_axis(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const VRControllerState_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_controller_state(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const Compositor_OverlaySettings &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_compositor_overlay_settings(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const CameraVideoStreamFrameHeader_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_camera_video_stream_frame_header(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const Compositor_FrameTiming &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_compositor_frame_timing(traversal_state(31,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const DriverDirectMode_FrameTiming &v, VR_OUT_STRING() char *s, uint32_t n)
{
	return tagged_struct_encoder::encode_driverdirectmode_frame_timing(traversal_state(31, 1), s, n, nullptr, &v) + 1;
}


uint32_t openvr_string::GetAsString(const Compositor_CumulativeStats &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_compositor_cumulative_stats(traversal_state(34,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const NotificationBitmap_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_notification_bitmap(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const VROverlayIntersectionParams_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_overlay_intersection_params(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const VROverlayIntersectionResults_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_overlay_intersection_results(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const IntersectionMaskCircle_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
	return tagged_struct_encoder::encode_intersection_mask_circle(traversal_state(22, 1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const IntersectionMaskRectangle_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
	return tagged_struct_encoder::encode_intersection_mask_rectangle(traversal_state(22, 1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const VROverlayIntersectionMaskPrimitive_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
	return tagged_struct_encoder::encode_overlay_intersection_mask_primitive(traversal_state(22, 1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const RenderModel_ComponentState_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_render_model_component_state(traversal_state(32,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const RenderModel_Vertex_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::field_encoder_type::encode_render_model_vertex(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const RenderModel_TextureMap_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_render_model_texturemap(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const RenderModel_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_render_model(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const RenderModel_ControllerMode_State_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
    return tagged_struct_encoder::encode_render_controller_mode_state(traversal_state(22,1), s, n, nullptr, &v) + 1;
}

uint32_t openvr_string::GetAsString(const VRTextureDepthInfo_t &v, VR_OUT_STRING() char *s, uint32_t n)
{
	return tagged_struct_encoder::encode_texture_depth_mode(traversal_state(22, 1), s, n, nullptr, &v) + 1;
}


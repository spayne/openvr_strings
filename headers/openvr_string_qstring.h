// 
// openvr_string_qstring.h
//
// * wrappers to convert all of the openvr structs and 
//   enums into Qt QString objects 
//
// e.g. To convert a matrix m, to a QString: 
//   vr::HmdMatrix34_t m;
//   QString asString(to_qstring(m));
//  
#pragma once
#include <openvr_string.h>

namespace openvr_string
{
    // convert openvr structs to qstring
    template< bool b >
    struct qalgorithm_selector {
        template< typename T >
        static QString implementation(const T& val)
        {
            const int DEFAULT_QSTRING_BUF_SIZE = 256;
            char buf[DEFAULT_QSTRING_BUF_SIZE];
            uint32_t required_size = openvr_string::GetAsString(val, buf, sizeof(buf));
            // failsafe
            if (required_size > DEFAULT_QSTRING_BUF_SIZE)
            {
                QByteArray ary;
                ary.resize(required_size);
                openvr_string::GetAsString(val, ary.data(), required_size);
                return QString::fromLocal8Bit(ary);
            }
            return QString(buf);
        }
    };

    // internal/implementation function to convert enums to string
    template<>
    struct qalgorithm_selector< true > {
        template< typename T >
        static QString implementation(const T& val)
        {
            const char *buf = openvr_string::GetAsString(val);
            return QString(buf ? buf : "");
        }
    };

    // external interface
    template< typename T >
    QString to_qstring(const T& object) {
        return qalgorithm_selector< std::is_enum<T>::value>::implementation(object);
    }
}


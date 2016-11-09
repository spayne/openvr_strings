// 
// openvr_string_stdstring.h
//
// * utility to convert all of the openvr structs and 
//   enums into std::string objects 
//
// e.g. To convert a matrix m, to a QString: 
//   vr::HmdMatrix34_t m;
//   QString asString(to_string(m));
//  
#pragma once
#include <openvr.h>
#include <openvr_string.h>
#include <string>

namespace openvr_string
{

	// convert openvr structs to std::string
	template< bool b >
	struct salgorithm_selector {
		template< typename T >
		static std::string implementation(const T& val)
		{
			const int DEFAULT_STD_STRING_BUF_SIZE = 256;
			char buf[DEFAULT_STD_STRING_BUF_SIZE];
			uint32_t required_size = openvr_string::GetAsString(val, buf, sizeof(buf));
			// failsafe
			if (required_size > DEFAULT_STD_STRING_BUF_SIZE)
			{
				std::string ret(required_size + 1, 0);
				openvr_string::GetAsString(val, &ret[0], required_size);
				ret.resize(required_size - 1);
				return ret;
			}
			return std::string(buf);
		}
	};

	// internal/implementation function to convert enums to string
	template<>
	struct salgorithm_selector< true > {
		template< typename T >
		static std::string implementation(const T& val)
		{
			const char *buf = openvr_string::GetAsString(val);
			return std::string(buf ? buf : "");
		}
	};

	// external interface
	template< typename T >
	std::string to_string(const T& object) {
		return salgorithm_selector< std::is_enum<T>::value>::implementation(object);
	}
}


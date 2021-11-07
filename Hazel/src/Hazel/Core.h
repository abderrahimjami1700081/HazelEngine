#pragma once

#ifdef HAZEL_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else 
		#define HAZEL_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL

#else
	#error Hazel Engine only supports Windows
#endif // HAZEL_PLATFORM_WINDOWS

#ifndef HZ_ENABLE_ASSERTS
	#define HZ_ASSERT(x, ...) { if(!(x)) { HZ_ERROR ("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define HZ_CORE_ASSERT(x, ...) { if(!(x)) { HZ_CORE_ERROR ("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }

#else
	#define HZ_ASSERT(...)
	#define HZ_CORE_ASSERT(...)

#endif // !HZ_ENABLE_ASSERTS


#define BIT(x) (1 << x)

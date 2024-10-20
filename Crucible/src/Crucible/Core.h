#pragma once

#ifdef CE_PLATFORM_WINDOWS
	#ifdef CE_BUILD_DLL
		#define CRUCIBLE_API __declspec(dllexport)
	#else
		#define CRUCIBLE_API __declspec(dllimport)
	#endif
#else
	#error Crucible only supports Windows!
#endif

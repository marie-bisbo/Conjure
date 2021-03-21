#pragma once

#ifdef CJ_PLATFORM_WINDOWS
	#ifdef CJ_BUILD_DLL
		#define CONJURE_API __declspec(dllexport)
	#else
		#define CONJURE_API __declspec(import)
	#endif
#else
	#error Conjure only supports Windows
#endif

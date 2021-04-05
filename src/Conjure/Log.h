#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Conjure {

	class CONJURE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define CJ_CORE_TRACE(...)    ::Conjure::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CJ_CORE_INFO(...)     ::Conjure::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CJ_CORE_WARN(...)     ::Conjure::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CJ_CORE_ERROR(...)    ::Conjure::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CJ_CORE_FATAL(...)    ::Conjure::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define CJ_TRACE(...)         ::Conjure::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CJ_INFO(...)          ::Conjure::Log::GetClientLogger()->info(__VA_ARGS__)
#define CJ_WARN(...)          ::Conjure::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CJ_ERROR(...)         ::Conjure::Log::GetClientLogger()->error(__VA_ARGS__)
#define CJ_FATAL(...)         ::Conjure::Log::GetClientLogger()->fatal(__VA_ARGS__)

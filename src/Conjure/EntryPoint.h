#pragma once

#ifdef CJ_PLATFORM_WINDOWS

extern Conjure::Application* Conjure::CreateApplication();

int main(int argc, char** argv)
{
	Conjure::Log::Init();
	CJ_CORE_WARN("Initialised Log!");
	int a = 5;
	CJ_INFO("Hello! Var={0}", a);

	auto app = Conjure::CreateApplication();
	app->Run();
	delete app;
}

#endif

#pragma once

#ifdef CJ_PLATFORM_WINDOWS

extern Conjure::Application* Conjure::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Conjure::CreateApplication();
	app->Run();
	delete app;
}

#endif

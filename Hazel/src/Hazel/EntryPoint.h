#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// external linkage. defined in another translation unit.
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	HZ_INFO("Hello World!{0}", 5);
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif


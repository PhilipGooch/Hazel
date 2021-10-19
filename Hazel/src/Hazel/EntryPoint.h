#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// external linkage. defined in another translation unit.
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hello World!");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
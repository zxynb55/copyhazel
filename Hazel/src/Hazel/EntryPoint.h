#pragma once
#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();
int main(int argc,int** argv) {
	printf("Hazel Engine");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif
#include <CrepeCore.hpp>
#include <time.h>

void Application::Quit()
{
	AppState = false;
}
bool Application::GetState()
{
	return AppState;
}

void Time::TimeCollectStart()
{
	TimeCollectBuffer = clock();
}
void Time::TimeCollectEnd()
{
	deltaTime = clock() - TimeCollectBuffer;
}
void CrepeScript::Start()
{
}
void CrepeScript::Update()
{
}
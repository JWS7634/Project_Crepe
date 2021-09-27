#include <stdio.h>
#include <time.h>
#include <windows.h>

#include <CrepeCore.hpp>
#include <CrepelibManager.hpp>

#include <Example.hpp>

int main()
{
	Application Application;
	Time Time;
	Core Core;
	for(unsigned long long i = 0; i < sizeof(Core.ClassArr) / sizeof(Core); i++)
	{
		Core.ClassArr[i]->Application = &Application;
		Core.ClassArr[i]->Time = &Time;
		Core.ClassArr[i]->Start();
	}
	while(!GetAsyncKeyState(VK_ESCAPE))
	{
		Time.TimeCollectStart();
		//
		//before Update
		//

		//Update Process
		for(unsigned long long i = 0; i < sizeof(Core.ClassArr) / sizeof(Core); i++)
			Core.ClassArr[i]->Update();

		//
		//after Update
		//
		Time.TimeCollectEnd();
	}
}

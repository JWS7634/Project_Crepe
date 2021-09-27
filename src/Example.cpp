#include <stdio.h>
#include <Example.hpp>

void Example::Start()
{

}
void Example::Update()
{
	printf("Update the HelloWorld!\n");
	printf("%dms\n",Time->deltaTime);
}

#include "titleScreen.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


using namespace CPEProject;

[STAThreadAttribute]

int main()
{
	std::srand(time(NULL));

	Application::Run(gcnew titleScreen());

	return 0;
}
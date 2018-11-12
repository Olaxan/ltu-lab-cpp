#include "pch.h"
#include <iostream>
#include <sstream>

#include "..\UtilsLib\utilslib.h"

using namespace std;
using namespace efiilj;

int main()
{

	cout << "Hello World!\n";
	cout << "How many times do you wish to greet the world?" << endl;

	int num = IOUtils::askInt("> ", "Please enter an integer.");

	for (int i = 0; i < num; i++)
	{
		cout << "Hello world" << string(i + 1, '!') << endl;
	}

}

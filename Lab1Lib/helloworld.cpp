#include "lab1lib.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>
#include <sstream>

using namespace std;

namespace efiilj {

	void Lab1::helloWorld(int n)
	{

		for (int i = 0; i < n; i++)
		{
			cout << "Hello world" << string(i + 1, '!') << endl;
		}

	}

}



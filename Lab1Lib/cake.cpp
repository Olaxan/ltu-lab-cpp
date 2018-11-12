#include "lab1lib.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>

using namespace std;

namespace efiilj {

	void Lab1::cake(int people) {
		printf("%i eggs\n", (int)ceil((3.0f / 4.0f) * people));
		printf("%g dl sugar\n", (3.0f / 4.0f) * people);
		printf("%g tsp vanilla extract\n", (2.0f / 4.0f) * people);
		printf("%g tsp baking soda\n", (2.0f / 4.0f) * people);
		printf("%g dl flour\n", (3.0f / 4.0f) * people);
		printf("%g g butter\n", (75.0f / 4.0f) * people);
		printf("%g l water\n", (1.0f / 4.0f) * people);
	}

}


#include "lab1lib.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>

using namespace std;

namespace efiilj {

	float Lab1::cost(float amount, float interest, float years) {
		float k = amount + (years + 1) * amount * (interest / 100) / 2;
		printf("Total mortgage cost in %g years will be %g:-", years, k);
		return k;
	}

}


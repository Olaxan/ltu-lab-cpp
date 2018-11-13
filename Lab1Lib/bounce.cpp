#include "lab1lib.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>

using namespace std;

namespace efiilj {

	void Lab1::bounce(int n) {

		for (int i = -abs(n); i <= abs(n); i++) {
			cout << (signbit((float)n) ? -abs(i) : abs(i)) << endl;
		}

	}

}



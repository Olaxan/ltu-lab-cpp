#include "utilslib.h"

#include <stdexcept>

using namespace std;

namespace efiilj {

	int MathUtils::neg(int n) {
		return -abs(n);
	}

}
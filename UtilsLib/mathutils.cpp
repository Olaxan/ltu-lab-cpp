#include "stdafx.h"
#include "utilslib.h"

#include <stdexcept>

using namespace std;

namespace efiilj {

	int MathUtils::Neg(int n) {
		return -abs(n);
	}

}
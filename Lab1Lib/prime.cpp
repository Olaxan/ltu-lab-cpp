#include "lab1lib.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>
#include <math.h>

using namespace std;

namespace efiilj {

	void Lab1::prime(int n) {

		int t = 0;

		while (n > 0) {

			if (isPrime(t)) {
				cout << t << endl;
				n--;
			}
			t++;
		}

	}

	bool Lab1::isPrime(int n) {

		if (n <= 1)
			return false;

		for (int i = 2; i <= (int)sqrt(n); i++) {

			if (n != i && n % i == 0) {
				return false;
			}

		}

		return true;

	}

}


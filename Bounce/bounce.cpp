// bounce.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "utilslib.h"

#include <iostream>

using namespace std;
using namespace efiilj;

void bounce(int n);

int main()
{
    std::cout << "How many numbers do you wish to bounce?\n";

	int num = IOUtils::askInt("> ", "Please enter an integer.");

	bounce(num);
}

void bounce(int n) {
	// Prints numbers n-0-n using iteration
	for (int i = -abs(n); i <= abs(n); i++) {
		cout << (signbit((float)n) ? -abs(i) : abs(i)) << endl;
	}
		
}

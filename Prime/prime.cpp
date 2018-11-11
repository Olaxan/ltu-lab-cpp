// prime.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include "utilslib.h"

#include <iostream>
#include <math.h>

using namespace std;
using namespace efiilj;

void prime(int n);
bool isPrime(int n);

int main()
{
	cout << "Enter a number of primes to generate.\nA large number may take a very long time to process!\n";

	int num = IOUtils::askInt("> ", "Please enter an integer.");

	prime(num);

}

void prime(int n) {

	int t = 0;

	while (n > 0) {

		if (isPrime(t)) {
			cout << t << endl;
			n--;
		}
		t++;
	}

}

bool isPrime(int n) {

	if (n <= 1)
		return false;

	for (int i = 2; i <= (int)sqrt(n); i++) {

		if (n != i && n % i == 0) {
			return false;
		}

	}

	return true;

}

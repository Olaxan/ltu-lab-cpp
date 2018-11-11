// Prime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    std::cout << "Hello World!\n"; 
}

void prime(int n) {

	while (n > 0) {
		if (isPrime(n)) {
			cout << n--;
		}
	}

}

bool isPrime(int n) {

	for (int i = 0; i < sqrt(n); i++)
	{
		if (i % n == 0) {
			return true;
		}
	}

	return false;

}
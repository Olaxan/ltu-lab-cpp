#include "utilslib.h"

#include <iostream>

using namespace std;
using namespace efiilj;

float cost(float P, float r, float a);

int main() {
	
	int amount, years, interest;

	cout << "MORTGAGE CALCULATOR\nPlease enter the following information about your loan:\nAmount borrowed, loan interest (%), and years to repay.\n\n";
	amount = IOUtils::askInt("AMOUNT BORROWED: ", "Please enter an integer");
	interest = IOUtils::askInt("INTEREST %: ", "Please enter an integer between 0-100.", 0, 100);
	years = IOUtils::askInt("YEARS TO REPAY: ", "Please enter an integer");
	cost(amount, interest, years);
}

float cost(float amount, float interest, float years) {
	float k = amount + (years + 1) * amount * (interest / 100) / 2;
	printf("Total mortgage cost in %g years will be %g:-", years, k);
	return k;
}
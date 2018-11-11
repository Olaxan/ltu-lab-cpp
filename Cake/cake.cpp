#include "utilslib.h"

#include <iostream>

using namespace std;
using namespace efiilj;

void cake(int people);

int main() {
	cout << "How much cake you want?\n";
	cake(IOUtils::askInt("> ", "Please enter an integer"));
}

void cake(int people) {
	printf("%i eggs\n", (int)ceil((3.0f / 4.0f) * people));
	printf("%g dl sugar\n", (3.0f / 4.0f) * people);
	printf("%g tsp vanilla extract\n", (2.0f / 4.0f) * people);
	printf("%g tsp baking soda\n", (2.0f / 4.0f) * people);
	printf("%g dl flour\n", (3.0f / 4.0f) * people);
	printf("%g g butter\n", (75.0f / 4.0f) * people);
	printf("%g l water\n", (1.0f / 4.0f) * people);
}
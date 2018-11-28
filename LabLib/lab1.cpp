#include "lablib.h"
#include "matrix.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>

namespace efiilj {

	void Lab1::arrays(int width, int height) {

		Matrix mat = Matrix(width, height);

		for (int i = 0; i < mat.width * mat.height; i++) {
			*mat.index(i) = rand() % 10;
		}

		for (int y = 0; y < mat.height; y++) {
			mat.printRow(y);
			printf("%i\n", mat.getRowSum(y));
		}

		for (int x = 0; x < mat.width; x++) {
			printf("%i\t", mat.getColSum(x));
		}

		printf("%i\n", mat.getSum());
	}

	void Lab1::bounce(int n) {

		for (int i = -abs(n); i <= abs(n); i++) {
			cout << (signbit((float)n) ? -abs(i) : abs(i)) << endl;
		}

	}

	void Lab1::cake(int people) {
		printf("Sponge cake for %i people:\n", people);
		printf("%i eggs\n", (int)ceil((3.0f / 4.0f) * people));
		printf("%g dl sugar\n", (3.0f / 4.0f) * people);
		printf("%g tsp vanilla extract\n", (2.0f / 4.0f) * people);
		printf("%g tsp baking soda\n", (2.0f / 4.0f) * people);
		printf("%g dl flour\n", (3.0f / 4.0f) * people);
		printf("%g g butter\n", (75.0f / 4.0f) * people);
		printf("%g l water\n", (1.0f / 4.0f) * people);
	}

	void Lab1::helloWorld(int n)
	{

		for (int i = 0; i < n; i++)
		{
			cout << "Hello world" << string(i + 1, '!') << endl;
		}

	}

	float Lab1::cost(float amount, float interest, float years) {
		float k = amount + (years + 1) * amount * interest / 2;
		printf("Total mortgage cost in %g years will be %g:-\n", years, k);
		return k;
	}

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

	void Lab1::pyramid(int n) {

		for (int i = 1; i <= n; i++) {

			for (int j = 1; j <= i; j++)
			{
				printf("%i", j);
			}

			printf("\n");

		}
	}

	void Lab1::pyramid(char c) {

		for (int i = 0; i <= (toupper(c) - 'A'); i++) {
			printf(string(i + 1, 'A' + i).c_str());
			printf("\n");
		}

	}

}
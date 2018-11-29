#pragma once

namespace efiilj
{

	class Lab1
	{
	public:
		static void arrays(int width, int height);
		static void bounce(int n);
		static void cake(int people);
		static void helloWorld(int n);
		static float cost(float amount, float interest, float years);
		static void prime(int n);
		static void pyramid(int n);
		static void pyramid(char c);

	private:
		static bool isPrime(int n);

	};

}
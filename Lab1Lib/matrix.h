#pragma once

namespace efiilj {

	class Matrix
	{
	private:

		int *arr;

	public:

		const int height;
		const int width;

		Matrix(int width, int height);

		int* index(int x);
		int* index(int x, int y);
		int getSum();
		int getColSum(int x);
		int getRowSum(int y);
		void printCol(int x);
		void printRow(int y);

		~Matrix();
	};

}



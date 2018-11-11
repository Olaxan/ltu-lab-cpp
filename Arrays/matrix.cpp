#include "matrix.h"

#include <stdexcept>



matrix::matrix(int width, int height) : width(width), height(height)
{
	this->arr = new int[width * height];
}

int* matrix::index(int i) {
	return &arr[i];
}

int* matrix::index(int x, int y) {
	return &arr[x * this->height + y];
}

int matrix::getSum() {

	int sum = 0;

	for (int i = 0; i < this->width * this->height; i++) {
		sum += *this->index(i);
	}

	return sum;

}

int matrix::getColSum(int x) {

	int sum = 0;

	if (x < width) {

		for (int y = 0; y < this->height; y++)
		{
			sum += *index(x, y);
		}

		return sum;
	}
	else {
		throw std::out_of_range("Matrix index out of range");
	}
}

int matrix::getRowSum(int y) {

	int sum = 0;

	if (y < height) {

		for (int x = 0; x < this->width; x++)
		{
			sum += *index(x, y);
		}

		return sum;
	}
	else {
		throw std::out_of_range("Matrix index out of range");
	}
}

void matrix::printCol(int x) {
	if (x < width) {
		for (int y = 0; y < height; y++) {
			printf("%i\t", *this->index(x, y));
		}
	}
	else {
		throw std::out_of_range("Matrix index out of range");
	}
}

void matrix::printRow(int y) {
	if (y < height) {
		for (int x = 0; x < width; x++) {
			printf("%i\t", *this->index(x, y));
		}
	}
	else {
		throw std::out_of_range("Matrix index out of range");
	}
}


matrix::~matrix()
{
	delete[] arr;
}

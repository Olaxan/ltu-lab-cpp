#include "matharr.h"

#include <iostream>

using namespace std;

int main() {
	cout << "VECTORS:\n\n";
	efiilj::Vector2D vect = efiilj::Vector2D(1, 3);
	cout << vect.to_string() << endl;
	efiilj::Vector2D v2 = vect + vect;
	cout << v2.to_string() << endl;
	efiilj::Vector2D v3 = vect - v2;
	cout << v3.to_string() << endl;
	efiilj::Vector2D v4 = vect * v3;
	cout << v4.to_string() << endl;
	cout << v4.dot(v3) << endl;
	cout << v4.norm() << endl;

	cout << "\nMATRICES:\n\n";
	efiilj::Matrix2D mat = efiilj::Matrix2D(1, 0, 0, -1);
	efiilj::Matrix2D mat2 = mat * mat;
	efiilj::Matrix2D* mat3 = mat.getTransposed();
	efiilj::Matrix2D* mat4 = mat.getRotated(90);
	efiilj::Vector2D* v5 = vect.getTransformed(mat);
	cout << mat.to_string();
	cout << mat2.to_string();
	cout << v5->to_string();

	delete mat3;
	delete v5;
}
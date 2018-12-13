#include "matharr.h"
#include "..\UtilsLib\menu.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>
#include <vector>

using namespace std;
using namespace efiilj;

int main()
{
	Matrix2D mat = Matrix2D(1, 2, 3, 4);
	Vector2D vec = Vector2D(1, 2);

	cout << "Matrices:\n\n";

	cout << mat.to_string() << "\n";

	cout << mat.getTransposed().to_string() << "\n";

	cout << (mat * mat).to_string() << "\n";

	cout << Matrix2D::getRotationMatrix(35).to_string() << "\n";

	cout << "Vectors:\n\n";

	cout << vec.to_string() << "\n";

	cout << vec.getTransformed(mat).to_string() << "\n";

	cout << vec.dot(vec) << "\n";

	cout << vec.norm() << "\n";

	cout << (vec * vec).to_string() << "\n";

}
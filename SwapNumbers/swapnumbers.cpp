#include "..\UtilsLib\utilslib.h"

#include <iostream>

using namespace std;

int main(){

	float a, b;

	efiilj::IOUtils::getNum<float>(a, "a: ");
	efiilj::IOUtils::getNum<float>(b, "b: ");

	efiilj::GenUtils::swap(a, b);

	printf_s("a: %f\nb: %f\n", a, b);

}
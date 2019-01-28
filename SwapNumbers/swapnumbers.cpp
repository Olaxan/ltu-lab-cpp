#include "..\UtilsLib\utilslib.h"

#include <iostream>

using namespace std;

int main(){

	float a, b;

	efiilj::IOUtils::Input<float>(a, "a: ");
	efiilj::IOUtils::Input<float>(b, "b: ");

	efiilj::GenUtils::Swap(a, b);

	printf_s("a: %f\nb: %f\n", a, b);

}
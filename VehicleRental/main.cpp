#include "catalogue.h"

int main()
{
	efiilj::Catalogue cat = efiilj::Catalogue("Regular");
	cat.addVehicle(efiilj::Vehicle("Sedan", 50.0f, 25.0f, 4));
	cat.addVehicle();
}
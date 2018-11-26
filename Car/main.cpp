#include "car.h";
#include "..\UtilsLib\utilslib.h"

#include <iostream>

using namespace std;

int main() {

	string type, name, address, number, brand, model;
	float width, horsepower;
	int diameter, cylinders;

	efiilj::Tire tires[4];

	cout << "CoolCar Ltd. Remote Terminal #29:\nPlease fill out the following form to place an order:\n\n";

	if (cout << "Car model: " && getline(cin, type)) {

		cout << "\n=== PERSONAL INFORMATION ===\n";
		if (cout << "Name: " && getline(cin, name) && cout << "Address: " && getline(cin, address) && cout << "Number: " && getline(cin, number)) {
			efiilj::Person owner = efiilj::Person(name, address, number);

			cout << "\n=== TYRE SPECIFICATIONS ===\n";
			if (cout << "Brand: " && getline(cin, brand) && efiilj::IOUtils::getNum<float>(width, "Width: ") && efiilj::IOUtils::getNum<int>(diameter, "Diameter: ")) {
			
				for (int i = 0; i < 4; i++) {
					tires[i] = *new efiilj::Tire(brand, width, diameter);
				}

				cout << "\n=== ENGINE SPECIFICATIONS ===\n";
				if (cout << "Model: " && getline(cin, model) && efiilj::IOUtils::getNum<float>(horsepower, "Horsepower: ") << efiilj::IOUtils::getNum<int>(cylinders, "Cylinders: ")) {
					efiilj::Engine engine = efiilj::Engine(model, horsepower, cylinders);
					efiilj::Car car = efiilj::Car(engine, tires, type, owner);
					cout << "\n=== ORDER SUMMARY ===\n";
					cout << car.toString();
				}
			}
		}
	}
}
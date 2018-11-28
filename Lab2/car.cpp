#include "..\UtilsLib\utilslib.h"
#include "car.h"

#include <iostream>
#include <sstream>

using namespace std;

namespace efiilj {

	Car::Car(efiilj::Engine engine, efiilj::Tire* tires, std::string brand, efiilj::Person owner) : _engine(engine), _tires(tires), _brand(brand), _owner(owner) { }

	bool Car::build()
	{

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
					if (cout << "Model: " && getline(cin, model) && efiilj::IOUtils::getNum<float>(horsepower, "Horsepower: ") && efiilj::IOUtils::getNum<int>(cylinders, "Cylinders: ")) {
						efiilj::Engine engine = efiilj::Engine(model, horsepower, cylinders);
						efiilj::Car car = efiilj::Car(engine, tires, type, owner);
						cout << "\n=== ORDER SUMMARY ===\n";
						cout << car.toString();

						return true;
					}
				}
			}
		}

		return false;
	}

	const string Car::toString() const  {
		stringstream s;

		s << "\n" << brand() << "\n\n- ENGINE:\n\n" << engine().toString() << "\n- TYRES:\n\n";
		for (int i = 0; i < 4; i++) {
			s << "-- Tyre " << i + 1 << "\n" << tires(i)->toString() << "\n";
		}
		s << "- REGISTRAR:\n\n" << owner().toString();
		
		return s.str();
	}

	Car::~Car() { }

}


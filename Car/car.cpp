#include "car.h"

#include <iostream>
#include <sstream>

using namespace std;

namespace efiilj {

	Car::Car(efiilj::Engine engine, efiilj::Tire* tires, std::string brand, efiilj::Person owner) : _engine(engine), _tires(tires), _brand(brand), _owner(owner) { }

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


#include "tire.h"

#include <iostream>
#include <sstream>

using namespace std;

namespace efiilj {
	Tire::Tire() : _brandname("Undefined"), _width(0), _rimdiameter(0) { }
	Tire::Tire(std::string brandname, float width, int rimdiameter) : _brandname(brandname), _width(width), _rimdiameter(rimdiameter) { }

	const string Tire::toString() const {
		stringstream s;
		s << "Brand: " << brandname() << "\nWidth: " << width() << "\nDiameter: " << rimdiameter() << "\n";
		return s.str();
	}

	Tire::~Tire() { }

}


#include "person.h"

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

namespace efiilj {
	Person::Person() : _name("N/A"), _address("N/A"), _number("N/A") { }
	Person::Person(string name, string address, string number) : _name(name), _address(address), _number(number) { }

	const string Person::toString() const {
		stringstream s;
		s << "Name: " << name() << "\nAddress: " << address() << "\nNumber: " << number() << "\n";
		return s.str();
	}

	Person::~Person() { }

}

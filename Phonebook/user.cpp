#include "user.h"

#include <string>

using namespace std;

namespace efiilj {

	User::User() {
		this->name = "Undefined";
		this->number = "Undefined";
	}

	User::User(string name, string number) {
		this->name = name;
		this->number = number;
	}


	User::~User() {
	}

}


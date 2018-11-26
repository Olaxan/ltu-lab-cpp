#include "engine.h"

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

namespace efiilj {
	Engine::Engine() : _modelname("Undefined"), _horsepower(0), _cylinders(0) { }
	Engine::Engine(string modelname, float horsepower, int cylinders) : _modelname(modelname), _horsepower(horsepower), _cylinders(cylinders) { }

	const string Engine::toString() const {
		stringstream s;
		s << "Model: " << modelname() << "\nHorsepower: " << horsepower() << "\nCylinders: " << cylinders() << "\n";
		return s.str();
	}

	Engine::~Engine(){ }

}
#pragma once

#include "engine.h"
#include "person.h"
#include "tire.h"

#include <string>

namespace efiilj {

	class Car
	{
	public:
		Car(efiilj::Engine engine, efiilj::Tire* tires,	std::string brand, efiilj::Person owner);

		const efiilj::Engine& engine() const { return _engine; }
		void engine(const efiilj::Engine& engine) { _engine = engine; }

		const efiilj::Tire* tires() const { return _tires; }
		const efiilj::Tire* tires(int index) const { return _tires + index; }
		void tires(efiilj::Tire* tires) { _tires = tires; }

		const std::string& brand() const { return _brand; }
		void brand(const std::string& brand) { _brand = brand; }

		const efiilj::Person& owner() const { return _owner; }
		void owner(const efiilj::Person& owner) { _owner = owner; }

		const std::string toString() const;

		~Car();

	private:
		efiilj::Engine _engine;
		efiilj::Tire* _tires;
		std::string _brand;
		efiilj::Person _owner;

	};

}


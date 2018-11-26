#pragma once

#include <string>

namespace efiilj {

	class Person
	{
	public:
		Person();
		Person(std::string name, std::string address, std::string number);
		
		const std::string& name() const { return _name; }
		void name(const std::string& name) { _name = name; }

		const std::string& address() const { return _address; }
		void address(const std::string& address) { _address = address; }

		const std::string& number() const { return _number; }
		void number(const std::string& number) { _number = number; }

		const std::string toString() const;

		~Person();

	private:
		std::string _name;
		std::string _address;
		std::string _number;
	};

}


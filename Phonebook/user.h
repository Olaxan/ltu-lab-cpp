#pragma once

#include <string>

namespace efiilj {
	
	class User
	{
	public:
		User();
		User(std::string name, std::string number);
		
		std::string name;
		std::string number;

		~User();
	};

}


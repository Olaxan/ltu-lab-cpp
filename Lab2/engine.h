#pragma once

#include <string>

namespace efiilj {

	class Engine
	{
	public:
		Engine();
		Engine(std::string modelname, float horsepower, int cylinders);
		
		const std::string& modelname() const { return _modelname; }
		void modelname(const std::string& modelname) { _modelname = modelname; }

		const float& horsepower() const { return _horsepower; }
		void horsepower(const float& horsepower) { _horsepower = horsepower; }

		const int& cylinders() const { return _cylinders; }
		void cylinders(const int& cylinders) { _cylinders = cylinders; }
		
		const std::string toString() const;

		~Engine();

	private:
		std::string _modelname;
		float _horsepower;
		int _cylinders;

		
	};

}


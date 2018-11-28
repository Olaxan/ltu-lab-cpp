#pragma once

#include <string>

namespace efiilj {

	class Tire
	{
	public:
		Tire();
		Tire(std::string brandname, float width, int rimdiameter);

		const std::string& brandname() const { return _brandname; }
		void brandname(const std::string& brandname) { _brandname = brandname; }

		const float& width() const { return _width; }
		void width(const float& width) { _width = width; }

		const int& rimdiameter() const { return _rimdiameter; }
		void rimdiameter(const int& rimdiameter) { _rimdiameter = rimdiameter; }

		const std::string toString() const;

		~Tire();

	private:
		std::string _brandname;
		float _width;
		int _rimdiameter;

		
	};

}


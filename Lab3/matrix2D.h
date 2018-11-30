#pragma once

#include "vector2D.h"

#include <string>

namespace efiilj
{

	class Matrix2D
	{
	private:
		float _arr[4];
	public:
		Matrix2D();
		Matrix2D(const Matrix2D &copy);
		Matrix2D(float a, float b, float c, float d);

		Matrix2D operator * (const Matrix2D &other) const;
		Matrix2D& operator = (const Matrix2D &other);

		const float& a() const { return this->_arr[0]; }
		void a(const float& a) { this->_arr[0] = a; }

		const float& b() const { return this->_arr[0]; }
		void b(const float& b) { this->_arr[0] = b; }

		const float& c() const { return this->_arr[0]; }
		void c(const float& c) { this->_arr[0] = c; }

		const float& d() const { return this->_arr[0]; }
		void d(const float& d) { this->_arr[0] = d; }

		Matrix2D* getTransformed(const Matrix2D &trans) const;
		Matrix2D* getRotated(const float &angle) const;
		Matrix2D* getTransposed() const;

		std::string to_string();

		~Matrix2D();
	};

}


#pragma once

#include <string>

namespace efiilj {

	class Vector2D
	{
	private:
		float _arr[2];
	public:
		Vector2D();
		Vector2D(const Vector2D &copy);
		Vector2D(float x, float y);

		Vector2D operator + (Vector2D &other);
		Vector2D operator - (Vector2D &other);
		Vector2D operator * (Vector2D &other);

		bool operator == (Vector2D &other);
		bool operator != (Vector2D &other);

		const float& x() const { return this->_arr[0]; }
		void x(const float& x) { this->_arr[0] = x; }

		const float& y() const { return _arr[1]; }
		void y(const float& y) { this->_arr[1] = y; }

		float dot(Vector2D &other) const;
		float norm() const;

		std::string to_string() const;

		~Vector2D();
	};

}


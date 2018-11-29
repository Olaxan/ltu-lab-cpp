#pragma once

namespace efiilj {

	class Vector2D
	{
	public:
		Vector2D();
		Vector2D(const Vector2D &copy);
		Vector2D(float x1, float y1, float x2, float y2);

		Vector2D operator + (Vector2D &vect);
		Vector2D operator - (Vector2D &vect);
		Vector2D operator * (Vector2D &vect);

		Vector2D operator == (Vector2D &vect);
		Vector2D operator != (Vector2D &vect);

		const float& x1() const { return _arr[0]; }
		void x1(const float& x1) { this->_arr[0] = x1; }

		const float& y1() const { return _arr[1]; }
		void y1(const float& y1) { this->_arr[1] = y1; }

		const float& x2() const { return _arr[2]; }
		void x2(const float& x2) { this->_arr[2] = x2; }

		const float& y2() const { return _arr[3]; }
		void y2(const float& y2) { this->_arr[3] = y2; }

		float dot(Vector2D &vector) const;
		float norm() const;

		~Vector2D();

	private:
		float _arr[4];
	};

}


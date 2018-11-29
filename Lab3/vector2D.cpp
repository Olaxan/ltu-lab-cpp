#include "vector2D.h"

namespace efiilj
{

	Vector2D::Vector2D() { }

	Vector2D::Vector2D(const Vector2D& copy)
	{ 
		//copy.x1( this->x1() );
	}

	Vector2D::Vector2D(float x1, float y1, float x2, float y2)
	{
	}

	Vector2D Vector2D::operator+(Vector2D& vect)
	{
		return Vector2D();
	}

	Vector2D Vector2D::operator-(Vector2D& vect)
	{
		return Vector2D();
	}

	Vector2D Vector2D::operator*(Vector2D& vect)
	{
		return Vector2D();
	}

	Vector2D Vector2D::operator==(Vector2D& vect)
	{
		return Vector2D();
	}

	Vector2D Vector2D::operator!=(Vector2D& vect)
	{
		return Vector2D();
	}

	float Vector2D::dot(Vector2D& vector) const
	{
		return 0.0f;
	}

	float Vector2D::norm() const
	{
		return 0.0f;
	}

	Vector2D::~Vector2D() { }

}


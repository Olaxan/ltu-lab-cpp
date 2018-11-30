#include "vector2D.h"

#include <cmath>

namespace efiilj
{

	Vector2D::Vector2D()
	{
		this->x(0);
		this->y(0);
	}

	Vector2D::Vector2D(const Vector2D& copy)
	{
		this->x(copy.x());
		this->y(copy.y());
	}

	Vector2D::Vector2D(float x, float y)
	{
		this->x(x);
		this->y(y);
	}

	Vector2D Vector2D::operator+(Vector2D& other)
	{
		Vector2D vect;
		vect.x(this->x() + other.x());
		vect.y(this->y() + other.y());
		return vect;
	}

	Vector2D Vector2D::operator-(Vector2D& other)
	{
		Vector2D vect;
		vect.x(this->x() - other.x());
		vect.y(this->y() - other.y());
		return vect;
	}

	Vector2D Vector2D::operator*(Vector2D& other)
	{
		Vector2D vect;
		vect.x(this->x() * other.x());
		vect.y(this->y() * other.y());
		return vect;
	}

	bool Vector2D::operator==(Vector2D& other)
	{
		return (this->y() == other.y() && this->x() == other.x());
	}

	bool Vector2D::operator!=(Vector2D& other)
	{
		return (this->y() != other.y() || this->x() != other.x());
	}

	float Vector2D::dot(Vector2D& other) const
	{
		return (this->x() * other.x() + this->y() * other.y());
	}

	float Vector2D::norm() const
	{
		return sqrt(powf(this->x(), 2) + powf(this->y(), 2));
	}

	std::string Vector2D::to_string() const
	{
		return std::to_string(this->x()) + ", " + std::to_string(this->y());
	}

	Vector2D::~Vector2D() { }

}


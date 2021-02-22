#include<iostream>
#include"vector.h"
#include<cmath>
namespace VECTOR
{
	Vector::Vector()
	{
		x = y = 0.0;
	}
	Vector::Vector(double n1, double n2)
	{
		x = n1;
		y = n2;
	}
	double Vector::xval()const
	{
		return x;
	}
	double Vector::yval()const
	{
		return y;
	}
	void Vector::reset(double n1, double n2)
	{
		x = n1;
		y = n2;
	}
	double Vector::magval()const
	{
		return sqrt(x*x+y*y);
	}
	double Vector::angval()const
	{
		double v = 0;
		v = atan2(y, x);
		if (x == 0)
			v = 0;
		return v;
	}
	Vector Vector::operator+(const Vector &b)const
	{
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator-(const Vector &b)const
	{
		return Vector(x - b.x, y - b.y);
	}
	Vector Vector::operator-()const
	{
		return Vector(-x, -y);
	}
	Vector Vector::operator*(double n)const
	{
		return Vector(x*n, y*n);
	}
	Vector operator*(double n, const Vector &a)
	{
		return (a*n);
	}
	std::ostream & operator<<(std::ostream &os, const Vector &v)
	{
		os << "(x,y) = (" << v.x << ", " << v.y << ")";
		return os;
	}
}
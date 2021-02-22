#include<cstdlib>
#include"vector.h"
#include<iostream>
#include<cmath>
namespace VECTOR
{
	const double Rad_to_deg = 45.0 / atan(1.0);
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}
	void Vector::set_mag()
	{
		mag = sqrt(x*x+y*y);
	}
	void Vector::set_ang()
	{
		if (x == 0.0)
		{
			ang = 0.0;
		}
		else
		ang = atan2(y, x);
	}
	Vector::Vector()
	{
		x = y = mag = ang = 0.0;
		form = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form)
	{
		if (form == RECT)
		{
			x = n1; y = n2;
			set_mag();
			set_ang();
		}
		else
		{
			mag = n1; ang = n2/Rad_to_deg;
			set_x();
			set_y();
		}
	}
	void Vector::reset(double n1, double n2, Mode form)
	{
		if (form == RECT)
		{
			x = n1; y = n2;
			set_mag();
			set_ang();
		}
		else
		{
			mag = n1; ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
	}
	Vector Vector::operator+(const Vector & b)const
	{
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator-(const Vector & b)const
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
	Vector operator*(double n, const Vector & b)
	{
		return b * n;
	}
	std::ostream & operator<<(std::ostream & os, const Vector & b)
	{
		if (b.form == Vector::RECT)//这里（友元函数）RECT不默认属于类作用域
		{
			os << "(x,y)=(" <<b.x << "," << b.y << ")";
		}
		else if (b.form == Vector::POL)
		{
			os << "(m,a) = (" << b.mag << "," << b.ang*Rad_to_deg << ")";
		}
		else
			os << "Vector object mode is invalid";
		return os;
	}
}
#include"vector.h"
#include<cmath>
namespace VECTOR {
	const double Rad_to_deg = 45.0 / atan(1.0);//atan(1.0)设置tan=1.0时的度数，45/tan为tan1.0°倒数.
	void Vector::set_mag()
	{
		mag = sqrt(x*x + y * y);
	}
	void Vector::set_ang()
	{
		if (x == 0.0&&y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}
	Vector::Vector() 
	{
		x = 0.0;y=0.0;
		mag = 0.0; ang=0.0;
		mode = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (mode = RECT)
		{
			x = n1; y = n2;
			set_mag();
			set_ang();
		}
		else
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
	}

	void Vector::reset(double n1, double n2, Mode form )
	{
		mode = form;
		if (mode = RECT)
		{
			x = n1; y = n2;
			set_mag();
			set_ang();
		}
		else
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
	}
	Vector::~Vector(){}
	void Vector::polar_mode() 
	{
		mode = POL;
	}
	void Vector::rect_mode()
	{
		mode = RECT;
	}
	Vector Vector::operator+(const Vector &b) const
	{
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator-(const Vector &b) const
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
	
	Vector operator*(double n, const Vector &b)
	{
		return (b*n);
	}
	std::ostream& operator<<(std::ostream &os, const Vector &v)
	{
		if (v.mode == Vector::RECT)//这里（友元函数）RECT不默认属于类作用域
		{
			os << "(x,y)=(" << v.x << "," << v.y << ")";
		}
		else if (v.mode == Vector::POL)
		{
			os << "(m,a) = (" << v.mag << "," << v.ang*Rad_to_deg << ")";
		}
		else
			os << "Vector object mode is invalid";
		return os;
	 }

}
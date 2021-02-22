#pragma once
#ifndef _VECTOR_H
#define _VECTOR_H
#include<iostream>
namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode{RECT,POL};
	private:
		double x;
		double y;
		double mag;
		double ang;
		Mode form;
		void set_x();
		void set_y();
		void set_mag();
		void set_ang();
	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		~Vector(){}
		void reset(double n1, double n2, Mode form = RECT);
		double xval() { return x; }
		double yval() { return y; }
		double magval() { return mag; }
		double angval() { return ang; }
		void polar_mode() { form = POL; }
		void rect_mode() { form = RECT; }
		Vector operator+(const Vector & b)const;
		Vector operator-(const Vector & b)const;
		Vector operator-()const;
		Vector operator*(double n)const;
		friend Vector operator*(double n, const Vector & b);
		friend std::ostream & operator<<(std::ostream & os, const Vector & b);
	};
}
#endif // !_VECTOR_H

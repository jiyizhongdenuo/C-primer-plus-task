#pragma once
#ifndef VECTOR_H_
#define VECTOR_H_
#include<iostream>
namespace VECTOR {
	class Vector
	{
	public:
		enum Mode{ RECT,POL };
	private:
		double x;
		double y;
		void set_y();
		void set_x();
	public:
		Vector();
		Vector(double n1, double n2);
		~Vector(){}
		double xval()const;
		double yval()const;
		void reset(double n1, double n2);
		double magval()const;
		double angval()const;
		Vector operator+(const Vector &b)const;
		Vector operator-(const Vector &b)const;
		Vector operator-()const;
		Vector operator*(double n)const;
		friend Vector operator*(double n, const Vector &a);
		friend std::ostream & operator<<(std::ostream &os, const Vector &v);
	};
}
#endif // !VECTOR_H_

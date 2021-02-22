#include"10-6.h"
#include<iostream>
using std::cout;
using std::cin;
Move::Move(double a , double b )
{
	x = a;
	y = b;
}
void Move::showmove()const
{
	cout << "x = " << x << std::endl << "y = " << y << std::endl;
}
Move Move::add(const Move &m) const 
{
	Move temp;
	temp.x = m.x+x;
	temp.y = m.y+y;
	return temp;
}
void Move::reset(double a , double b) 
{
	x = a;
	y = b;
}
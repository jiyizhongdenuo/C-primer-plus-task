#include<iostream>
#include"stonewt.h"
using std::endl;
Stonewt::Stonewt(double lbs, Mode form)
{
	stone = int(lbs) / Lbs_;
	pds_left = int(lbs) % Lbs_ + lbs - int(lbs);
	pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_ + lbs;
}
Stonewt::Stonewt()
{
	stone = pds_left = pounds = 0;
	form = one;
}
Stonewt Stonewt::operator+(const Stonewt & s)const
{
	return Stonewt(pounds + s.pounds);
}
Stonewt Stonewt::operator-(const Stonewt & s)const
{
	return Stonewt(pounds - s.pounds);
}
Stonewt Stonewt::operator*(double n)const
{
	return Stonewt(pounds*n);
}
Stonewt operator*(double n, Stonewt &s)
{
	return s * n;
}
std::ostream & operator<<(std::ostream & os, Stonewt & s)
{
	if (s.form == Stonewt::one)//友元函数并不认识Mode里的值，不少函数调用所以并没有form识别
	{
		os << "The stone : " << s.stone << endl;
	}
	else if (s.form == Stonewt::two)
	{
		os << "The pds_left is :" << s.pds_left << endl;
	}
	else
	{
		os << "The pounds is : " << s.pounds << endl;
	}
	return os;
}
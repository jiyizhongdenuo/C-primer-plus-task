#pragma once
#ifndef _STONEWT_H
#define _STONEWT_H
#include<iostream>
class Stonewt
{
private:
	enum { Lbs_ = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt() {}
	bool operator<(Stonewt & s)const;
	bool operator>(Stonewt & s)const;
	bool operator==(Stonewt & s)const;
	bool operator<=(Stonewt & s)const;
	bool operator>=(Stonewt & s)const;
	bool operator!=(Stonewt & s)const;
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};
#endif // !_STONEWT_H
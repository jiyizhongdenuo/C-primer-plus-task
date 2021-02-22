#pragma once
#ifndef _STONEWT_H
#define _STONEWT_H
#include<iostream>
class Stonewt
{
private:
	enum {Lbs_=14};
	enum Mode{one,two,three};
	int stone;
	double pds_left;
	double pounds;
	Mode form;
public:
	Stonewt(double lbs, Mode form=one);
	Stonewt(int stn, double lbs,Mode form=one);
	Stonewt();
	~Stonewt() {}
	void Mode_one() { form = one; }
	void Mode_two() { form = two; }
	void Mode_three() { form = three; }
	Stonewt operator+(const Stonewt & s)const;
	Stonewt operator-(const Stonewt & s)const;
	Stonewt operator*(double n)const;
	friend Stonewt operator*(double n, Stonewt &s);
	friend std::ostream & operator<<(std::ostream & os, Stonewt & s);
};
#endif // !_STONEWT_H

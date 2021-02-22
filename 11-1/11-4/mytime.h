#pragma once
#ifndef _MYTIME
#define _MYTIME
#include<iostream>
class Time
{
private:
	int   hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void Addmin(int m);
	void Addhr(int h);
	void reset(int h = 0, int m = 0);
	friend Time operator+(const Time & t1, const Time & t2);
	friend Time operator-(const Time & t1, const Time & t2);
	friend Time operator*(double n,const Time & t);
	friend std::ostream & operator<<(std::ostream &os, const Time &t);
};
#endif // !_MYTIME

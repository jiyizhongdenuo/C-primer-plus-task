#include"mytime.h"
Time::Time()
{
	hours = minutes = 0;
}
Time::Time(int h, int m )
{
	hours = h;
	minutes = m;
}
void Time::Addmin(int m)
{
	minutes += m;
	hours = minutes / 60;
	minutes %= 60;
}
void Time::Addhr(int h)
{
	hours += h;
}
void Time::reset(int h, int m )
{
	hours = h;
	minutes = m;
}
Time operator+(const Time & t1, const Time & t2)
{
	Time temp;
	temp.minutes = t1.minutes + t2.minutes;
	temp.hours = t1.hours + t2.hours + temp.minutes / 60;
	temp.minutes %= temp.minutes;
	return temp;
 }
Time operator-(const Time & t1, const Time & t2)
{
	int tempminutes;
	Time temp;
	tempminutes = t1.hours * 60 + t1.minutes - t2.minutes - t2.hours * 60;
	temp.minutes = tempminutes % 60;
	temp.hours = tempminutes / 60;
	return temp;
 }
Time operator*(double n, const Time & t)
{
	int tempminutes;
	Time temp;
	tempminutes = (t.hours * 60 + t.minutes)*n;
	temp.minutes = tempminutes % 60;
	temp.hours = tempminutes / 60;
	return temp;
 }
std::ostream & operator<<(std::ostream & os, const Time &t)//os 返回值需要使用引用
{
	os << t.hours << " hours, " << t.minutes << " minutess";
	return os;
}
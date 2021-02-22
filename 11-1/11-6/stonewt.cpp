#include<iostream>
#include"stonewt.h"
using std::endl;
Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_;
	pds_left = int(lbs) % Lbs_ + lbs - int(lbs);
	pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_ + lbs;
}
Stonewt::Stonewt()
{
	stone = pds_left = pounds = 0;
}
bool Stonewt::operator<(Stonewt & s)const
{
	if (pounds < s.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator>(Stonewt & s)const
{
	if (pounds > s.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator==(Stonewt & s)const
{
	if (pounds == s.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator<=(Stonewt & s)const
{
	if (pounds <= s.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator>=(Stonewt & s)const
{
	if (pounds >= s.pounds )
		return true;
	else
		return false;
}
bool Stonewt::operator!=(Stonewt & s)const
{
	if ( pounds != s.pounds)
		return true;
	else
		return false;
}
std::ostream & operator<<(std::ostream & os, const Stonewt &st)
{
	os << st.pounds << " pounds\n";
	return os;
}
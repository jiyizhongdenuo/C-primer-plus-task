#include<iostream>
using namespace std;
int main(void)
{
	long long seconds;
	int day, hours, minutes, second;
	cout << "Enter the number of seconds:";
	cin >> seconds;
	day = seconds / 3600 / 24;
	hours = (seconds-day*3600*24)/3600;
	second = seconds % 60;
	minutes = (seconds-day*3600*24-hours*3600)/60;
	cout << seconds << "seconds=" << day << "days, " << hours << "hours, " << minutes << "minutes, " << second << "seconds";
	return 0;
}
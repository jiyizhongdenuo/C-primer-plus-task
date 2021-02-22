#include<iostream>
using namespace std;
double _inch(double);
int main(void)
{
	double foot;
	cout << "Enter your foot______\b\b\b\b\b\b;";
	cin >> foot;
	cout << "your inch is_____\b\b\b\b\b" << _inch(foot);
	return 0;
}
double _inch(double n)
{
	return 12 * n;
}
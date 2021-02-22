#include<iostream>
double bmi(double, double);
double height(double);
int main(void)
{
	using namespace std;
	double inch, height1;
	cout << "Enter your inch___\b\b\b ";
	cin >> inch;
	height1=height(inch);
	double weight;
	cout << "Enter your weight___\b\b\b";
	cin >> weight;
	cout<<bmi(height1, weight);
	return 0;
}
double height(double n)
{
	const double mi = 0.0254;
	return mi * n;
}
double bmi(double he, double we)
{
	return we / (he*he);
}

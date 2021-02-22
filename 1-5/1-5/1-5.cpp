#include<iostream>
double degrees(double);
int main(void)
{
	using namespace std;
	double v;
	cout << "Please enter aCelsius value:";
	cin >> v;
	cout<<v<<" degrees Celsius is "<<degrees(v)<<" degrees Fahreheit.";
	return 0;

}
double degrees(double n)
{
	return n * 1.8 + 32.0;
}
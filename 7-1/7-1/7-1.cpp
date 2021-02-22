#include<iostream>
double aver(double, double);
int main()
{
	using namespace std;
	double v1, v2;
	cout << "Enter two number:";
	while (cin >> v1 >> v2 && v1 != 0 && v2 != 0)
		cout << "the aver is:" << aver(v1, v2)<< endl;
	return 0;
}
double aver(double v1, double v2)
{
	double v3;
	v3 = 2 * v1*v2 / (v1 + v2);
	return v3;
}
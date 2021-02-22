#include<iostream>
int main(void)
{
	using namespace std;
	const char* month[12] = { "January","February","March","April","May","June","July","August","Sept ember","October","November","December" };
	const int Month = 12;
	double sales;
	double sum = 0;
	for (int i = 0; i < Month; i++)
	{
		cout << month[i]<<" sales is :";//string 数组无法输出.
		cin >> sales;
		sum += sales;
	}
	cout<< sum;
	return 0;
}
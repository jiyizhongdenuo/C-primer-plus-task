#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
template<class T>
int reduce(T *ar, int n);
template<class T>
void show(T *ar, int xy);
const int NU = 6;
int main()
{
	double temp[NU] = { 15.0,21.52,33.00,20.5,30.1,15.0 };
	int ax = reduce(temp, NU);
	show(temp, ax );
	string st[NU] = { "ad","ac","af","ad","ab","ag" };
	int az = reduce(st, NU);
	show(st, az);
	return 0;
}
template<class T>
int reduce(T *ar, int n)
{
	T *temp;
	sort(ar, ar + n);
	temp=unique(ar, ar + n);
	return (temp - ar);
}
template<class T>
void show(T *ar, int xy)
{
	for (int i = 0; i < xy; i++)
		std::cout << ar[i] << " ";
	std::cout << std::endl;
}
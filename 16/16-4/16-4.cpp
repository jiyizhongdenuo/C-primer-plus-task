#include <iostream>
#include<vector>
#include<algorithm>
int reduce(double *ar, int n);
void show(double *ar,int y);
const int NU = 6;
int main()
{
	using namespace std;
	double temp[NU] = { 15.0,21.52,33.00,20.5,30.1,15.0 };
	int ax=reduce(temp, NU);
	show(temp, ax+1);//返回的是ar个数，不过xy输入4则i就到3.
	return 0;
}
int reduce(double * ar, int n)
{
	std::sort(ar,ar+n);
	std::unique(ar, ar + n);
	return sizeof(ar);
}
void show(double *ar, int xy)
{
	for (int i = 0; i < xy; i++)
		std::cout << ar[i] << " ";
	std::cout << std::endl;
}
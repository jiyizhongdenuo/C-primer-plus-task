#include<iostream>
int main(void)
{
	using namespace std;
	const char* month[12] = { "January","February","March","April","May","June","July","August","Sept ember","October","November","December" };
	const int Month = 12;
	const char*years[3] = { "the first year","the second year","The third year" };
	double sales[3][Month];
	double Tsum = 0;
	double sum[3];
	sum[1] = sum[2] = sum[0] = 0;//sum值必须初始化，否则会在sum存储位置上的值加减出错误的值
	for (int y = 0; y <3; y++)
	{
		for (int i = 0; i < Month; i++)
		{
			cout << years[y]<<"\t"<< month[i] << " sales is :";
			cin >> sales[y][i];
			sum[y] += sales[y][i];
		}
	}
	for (int y = 0; y < 3; y++)
	{
		cout << years[y]<<"'sum is:";
		cout << sum[y]<<endl;
		Tsum += sum[y];
	}
	cout << Tsum;
	return 0;
}
#include<iostream>
#include"10-4.h"
SALES::Sales::Sales()
	{
		for (int i = 0;  i < QUARTERS; i++)
		{
			sales[i] = 0;
		}
		average = 0;
		max = min =0;
	}
SALES::Sales::Sales(const double *ar, int n)
{
	double total = 0;
	int temp;
	for (int i = 0; i < n && i < QUARTERS; i++)
	{
		sales[i] = ar[i];
		total += ar[i];
		temp = i;
	}
	temp++;//temp设置同一个数会是下面一个设置为0
	for (; temp < QUARTERS; temp++)
	{
		sales[temp] = 0;
	}
	average = total / n;
	max = min = sales[0];
	for (int i = 0; i < n && i < QUARTERS; i++)
	{
		if (max < sales[i])
			max = sales[i];
	}
	for (int i = 0; i < n && i < QUARTERS; i++)
	{
		if (min > sales[i])
			min = sales[i];
	}
}
void SALES::Sales::showSales()const
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "The " << i << " sale is " << sales[i] << endl;
		}
		cout << "average is " << average << endl;
		cout << "The max is " << max << " The min is " << min << endl;
	}
void SALES::Sales::setSales()
{
	double total = 0;
	cout << "Enter the values:";
	cin >> sales[0];
	total = sales[0];
	for (int i = 1; i < QUARTERS; i++)
	{
		cout << "Enter next values:";
		cin >> sales[i];
		total += sales[i];
	}
	average = total / QUARTERS;
	max = min =sales[0];
	for (int i = 0; i < QUARTERS; i++)
	{
		if (max < sales[i])
			max = sales[i];
	}
	for (int i = 0; i < QUARTERS; i++)
	{
		if (min > sales[i])
			min = sales[i];
	}
}

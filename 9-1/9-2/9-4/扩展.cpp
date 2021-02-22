#include"9-4.h"
namespace SALES
{
	void setSales(Sales &s, const double ar[], int n)
	{
		double total = 0;
		for (int i = 0; i < n; i++)
		{
			s.sales[i] = ar[i];
			total += ar[i];
		}
		s.average = total / n;
		s.max = s.min = ar[0];
		for (int i = 0; i < n; i++)
		{
			if (s.max < s.sales[i])
				s.max = s.sales[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (s.min > s.sales[i])
				s.min = s.sales[i];
		}
	}
	void setSales(Sales &s)
	{
		double total = 0;
		cout << "Enter the sales:";
		cin >> s.sales[0];
		for (int i = 1; i < QUARTERS; i++)
		{
			cout << "Enter next sales:";
			cin >> s.sales[i];
			total += s.sales[i];
		}
		s.average = (total + s.sales[0]) / QUARTERS;
		s.max = s.min = s.sales[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			if (s.max < s.sales[i])
				s.max = s.sales[i];
		}
		for (int i = 0; i < QUARTERS; i++)
		{
			if (s.min > s.sales[i])
				s.min = s.sales[i];
		}
	}
	void showSales(const Sales &s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "The " << i << " sales is: " << s.sales[i] << endl;
		}
		cout << "The sales'average is: " << s.average << endl;
		cout << "The sales'max is : " << s.max << endl;
		cout << "The sales'min is : " << s.min << endl;
	}
}
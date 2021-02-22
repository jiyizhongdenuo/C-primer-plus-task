#include<iostream>
#include"9-4.h"
namespace SALES {
	void setSales(Sales&s, const double *ar, int n)
	{
		double total=0;
		int i = 0;
		for (; i < n && i < QUARTERS; i++) 
		{
			s.sales[i] = ar[i];
			total += ar[i];
		}
		if(n<QUARTERS)
		{
			for (;n != QUARTERS;i++)
			{
				s.sales[i] = 0;
		} }
		s.average = total / n;
		s.max=s.min= s.sales[0];
		for (int i = 0; i < n && i < QUARTERS; i++)
		{
			if (s.max < s.sales[i])
				s.max = s.sales[i];
		}
		for (int i = 0; i < n && i < QUARTERS; i++)
		{
			if (s.min > s.sales[i])
				s.min = s.sales[i];
		}
	}
	void setSales(Sales&s)
	{
		double total=0;
		cout << "Enter the values:";
		cin >> s.sales[0];
		total = s.sales[0];
		for (int i = 1;  i < QUARTERS; i++)
		{
			cout << "Enter next values:";
			cin>>s.sales[i] ;
			total += s.sales[i];
		}
		s.average = total / QUARTERS;
		s.max = s.min = s.sales[0];
		for (int i = 0;  i < QUARTERS; i++)
		{
			if (s.max < s.sales[i])
				s.max = s.sales[i];
		}
		for (int i = 0;  i < QUARTERS; i++)
		{
			if (s.min > s.sales[i])
				s.min = s.sales[i];
		}
	}
	void showSales(const Sales&s)
	{
		for (int i = 0;  i < QUARTERS; i++)
		{
			cout << "The " << i << " sale is " << s.sales[i] << endl;
		}
		cout << "average is " << s.average << endl;
		cout << "The max is " << s.max << " The min is " << s.min << endl;
	}
}


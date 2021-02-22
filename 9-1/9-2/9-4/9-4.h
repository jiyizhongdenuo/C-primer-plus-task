#pragma once
#include<iostream>
namespace SALES {
	const int QUARTERS = 4;
	struct Sales {
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	using namespace std;
	void setSales(Sales &s, const double ar[], int n);
	void setSales(Sales &s);
	void showSales(const Sales &s);
	
}

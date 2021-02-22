#include"9-4.h"
using namespace SALES;
int main()
{
	Sales sa, le;
	double ar[QUARTERS] =
	{ 3.0,
		1.0,
		4.0,
		2.0
	};
	setSales(sa, ar, 3);
	showSales(sa);
	setSales(le);
	showSales(le);
	return 0;
}
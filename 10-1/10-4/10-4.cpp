#include"10-4.h"
using namespace SALES;
int main()
{
	double ar[QUARTERS] =
	{ 3.0,
		1.0,
		10.0,
		2.0
	};
	Sales sa=Sales(ar,sizeof(ar)/sizeof(ar[0]));
	sa.showSales();
	Sales le;
	le.setSales();
	le.showSales();
	return 0;
}
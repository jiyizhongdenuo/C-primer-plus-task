//#include <iostream>
#include"9-4.h"
using namespace SALES;//函数的声明和定义不能分开（要不都在名称空间中，要不都在文件中）；项目中多次包含同一个头文件（头文件包含项目的另一个库头文件，）会忽视重复的头文件。
int main()
{
	Sales sa,le;
	double zx[QUARTERS] = { 10,11,9,13 };
	setSales(sa, zx, QUARTERS);
	showSales(sa);
	setSales(le);
	showSales(le);
	return 0;
}

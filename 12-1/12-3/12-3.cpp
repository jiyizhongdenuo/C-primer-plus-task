#include <iostream>
#include"stock.h"
int main()
{
	using std::cout;
	cout << "Using constructors to creat new objects\n";
	Stock stock1("Nanosmart", 2, 2.0);
	cout << stock1;
	return 0;
}
#include <iostream>
double add(double x, double y);
double calculate(double x, double y, double(*pt)(double x, double y));
int main()
{
	double dou, x, y;
	std::cout << "Enter two value : ";
	while (std::cin >> x>>y)
	{
		dou = calculate(x, y, add);
		std::cout << "dou is : " << dou;
		std::cout << "\nNext two value(q to quit: ";
	}
	return 0;
}
double add(double x, double y)
{
	return x + y;
}
double calculate(double x, double y, double(*pt)(double zx, double zy))
{
	double temp;
	temp = (*pt)( x,  y);
	return temp;
}

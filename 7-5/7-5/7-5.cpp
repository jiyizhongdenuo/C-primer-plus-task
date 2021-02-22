#include <iostream>
long double Factorial(long);
int main()
{
	using namespace std;
	double number;
	cout << "Enter the number of factorial:";
	while ((cin >> number) && number > 0)
	{
		cout << "the factorial is :";
		cout << Factorial(number);
		cout << "\nEnter the next number of factorial:";
	}
	cout << "bye.";
	return 0;
}
long double Factorial(long num)
{
	long double factorial=1;
	for (; num > 0; num--)
	{
		factorial *= num;
	}
	return factorial;
}


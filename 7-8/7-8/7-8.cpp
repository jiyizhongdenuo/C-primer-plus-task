#include <iostream>
#include<string>
const int seasons = 4;
const char * Snames[seasons] = { "spring","summer","fall","winter" };
void fill( double *);
void show(const double *);
int main()
{
	double expenses[seasons];
	fill(expenses);
	show(expenses);
	return 0;
}
void fill(double *pa)
{
	using namespace std;
	for (int i = 0; i < seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pa[i];
	}
}
void show(const double *pa)//缺少const
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < seasons; i++)
	{
		cout << Snames[i] << ": $" << pa[i] << endl;
		total += pa[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
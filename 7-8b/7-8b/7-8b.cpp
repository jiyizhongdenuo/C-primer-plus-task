#include <iostream>
#include<string>
const int seasons = 4;
struct ex {
	double expenses[seasons];
};
const char * Snames[seasons] = { "spring","summer","fall","winter" };
void fill(ex *);
void show(const ex *);
int main()
{
	ex expense;
	fill(&expense);
	show(&expense);
	return 0;
}
void fill(ex *pa)
{
	using namespace std;
	for (int i = 0; i < seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pa->expenses[i];
	}
}
void show(const ex * pa)//缺少const
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < seasons; i++)
	{
		cout << Snames[i] << ": $" << pa->expenses[i] << endl;
		total += pa->expenses[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
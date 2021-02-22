#include<iostream>
long double probability(unsigned numbers, unsigned picks, unsigned x);
int main()
{
	using namespace std;
	double total, choices, especially;
	cout << "Enter the total number of choices on the game cadrd and\n"
		"the number of picks allowed:";
	while ((cin >> total >> choices>> especially) && total > choices&&especially>0)
	{
		cout << "you have one chance in ";
		cout << probability(total, choices, especially);
		cout << " of winning\n"<< "Next two numbers(q to quit:";
	}
	cout << "done";
	return 0;
}
long double probability(unsigned numbers, unsigned picks,  unsigned x)
{
	long double result = 1.0;
	for (int n = 0; picks>0; n++,numbers--,picks--)
	{
		result *= numbers / picks;
	}
	result *= x;
	return result;
}
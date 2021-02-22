#include<iostream>
#define b 1000
#define c 4000
int main()
{
	using namespace std;
	int income;
	cout << "Enter your income:";
	cin >> income;
	if (income < 5000)
		cout << "The texes is:0" << endl;
	else if (income > 5000 && income < 15000)
		cout << "The texes is:" << (income - 5000)*0.1;
	else if (income > 15000 && income < 35000)
		cout << "The texes is:" << b + (income - 15000)*0.15;
	else
		cout << "The texes is:" << c + (income - 35000)*0.2;
	return 0;
}
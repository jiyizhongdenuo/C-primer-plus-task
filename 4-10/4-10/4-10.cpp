#include<iostream>
#include<array>
int main(void)
{
	using namespace std;
	array<double, 3>scord;
	cin >> scord[0] >> scord[1] >> scord[2];
	cout << scord[0] << endl << scord[1] << endl << scord[2];
	return 0;
}
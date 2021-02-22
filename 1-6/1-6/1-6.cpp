#include<iostream>
void print(int, int);
int main(void)
{
	using namespace std;
	int hours, minutes;
	cout << "Enter the number of hours:";
	cin >> hours;
	cout<< "Enter the numebr of minutes:";
	cin >> minutes;
	print(hours, minutes);
	return 0;
}
void print(int h, int m)
{
	std::cout << "Timess: " << h << ":" << m;
}
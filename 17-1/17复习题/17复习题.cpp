#include <iostream>
#include<iomanip>
int main()
{
	using std::cout;
	using std::cin;
	char name[20];
	int wages;
	double wtime;
	cout << "Enter your name: ";
	cin.get(name, 20);
	char ch;
	while (cin.peek() != '\n')
		cin.ignore(100, '\n');
	cout << "Enter your hourly wages: ";
	cin >> wages;
	while (cin.get() != '\n')
		continue;
	cout << "Enter number of hours worked: ";
	cin >> wtime;
	while (cin.get() != '\n')
		continue;
	cout << "First format: \n";
	cout << std::setw(30) << "Billy Gruff: " << "$" << std::setw(10) << wages << ": " << wtime << std::endl;
	cout << "Second format:\n";
	cout.setf(std::ios_base::left, std::ios_base::adjustfield);
	cout<<std::setw(30)<< "Billy Gruff: " << "$" << std::setw(10) << wages << ": " << wtime;
	cout.unsetf(0, std::ios_base::adjustfield);
	return 0;
}


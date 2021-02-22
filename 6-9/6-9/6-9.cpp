#include<fstream>
#include<iostream>
#include<cstring>
#include <cstdlib>
int main()
{
	using namespace std;
	ifstream infile;
	infile.open("61.txt");
	struct donations {
		char name[20];
		double money;
	};
	int numb;
	if(!infile.is_open())
	{
		cout << "Could not open the file-61.txt"  << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	infile >> numb;
	infile.get();
	donations * donation = new donations[numb];//if 内创建的变量在if外无效.
	int ab = 0, cd = 0;
	for (int num = 0; num < numb; num++)
	{
		infile.getline(donation[num].name, 20);//infile.getline()不能应用于string的数组 没有重载于string数组
		(infile >> donation[num].money).get();//不小心采用了cin
	}
	cout << "Grand Patrons has :" << endl;
	for (int n = 0; n < numb; n++)
	{
		if (donation[n].money > 10000)
		{
			cout << donation[n].name << "\t\t\t\t\t" << donation[n].money << endl;
			ab++;
		}
	}
	if (ab == 0)
		cout << "Grand Patrons is none." << endl;
	cout << "Patrons has :" << endl;
	for (int n = 0; n < numb; n++)
	{
		if (donation[n].money <= 10000)
		{
			cout << donation[n].name << "\t\t\t\t\t" << donation[n].money << endl;
			cd++;
		}
	}
	if (cd == 0)
		cout << "Patrons is none." << endl;
	return 0;
}
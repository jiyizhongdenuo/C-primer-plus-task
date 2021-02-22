#include<iostream>
#include<string>
int  main()
{
	using namespace std;
	struct donations {
		string name;
		double money;
	};
	cout << "Enter number of patron:";
	int numb;
	cin >> numb;
	cin.get();//需要
	donations * donation = new donations[numb];
	int ab=0, cd=0;
	for (int num=0; num < numb; num++)
	{
		cout << "Enter the patron's name:";
		getline(cin, donation[num].name);//getline读取输入中的回车，并且不会放入字符串中。
		cout << "Enter the patron's money:";
		(cin >> donation[num].money).get();
	}
	cout << "Grand Patrons has :" << endl;//逻辑上应先计算有没有人是GRAND
	for (int n=0; n < numb; n++)
	{
		if (donation[n].money > 10000)
		{
			cout << donation[n].name << "\t\t\t\t\t" << donation[n].money << endl;
			ab++;
		}
	}
	if (ab == 0)
		cout << "Grand Patrons is none."<<endl;
	cout << "Patrons has :" << endl;
	for (int n=0; n < numb; n++)
	{
		if (donation[n].money <= 10000)
		{
			cout << donation[n].name << "\t\t\t\t\t" << donation[n].money << endl;
			cd++;
		}
	}
	if(cd==0)
		cout<< "Patrons is none." << endl;
	return 0;
}
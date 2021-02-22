#include<iostream>
#include<string>
int main()
{
	using namespace std;
	struct bop {
		string fullname;
		string title;
		string bopname;
		int preference;
	};
	bop * bops = new bop[5];
	bops[0] = {"wimp machoo","manager","wimm",0};//字符串为地址赋值
	bops[1] = {"Raki rhodes","junior programmer","raki",1};
	bops[2] = {"celia laiter","layer","mips",2};
	bops[3] = {"hoppy hipman","analyst trainee","hoppy",1};
	bops[4] = {"pat hand","secretary","loopy",};
	cout << "Benevolent Order of programmers report\n";
	cout << "a. display by name      b.display by title\n";
	cout << "c. display by bopname   d.display by preference ";
	cout << "q. quit" << endl;
	char ch;
	while ( cin >> ch &&ch!='q')
	{
		switch (ch)
		{
		case 'a':
		case'A':
			for (int n = 0; n < 5; n++)
				cout << bops[n].fullname<<endl;
			break;
		case'b':
			for (int n = 0; n < 5; n++)
				cout << bops[n].title<<endl;
			break;
		case'c':
			for (int n = 0; n < 5; n++)
				cout << bops[n].bopname<<endl;
			break;
		case'd':
			for (int n = 0; n < 5; n++)
			{
				if (bops[n].preference == 0)
					cout << bops[n].fullname<<endl;
				else if (bops[n].preference == 1)
					cout << bops[n].title<<endl;
				else
					cout << bops[n].bopname<<endl;
			}
			break;
		default:break;
		}
		cout << "Next choic:";
	}
	cout << "Bye";
	delete bops;
	return 0;
}
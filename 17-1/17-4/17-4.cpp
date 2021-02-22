#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string>
int main()
{
	using namespace std;
	ofstream fout;
	ifstream fin;
	ifstream ffin;
	string temp;
	fin.open("first.txt");
	ffin.open("second.txt");
	fout.open("tirth.txt");
	if (!fout.is_open() && !ffin.is_open() && !fin.is_open())
	{
		cerr << "file not's open.";
		exit(EXIT_FAILURE);
	}
	while (!fin.eof() || !ffin.eof())
	{
		if (fin.eof())
		{
			getline(ffin, temp);
			fout << temp << endl;
		}
		else if (ffin.eof())
		{
			getline(fin, temp);
			fout << temp;
		}
		else
		{
			getline(fin, temp);
			fout << temp<<" ";
			getline(ffin, temp);
			fout << temp;
		}
		cout << endl;
	}
	cout << "done!";
	return 0;
}

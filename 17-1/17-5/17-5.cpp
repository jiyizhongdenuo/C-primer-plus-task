#include <iostream>
#include<fstream>
#include<set>
#include<vector>
#include<algorithm>
#include<iterator>
#include<string>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	std::ofstream fout("mat.dat");
	std::set<std::string>mat;
	std::set<std::string>pat;
	std::ifstream fin;
	std::string temp;
	std::cout << "Enter Mat's guest list (empty line to quit):\n";
	getline(std::cin, temp);
	while (temp != "quit")
	{
		mat.insert(temp);
		std::cout << "Enter next Mat's guest (empty line to quit):\n";
		getline(std::cin, temp);
	}
	while (cin.get() != '\n')
		continue;
	std::cout << "Enter Pat's guest list (empty line to quit):\n";
	getline(std::cin, temp);
	while (temp != "quit")
	{
		pat.insert(temp);
		cout << "Enter next Pat's guest (empty line to quit):\n";
		getline(std::cin, temp);
	}
	std::ostream_iterator<std::string, char>mout(fout, "\n");
	copy(mat.begin(), mat.end(), mout);
	fout.close();
	fout.open("pat.dat");
	std::ostream_iterator<std::string, char>pout(fout, "\n");
	copy(pat.begin(), pat.end(), pout);//set容器没有push_back()函数，用insert。set容器使用健也不需要使用sort()函数。
	return 0;
}

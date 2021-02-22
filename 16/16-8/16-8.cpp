#include <iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<string>
#include<iterator>
void show(const std::string & st) { std::cout << st << " "; }
int main()
{
	using namespace std;
	set<string>Mat;
	set<string>Pat;
	string temp;
	cout << "Enter Mat's guest list (empty line to quit):\n";
	getline(cin, temp);
	while (temp != "quit")
	{
		Mat.insert(temp);
		cout << "Enter next Mat's guest (empty line to quit):\n";
		getline(cin, temp);
	}
	for_each(Mat.begin(), Mat.end(), show);
	cout << endl;
	cout << "Enter Pat's guest list (empty line to quit):\n";
	getline(cin, temp);
	while (temp != "quit")
	{
		Pat.insert(temp);
		cout << "Enter next Pat's guest (empty line to quit):\n";
		getline(cin, temp);
	}
	for_each(Pat.begin(), Pat.end(), show);
	cout << endl;
	set<string>MaP;
	insert_iterator<set<string> >MAP(MaP, MaP.begin());
	ostream_iterator<string, char>out(cout, "\n");
	set_union(Mat.begin(), Mat.end(), Pat.begin(), Pat.end(), MAP);
	copy(MaP.begin(), MaP.end(), out);
	return 0;
}

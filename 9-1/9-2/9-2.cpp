#include <iostream>
#include<string>
void strcout(const std::string & st);
int main()
{
	using namespace std;
	string input;
	string next;
	string emtpy = "";
	cout << "Enter a line :";
	getline(cin, input);
	while (cin)
	{
		strcout(input);
		cout << "Enter next line (empty line to quit): ";
		getline(cin, input);
		if (input == emtpy)
			break;
	}
	cout << "Bye";
	return 0;
}
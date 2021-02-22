#include <iostream>
#include<string>
#include<cctype>
void toupper(std::string &);
int main()
{
	using namespace std;
	string charater;
	cout << "Enter a string (q to quit: ";
	while (getline(cin, charater) && charater[0] != 'q' &&charater[0] != 'Q')
	{
		toupper(charater);
		cout << endl<<"Enter next string (q to quit: ";
	}
	cout << "bye";
	return 0;
}
void toupper(std::string &cha)
{
	for (int n = 0; n<cha.size(); n++)
	{
		//if (islower(cha[n]))
		cha[n]=toupper(cha[n]);
		
	}
	std::cout << cha;
}
#include<iostream>
int main()
{
	char ch;
	using namespace std;
	(cin.get(ch)).get();
	while (ch != EOF)
	{
		cout << ch + 1 << endl;
		cout << ch++<<endl;
		(cin.get(ch)).get();
	}
	return 0;
}
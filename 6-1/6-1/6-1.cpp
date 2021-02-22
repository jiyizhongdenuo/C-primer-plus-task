#include<iostream>
#include<cctype>
int main()
{
	using namespace std;
	char ch;
	while ((ch = cin.get()) != '@')
	{
		if (isupper(ch)) {
			ch=tolower(ch);
			cout << ch;
		}
		else if (islower(ch)) {
			ch=toupper(ch);
			cout << ch;
		}
	}
	return 0;
}
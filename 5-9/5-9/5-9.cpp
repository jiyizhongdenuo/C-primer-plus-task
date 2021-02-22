#include<iostream>
#include<string>
#define size 20
int main(void)
{
	using namespace std;
	string word;
	int n = 0;
	cout << "Enter words (to stop,type the word done); ";
	cin >> word;
	while (word!="done")
	{
		cin >> word;
		n++;
	}
	cout << "You entered a total of " << n << " words.";
	return 0;
}
#include<iostream>
#include<cstring>
#define size 20
int main(void)
{
	using namespace std;
	char word[size];
	int n=0;//非赋值虚参需先赋值
	cout << "Enter words (to stop,type the word done); ";
    while (strcmp("done",word))
		{
			 cin >> word;
			 n++;
		 }
	cout << "You entered a total of " << n << " words.";
	return 0;
}
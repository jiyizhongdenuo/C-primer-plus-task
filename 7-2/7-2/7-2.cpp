#include<iostream>
#define column 5
#define vertical 2
int main()
{
	using namespace std;
	double score[vertical][column];
	cout << "Enter score :";
	for (int n = 0; n < 2; n++)
	{
		for (int c = 0; c < 5; c++)
		{
			cin >> score[n][c];//cin会输入之后空一行
			if (c == 4)
				break;
			cout << "Enter next score:";
		}
		cout << "next one.\n" << "Enter next score:";
	}
	for (int n = 0; n < 2; n++)
	{
		for (int c = 0; c < 5; c++)
		{
			cout << "next score\n";
			cout << score[n][c];
		}
		cout << "\nnext one.\n" << "next score:";
	}
	return 0;
}
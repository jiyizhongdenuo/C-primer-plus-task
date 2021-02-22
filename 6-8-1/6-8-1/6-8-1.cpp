#include<fstream>
#include<iostream>
#include<cstdlib>
#include<cstring>
int main()
{
	using namespace std;
	ifstream infile;
	infile.open("abcd.txt");
	if (!infile.is_open())
	{
		cout << "Could not open the file.";
		exit(EXIT_FAILURE);
	}
	char sentences[50];
	infile>>sentences;
	cout << sentences << strlen(sentences);
	infile.close();
	return 0;
}
#include<iostream>
#include<fstream>
int main()
{
	using namespace std;
	char sentences[50];
	ofstream outfile;
	outfile.open("abcd.txt");
	outfile << "abcdef.";
	outfile.close();
	return 0;
}
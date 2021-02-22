#include <iostream>
#include<cstdlib>
#include<fstream>
#include<string>
int main(int argc, char *argv[])
{
	using namespace std;
	if (argc == 1)
	{
		cerr << "Usage: " << argv[0] << " filename[s]\n";
		exit(EXIT_FAILURE);
	}
	ofstream fout(argv[1]);
	string temp;
	cout << "Enter something.";
	//cout.flush();
	getline(cin, temp);
	fout << temp << endl;
	return 0;
}

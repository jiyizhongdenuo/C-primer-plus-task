#include <iostream>
#include<string>
#include<cstdlib>
#include<fstream>
int main(int argc, char * argv[])
{
	using namespace std;
	if (argc < 3)
	{
		cerr<<"Usage: " << argv[0] << " filename[s]\n";
		exit(EXIT_FAILURE);
	}
	ofstream fout(argv[2]);
	ifstream fin(argv[1]);
	if (!fin.is_open())
	{
		cerr << "can't open " << argv[1] << " file.";
		exit(EXIT_FAILURE);
	}
	char ch;
	while (fin.get(ch))
		fout << ch;
	cout << "Contents of " << argv[1] << " copied to "
		<< argv[2] << endl;
	fout.close();
	fin.close();
	return 0;
}

#include <iostream>
#include<iomanip>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<string>
#include<algorithm>
void ShowStr(const std::string & str) { std::cout << str << std::endl; }
using vstr = std::vector<std::string>;
std::ifstream & GetStrs(std::ifstream & fin, vstr &vistr);
class Store
{
	char * pi;
	std::ofstream * fout;
public:
	Store(std::ofstream & fout);
	Store(const Store &s);
	bool operator()(const std::string &str);
	char * data(const std::string & str);
	~Store() { delete[] pi; }
};
const int LIMIN(50);
using std::cout;
using std::endl;
int main()
{
	using std::string;
	using std::endl;
	using std::cin;
	using std::cout;
	using std::vector;
	using std::ios;
	vstr vostr;
	string temp;
	cout << "Enter strings (empty line to quit):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Here is your input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);
	std::ofstream fout("strings.dat", ios::out | ios::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));//使用前必须知道Store时函数符，而不是声明的一个Store类。（在之前必须写好Store时一个函数符）main后面定义Store类时不允许的。
	fout.close();

	vstr vistr;
	std::ifstream fin("strings.dat", ios::in | ios::binary);
	if (!fin.is_open())
	{
		std::cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);

	return 0;
}

Store::Store(std::ofstream & fout):fout(&fout)
{
	pi = new char[LIMIN];
}
bool Store::operator()(const std::string &str)
{
	int len = str.length();
	if (fout->is_open())//
	{
		fout->write((char*)&len, sizeof(int));//(char *)len产生越界。
		fout->write(data(str), len);
		return true;
	}
	else
	{
		cout << "fout isn't open.";
		exit(EXIT_FAILURE);
		return false;
	}
	
}
Store::Store(const Store &s)
{
	fout = s.fout;
	pi = new char[LIMIN];
	for (int i = 0; i < strlen(s.pi); i++)
		pi[i] = s.pi[i];
}
char * Store::data(const std::string & str)
{
	for (int i = 0; i < str.length(); i++)
	{
		pi[i] = str[i];
	}
	return pi;
}
std::ifstream & GetStrs(std::ifstream & fin, vstr &vistr)
{
	int len;
	while(fin.read((char*)&len, sizeof(int)))
	{
		char * pd = new char[len];
		fin.read(pd, len);
		vistr.push_back(pd);
		delete[] pd;
	}
	return fin;
}
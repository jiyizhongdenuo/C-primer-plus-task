#include <iostream>
#include<fstream>
#include<algorithm>
#include<string>
#include<iterator>
#include<set>
int main()
{
	using std::cout;
	using std::string;
	using std::cin;
	using std::endl;
	std::set<string>Mat;
	std::set<string>Pat;
	std::ofstream fout("matapat.dat");
	std::ifstream fin("mat.dat");
	string temp;
	while (!fin.eof())//while(getline(fin,temp)){....}代替. 关联容器用insert_iterator<set<string> >(both, both.begin()));迭代器。容器类用back_inserter(pat)在copy()函数中。
	{
		getline(fin, temp);
		Mat.insert(temp);
	}
	fin.close();
	fin.open("pat.dat");
	while (!fin.eof())
	{
		getline(fin, temp);
		Pat.insert(temp);
	}
	std::ostream_iterator<string, char>nout(fout, "\n");
	set_union(Mat.begin(), Mat.end(), Pat.begin(), Pat.end(), nout);//for(auto X:Pat) cout<<X<<endl;
	return 0;
}

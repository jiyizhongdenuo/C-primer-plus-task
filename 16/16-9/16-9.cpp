#include <iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<cstdlib>
#include<ctime>
#include<iterator>
using namespace std;
const int MAX = 100000;
int main()
{
	vector<int>vi0;
	int temp;
	for (int i = 0; i < MAX; i++)
	{
		temp=rand() % 10000;
		vi0.push_back(temp);
	}
	vector<int>vi(vi0.begin(),vi0.end());
	clock_t star = clock();
	sort(vi0.begin(), vi0.end());
	clock_t stime = clock() - star;
	cout << "sort vi0 need time: " << (double)stime/CLOCKS_PER_SEC << endl;
	list<int>li(vi0.begin(), vi0.end());
	star = clock();
	sort(vi.begin(), vi.end());
	stime = clock() - star;
	cout << "sort vi need time: " << (double)stime/CLOCKS_PER_SEC << endl;
	star = clock();
	li.sort();
	stime = clock() - star;
	cout << "sort li need time: " << (double)stime/CLOCKS_PER_SEC << endl;
	li.erase(li.begin(), li.end());
	vi.erase(vi.begin(), vi.end());
	//insert_iterator<list<int> >lit(li, li.begin());
	copy(vi0.begin(), vi0.end(), back_inserter(li));
	star = clock();
	copy(li.begin(), li.end(), back_inserter(vi));
	sort(vi.begin(), vi.end());
	li.erase(li.begin(), li.end());
	copy(vi.begin(), vi.end(), back_inserter(li));
	stime = clock() - star;
	cout << "copy li for vi ,sort vi,copy vi for li need time: " << (double)stime / CLOCKS_PER_SEC << endl;
	return 0;
}
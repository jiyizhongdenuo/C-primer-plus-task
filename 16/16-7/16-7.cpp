#include <iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
typedef std::vector<int> vint;
vint lotto(int v, int n);
void show(int n) { std::cout << n << " ";}
int main()
{
	using namespace std;
	vector<int>winners;
	winners = lotto(51, 6);
	for_each(winners.begin(), winners.end(), show);
	return 0;
}
vint lotto(int v, int n)
{
	vint win(v);
	for (int i = 0; i < v; i++)
		win[i] = i;
	random_shuffle(win.begin(), win.end());
	vint temp(win.begin (), win.begin() + n);
	return temp;
}
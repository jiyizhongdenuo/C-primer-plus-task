#include <iostream>
void show(char * ar, int n = 0);
int main()
{
	using namespace std;
	int num;
	(cin >> num).get();
	char ch[50];
	cin.getline(ch, 49);
	show(ch,num);
	cout << endl << endl;
	cin.getline(ch, 49);
	show(ch);
	return 0;
}
void show(char *ar, int n)
{
	if(n!=0)
		std::cout << ar;
}

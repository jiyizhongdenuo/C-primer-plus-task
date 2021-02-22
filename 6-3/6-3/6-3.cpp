#include<iostream>
#include<ctime>
int main()
{
	using namespace std;
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore\t\t\tp)pianist\nt)tree\t\t\tg)game\n" << "Please enter a c,p,t,org:";
	char ch;
	clock_t stay = CLOCKS_PER_SEC;
	while (cin >> ch)
	{
		clock_t start = clock();
		while (clock() - start < stay)
			continue;
		switch(ch)
		{
			case 't':
				'T'; cout << "A maple is a tree"; break;
			case 'c':
				'C'; cout << "A maple is carnivore"; break;
			case 'p':
				'P'; cout<< "A maple is pianist"; break;
			case 'g':
				'G'; cout<<"A maple is game "; break;
			default:break;
		}
		if (ch != 't'&&ch != 'p'&&ch != 'c'&&ch != 'g')
			cout << "Please enter a c,p,t,org:";
		else
			break;
	}
	return 0;
}
#include"dma.h"
const int in = 4;
using std::cout;
#include<string>
int main()
{
	using std::cin;
	using std::endl;
	DMA * dma[in];
	char templ[100];
	char tempc[100];
	char temps[100];
	char ch;
	int ra;
	int kind;
	
	for (int i = 0; i < in; i++)
	{
		cout << "Enter label:";
		cin.getline(templ, 99);
		cout << "Enter the rating:";
		cin >> ra;
		while (ch = cin.get() != '\n')
			continue;
		cout << "Enter 1 or 2 :";
		while (cin >> kind && (kind != 1&&kind != 2))
			cout << "Enter either 1 or 2.";
		if (kind == 1)
		{
			cin.get();
			cout << "Enter color:";
			cin.getline(tempc, 99);
			dma[i]=new lackDMA(templ, tempc, ra);
		}
		else
		{
			cin.get();//上面的cin留下一个空格，没加这一句会把空格给teps
			cout << "Enter style:";
			cin.getline(temps, 99);
			dma[i]=new hasDMA(temps, templ, ra);
		}
		//while (cin.get() != '\n') 这一句主要接在cin.get(temp,30)后面的。
			//continue;
	}
	cout << endl;
	for (int i = 0; i < in; i++)
	{
		dma[i]->View();
		cout << endl;
	}
	for (int i = 0; i < in; i++)
	{
		delete dma[i];
	}
	cout << "done.";
	return 0;
}

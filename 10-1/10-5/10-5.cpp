#include<iostream>
#include"10-5.h"
#include<cctype>
int main()
{
	using namespace std;
	Stack st;
	char ch;
	customer po;
	cout << "Please enter A to add a purchase order,\n" << "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
		}
		switch (ch)
		{
		case 'a':
		case'A':cout << "Enter a customer fullname :";
			cin.getline(po.fullname, 35);
			cout << "Enter a paymentto add:";
			cin >> po.payment;
			if (st.isfull())
				cout << "stack already full\n";
			else
				st.push(po);
			break;
		case'p':
		case'P':
			if (st.isempty())
				cout << "stack already empty\n";
			else
			{
				st.pop(po);
				cout << "PO#" << po.fullname << " and " << po.payment << "popped\n";
			}
			break;
		}
		cout << "Please enter A to add a purchase order,\n" << "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}
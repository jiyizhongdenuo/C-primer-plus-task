#include <iostream>
#include"10-1.h"
int main()
{
	Account we;
	Account ew = Account("me", "mee", 5.0);
	ew.show();
	ew.get(11.0);
	we.get(10.0);
	we.show();
	ew.show();
	return 0;
}


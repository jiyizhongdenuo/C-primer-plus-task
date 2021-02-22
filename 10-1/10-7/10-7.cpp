#include <iostream>
#include"10-7.h"

int main()
{
	Plorg pl;
	Plorg lo = Plorg("ool", 20);
	pl.showplorg();
	lo.showplorg();
	lo.setci(15);
	lo.showplorg();
	return 0;
}

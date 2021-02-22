#include"10-6.h"
int main()
{
	Move mo;
	Move mo1(12, 17);
	mo.showmove();
	mo1.showmove();
	mo.reset(10, 15);
	Move mo2 = mo1.add(mo);
	mo2.showmove();
	return 0;
}
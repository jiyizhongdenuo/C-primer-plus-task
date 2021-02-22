#include <iostream>
#include"cow.h"
int main()
{
	Cow cow;
	Cow ccc("adads", "dsdfsad", 34);
	cow = ccc;
	cow.showcow();
	ccc.showcow();
	return 0;
}

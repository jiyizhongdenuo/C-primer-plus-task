#include <iostream>
#include"10-2.h"
int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.show();
	one.Formalshow();
	std::cout << std::endl;
	two.show();
	two.Formalshow(); 
	three.show();
	three.Formalshow();
	return 0;
}

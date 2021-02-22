#include <iostream>
#include"9-1.h"
int main()
{
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	golf andy;
	int x=setgolf(andy);
	std::cout << std::endl << x << std::endl;
	showgolf(ann);
	showgolf(andy);
	handicap(ann, 15);
	showgolf(ann);
}


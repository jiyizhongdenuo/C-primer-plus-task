#include <iostream>
#include"stonewt.h"
int main()
{
	using std::cout;
	using std::endl;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);
	Stonewt incognito = 275;
	cout << "The ccelebrity weighed " << incognito;
	wolfe.Mode_two();
	cout << "The detective weighed pad_left:"<<wolfe ;
	taft.Mode_three();
	cout << "The President weighed :" << taft ;
	incognito = 276;
	return 0;
}

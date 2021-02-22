#include<iostream>
#include<string>
struct CandyBar{
	std::string brand;
	double weight;
	int kaluli;
}snack = { "Mocha Munch",2.3, 350 };
int main(void)
{
	using std::cout;
	using std::endl;
	cout << snack.brand << endl << snack.weight << endl<<snack.kaluli;
	return 0;

}
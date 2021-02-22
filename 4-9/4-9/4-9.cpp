#include<iostream>
#include<string>
struct CandyBar {
	std::string brand;
	double weight;
	int kaluli;
};
CandyBar * snack = new CandyBar[3];
int main(void)
{
	snack[0].brand ="mn" ;
	snack[0].weight = 20;
	snack[1].kaluli = 15;
	using std::cout;
	using std::endl;
	cout << snack[0].brand << endl << snack[0].weight << endl << snack[1].kaluli;
	return 0;

}
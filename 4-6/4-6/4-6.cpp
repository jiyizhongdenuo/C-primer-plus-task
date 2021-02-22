#include<iostream>
#include<string>
struct CandyBar {
	std::string brand;
	double weight;
	int kaluli;
}snack[3] = { { "Mocha Munch",2.3, 350 },
{"NO",3.2,150},
{"yes",1.1,100} };
int main(void)
{
	using std::cout;
	using std::endl;
	cout << snack[1].brand << endl << snack[2].weight << endl << snack[0].kaluli;
	return 0;

}
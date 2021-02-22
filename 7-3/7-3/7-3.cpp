#include<iostream>
struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void display_b(const box);
void volume_box(box*);
int main()
{
	using namespace std;
	box boxs = { "maker",5.5,2.1,6.0,0 };
	volume_box(&boxs);
	display_b(boxs);
	return 0;
}
void volume_box(box * bo)
{
	bo->volume = bo->height*bo->length*bo->width;
}
void display_b(const box bo)
{
	std::cout << "maker:" << bo.maker << std::endl;
	std::cout << "height:" << bo.height << "\nwidth:" << bo.width << "\nlength:" << bo.length;
	std::cout << "\nvolume:" << bo.volume;
}
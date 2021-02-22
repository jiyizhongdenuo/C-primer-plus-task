#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"dma.h"
using std::cout;
using std::endl;
DMA::DMA(const char * l, int r )
{
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	rating = r;
}
DMA::DMA(const  DMA & d)
{
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	rating = d.rating;
}
DMA::~DMA() 
{
	delete[] label;
}
DMA & DMA::operator=(const DMA & d)
{
	if (this == &d)
		return *this;
	delete[]label;
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	rating = d.rating;
	return *this;
}
void DMA::View()const
{
	cout << "Label: " << label << endl;
	cout << "Rating: " << rating << endl;
}
lackDMA::lackDMA(const char * l, const char * c , int r ):DMA(l,r)
{
	strncpy(color, c,39);
	color[39] = '\0';
}
lackDMA::lackDMA(const char * c , const DMA & d) :DMA(d)
{
	strncpy(color, c, 39);
	color[39] = '\0';
}
void lackDMA::View()const
{
	DMA::View();
	cout << "color: " << color << endl;
}
hasDMA::hasDMA(const char * s , const char *l , int r):DMA(l,r)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}
hasDMA::hasDMA(const char * s, DMA & d):DMA(d)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA & d):DMA(d)
{
	style = new char[strlen(d.style) + 1];
	strcpy(style, d.style);
}
hasDMA::~hasDMA()
{
	delete[]style;
}
hasDMA & hasDMA::operator=(const hasDMA & d)
{
	if (this == &d)
		return *this;
	DMA::operator=(d);
	delete[]style;
	style = new char[strlen(d.style) + 1];
	strcpy(style, d.style);
	return *this;
}
void hasDMA::View()const
{
	DMA::View();
	cout << "style: " << style << endl;
}
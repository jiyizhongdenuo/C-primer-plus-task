#pragma once
#ifndef DMA_H_
#define DMA_H_
#include<iostream>
#include<string>
using std::string;
class DMA
{
private:
	char * label;
	int rating;
public:
	DMA(const char * l = "null", int r = 0);
	DMA(const  DMA & d);
	virtual ~DMA();
	DMA & operator=(const DMA & d);
	virtual void View()const = 0;
	char * lab() { return label; }
	int rat() { return rating; }
};
class lackDMA :public DMA
{
private:
	enum {COL_LEN=40};
	char  color[COL_LEN];//ʹ��char * color �����Ķ����ͻ��colorָ��0x0000000����û��ʹ�ÿռ䡣����ȴ��ֵ�ˡ�
public:
	lackDMA( const char * l = "blank", const char * c = "null", int r = 0);
	lackDMA(const char * l , const DMA & d);
	virtual void View()const;
};
class hasDMA : public DMA
{
private:
	char * style;
public:
	hasDMA(const char * s = "none", const char *l = "null", int r = 0);
	hasDMA(const char * s, DMA & d);
	hasDMA(const hasDMA & d);
	virtual ~hasDMA();
	hasDMA & operator=(const hasDMA & d);
	virtual void View()const;
};
#endif // !DMA_H_

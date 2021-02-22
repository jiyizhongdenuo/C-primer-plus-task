#pragma once
#ifndef QUEUETQ_H
#define QUEUETQ_H
#include<string>
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
class Worker
{
private:
	std::string fullname;
	long id;
public:
	Worker():fullname("no one"),id(0){}
	Worker(const char*fn,long i):fullname(fn),id(i){}
	~Worker() {}
	void Show()const;
	void Set();
};
void Worker::Show()const
{
	cout << "Name:" << fullname << endl;
	cout << "Employee ID: " << id << endl;
}
void Worker::Set()
{
	cout << "Enter waiter's name: ";
	getline(cin, fullname);//ÍüÁËÊäÈëstd
	cout << "Enter worker's ID:";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
template<class T>
class QueueTp
{
private:
	struct Node { T item; struct Node* next; };
	enum {Q_SIZE=10};
	Node* front;
	Node * rear;
	int items;
	const int qsize;
	QueueTp() :qsize(0) {}
	QueueTp operator=(const QueueTp & q) { return *this; }
public:
	QueueTp(int qt = Q_SIZE) :qsize(qt) { front = rear = nullptr; items = 0; }
	~QueueTp();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	bool enqueue(const T & item);
	bool dequeue(T & item);
};
template<class T>
QueueTp<T>::~QueueTp()
{
	Node * temp;
	while (front != nullptr)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
template<class T>
bool QueueTp<T>::isempty()const
{
	return items == 0;
}
template<class T>
bool QueueTp<T>::isfull()const
{
	return items == Q_SIZE;
}
template<class T>
int QueueTp<T>::queuecount()const
{
	return items;
}
template<class T>
bool QueueTp<T>::enqueue(const T & item)
{
	if (items == Q_SIZE)
		return false;
	Node * add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;
	if (front == nullptr)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}
template<class T>
bool QueueTp<T>::dequeue(T & item)
{
	if (items == 0)
		return false;
	front->item->Show();
	item = front->item;
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = nullptr;
	return true;
}
#endif // !QUEUETQ_H


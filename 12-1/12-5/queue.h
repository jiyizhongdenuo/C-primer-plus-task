#pragma once
#ifndef _QUEUE_
#define _QUEUE_
class Customer
{
	long arrive;
	int processtime;
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when()const { return arrive; }
	int ptime()const { return processtime; }
};
typedef Customer Item;
class Queue
{
	struct Node { Item item; struct Node * next; };
	enum {Qsize=10};
	Node * front;
	Node * rear ;
	int items;
	const int qsize;
	Queue (const Queue & q):qsize(0){}
	Queue & operator=(const Queue & q) { return *this; }
public:
	Queue(int qs = Qsize);
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	bool enqueue(const Item & item);
	bool dequeue(Item& item);
};
#endif // !_QUEUE_

#pragma once
#include <iostream>
using namespace std;
class Queue
{
private:
	int Front, Rear;
	int *Data;
	int dem;
	int size;
public:
	Queue(int _size);
	void Push(int value);
	int Pop();
	bool IsEmpty();
	bool IsFull();
	Queue();
	~Queue();
};


#pragma once
#ifndef Queue_h
#define Queue_h
#include "List.h"
#include "node.h"
template<class T>
class Queue :public List<T>
{
public:
	void push(const T &Item);
	T get();
	void pop();
	void hienthi();
	bool empty();	
	~Queue()
	{

	}
};
#include "Queue.cpp"
#endif

#pragma once
#ifndef stack_h
#define stack_h
#include "List.h"
#include "node.h"
template<class T>
class stack: public List<T>
{
public:
	~stack()
	{
		
	}
	void push(const T &Item);
	T get();
	void pop();
	void hienthi();
	bool empty();
};
#include "stack.cpp"
#endif
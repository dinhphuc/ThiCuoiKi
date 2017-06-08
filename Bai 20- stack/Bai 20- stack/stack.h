#pragma once
#include <iostream>
#include <vector>
using namespace std;

class stack
{
private:
	int top;
	int *a;
	int size;
public:
	int IsNULL();
	int IsFULL();
	void Push(int value);
	int Pop();
	stack(int size);
	stack();
	~stack();
};


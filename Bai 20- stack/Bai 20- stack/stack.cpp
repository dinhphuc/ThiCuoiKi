#include "stack.h"

int stack::IsNULL()
{
	return top == 0;
}
int stack::IsFULL()
{
	return top == size;
}
void stack::Push(int value)
{
	if (this->IsFULL())cout << "stack FULL" << endl;
	else
	{
		this->a[top] = value;
		top++;
	}
}
int stack::Pop()
{
	int value;
	if (this->top > 0)
	{
		value = a[top - 1];
		(a[top - 1])=NULL;
		top--;
		return value ;	
	}
	else
		return this->IsNULL();
}
stack::stack(int _size)
{
	int top = 0;
	this->size = _size;
	this->a = new int[size];
}
stack::stack()
{
	int top = 0;
	this->a = new int[20];
}


stack::~stack()
{
}

//struct node
//{
//	int data;
//	node *next;
//};
//node *t;
//void stack::push(int x)
//{
//	node *p = new node;
//	p->data = x;
//	p->next = t;
//	t = p;
//}
////--------------------
//int stack::pop()
//{
//	if (empty())
//	{
//		cout << "Ngan xep day!";
//		return -1;
//	}
//	node *q = t;
//	int x = q->data;
//	t = q->next;
//
//	delete q;
//
//	return x;
//}
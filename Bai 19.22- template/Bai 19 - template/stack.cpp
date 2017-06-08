#ifndef stack_cpp
#define stack_cpp
#include "stack.h"

template<class T>
void stack<T>::push(const T &Item)
{
	ChenDau(Item);
}
template<class T>
void stack<T>::pop()
{
	XoaDau();
}
template<class T>
void stack<T>::hienthi()
{
	Xuat();
}
template<class T>
T stack<T>::get()
{
	return Get();
}
template<class T>
bool stack<T>::empty()
{
	return Empty();
}
#endif
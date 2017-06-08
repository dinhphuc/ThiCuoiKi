#ifndef Queue_cpp
#define Queue_cpp
#include "Queue.h"

template<class T>
void Queue<T>::push(const T &Item)
{	
	ChenCuoi(Item);
}
template<class T>
void Queue<T>::pop()
{
	XoaCuoi();
}
template<class T>
void Queue<T>::hienthi()
{
	Xuat();
}
template<class T>
T Queue<T>::get()
{
	return Get();
}
template<class T>
bool Queue<T>::empty()
{
	return Empty();
}
#endif
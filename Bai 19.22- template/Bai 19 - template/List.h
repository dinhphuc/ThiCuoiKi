#pragma once
#ifndef List_h
#define List_h
#include"node.h"
template <class T>
class List
{
private:
	node<T> *head;
public:
	List()
	{
		this->head = NULL;
	}
	T Get();
	void ChenDau(T);
	void XoaDau();
	void ChenCuoi(T);
	void XoaCuoi();
	bool Empty();
	void Xuat();
	~List()
	{
		
	}

};

#include "List.cpp"
#endif

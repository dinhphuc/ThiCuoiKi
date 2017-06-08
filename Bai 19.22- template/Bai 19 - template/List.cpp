#ifndef List_cpp
#define List_cpp
#include "List.h"

template <class T>
T List<T>::Get()
{
	return head->data;
}
template <class T>
void List<T>::ChenDau(T value)
{
	node<T> *N = new node<T>(value); // tạo 1 node có value
	if (head == NULL)head = N; // nếu list k có gì thì gán head = Node vừa tạo
	else
	{
		N->next = head;
		head = N;
	}
}
template <class T>
void List<T>::XoaDau()
{
	if (head) // kiểm tra xem node có dữ liệu không
	{
		node<T> *N = head;
		head = head->next;
		//N->next = NULL;
		delete N;
	}

}
template <class T>
void List<T>::XoaCuoi()
{
	if (head) // nếu Null là sai || k null là đúng
	if (head->next == NULL) // nếu chỉ có 1 phần tử là Node đầu 
	{
		delete head;
		head = 0;
	}
	else
	{
		node<T> *h = head; // node h bằng node đầu
		while (h->next->next != NULL) // Chạy đến Next->Next
		{
			h = h->next;
		}
		delete h->next; // Tìm đc h là Node cuối và xóa 
		h->next = NULL; // h đã xóa -> cho h trỏ đến Null
	
	}
}
template <class T>
void List<T>::ChenCuoi(T value)
{
	node<T> *P = new node<T>(value);
	node <T> *H = head;
	if (head == NULL)head = P; // nếu list không có gì 
	else
	{
		while (H->next)
		{
			H = H->next;
		}
		H->next = P; // Hà trỏ tới next bằng Phúc :)))
	}	
}

template <class T>
bool List<T>::Empty()
{
	return head == NULL;
}


template <class T>
void List<T>::Xuat()
{
	node<T> *n = head;
	while (n)
	{
		cout << n->data << "\t";
		n = n->next;
	}
}

#endif

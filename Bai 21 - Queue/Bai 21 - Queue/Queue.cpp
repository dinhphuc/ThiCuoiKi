#include "Queue.h"

void Queue::Push(int value)
{
	if (this->IsFull()) cout<<"Hang doi day";
	else
	{
		this->Data[++this->Rear] = value; //tang Rear len va gan phan tu vao
		this->dem++; //tang so phan tu len
	}
}
int Queue::Pop()
{
	if (this->IsEmpty()) cout<<"Hang doi rong !";
	else
	{
		int x = this->Data[this->Front];
		for (int i = this->Front; i<this->Rear; i++) //di chuyen cac phan tu ve dau hang
			this->Data[i] = this->Data[i + 1];
		this->Rear--; // giam vi tri phan tu cuoi xuong
		this->dem--;//giam so phan tu xuong
		return x; //tra ve phan tu lay ra
	}
}
bool Queue::IsEmpty()
{
	return dem == 0;
}
bool Queue::IsFull()
{
	return dem == size;
}
Queue::Queue()
{
	Front = 0;
	Rear = -1;
	dem = 0;
	size = 20;
	this->Data = new int[size];
}
Queue::Queue(int _size)
{
	Front = 0;
	Rear = -1;
	dem = 0;
	size = _size;
	this->Data = new int[size];
}


Queue::~Queue()
{
}

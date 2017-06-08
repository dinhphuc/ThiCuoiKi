#include "Queue.h"
#include <conio.h>

void main()
{
	Queue q(2);
	int value;
	do{
		cout << "Nhap value: "; cin >> value;
		q.Push(value);
		if (q.IsFull())
		{
			cout << "Queue FULL" << endl;
			break;
		}
		cout << "Nhap Tiep (enter) or ESC " << endl;
	} while (_getch() != 27 && !q.IsFull());


	cout << "IN Queue " << endl;
	do{
		cout << q.Pop() << endl;
	} while (!q.IsEmpty());
	cout << endl;
	system("pause");
}
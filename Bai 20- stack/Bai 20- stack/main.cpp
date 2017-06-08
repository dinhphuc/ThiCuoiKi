#include "stack.h"
#include <conio.h>
void main()
{
	stack s(3);
	int value;
	do{
		cout << "Nhap value: "; cin >> value;
		s.Push(value);	
		if (s.IsFULL())
		{
			cout << "stack FULL" << endl;
			break;
		}
		cout << "Nhap Tiep (enter) or ESC " << endl;
	} while (_getch() != 27 &&!s.IsFULL());


	cout << "IN stack " << endl;
	do{
		cout << s.Pop() << endl;
	} while (!s.IsNULL());
	cout << endl;
	system("pause");
}
#include "mtime.h"

void main()
{
	mtime t1(5,65, 8), t2(5, 8, 8),t3;
	t3 = t1 + t2;
	t3.output();

	cout << endl;
	system("pause");

}
#include "Date.h"

void main()
{
	Date A(12,2,1997);
	if (Date::KTNhuan(A))
	{
		cout << "Day La Nam Nhuan" << endl;
	}
	else
	{
		cout << "Day La Nam Khong Nhuan" << endl;
	}
	cout << endl;
	system("pause");
}
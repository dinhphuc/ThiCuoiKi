#include "HinhTron.h"

void main()
{
	HinhTron a(4);
	cout <<"DienTich "<< a.DienTich() << " Duong Kinh " << a.DuongKinh() << endl;
	HinhCau b(5);
	cout << "The tich " << b.TheTich();
	cout << endl;
	system("pause");
}
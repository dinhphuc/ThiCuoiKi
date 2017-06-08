#include "HinhTru.h"


void main()
{

	HinhTru B(4,5);
	cout << "Dien Tich Mat Day Hinh Tru: " << B.DienTichDay() << endl;
	cout << "Dien Tich Xung Quanh Hinh Tru: " << B.DienTichXungQuanh() << endl;
	cout << "The Tich Hinh Tru: " << B.TheTich() << endl;
	cout << endl;
	system("pause");
}
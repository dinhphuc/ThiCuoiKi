#include "HinhTron.h"

void main()
{
	HinhTron A(4);
	cout << "Dien Tich Hinh Tron: " << A.DienTich() << " Duong Hinh Tron: " << A.DuongKinh() << endl;
	HinhTru B(3, 7);
	cout << "Chu Vi Mat Day Hinh Tru: " << B.ChuViMatDay() << endl;
	cout << "Dien Tich Mat Day Hinh Tru: " << B.DienTichMatDay() << endl;
	cout << "Dien Tich Toan Phan Hinh Tru: " << B.DienTichToanPhan() << endl;
	cout << "Dien Tich Xung Quanh Hinh Tru: " << B.DienTichXungQuanh() << endl;
	cout << "The Tich Hinh Tru: " << B.TheTich() << endl;
	cout << endl;
	system("pause");
}
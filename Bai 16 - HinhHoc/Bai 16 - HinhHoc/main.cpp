#include "HinhHoc.h"

void main()
{
	HinhHoc *hcn = new HCN(4,5);
	cout<< "\nChu Vi hinh Chu Nhat: " << hcn->TinhChuVi();
	cout << "\nDien tich hinh Chu Nhat: " << hcn->TinhDienTich();
	cout << endl;
	HinhHoc *htr = new HinhTron(4);
	cout << "\nChu Vi hinh Tron: " << htr->TinhChuVi();
	cout << "\nDien tich hinh Tron: " << htr->TinhDienTich();

	cout << endl;
	cout << endl;
	system("pause");
}
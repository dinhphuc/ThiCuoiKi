#include "NhanSu.h"

void main()
{
	
	NhanSu *ns= new NhanSu();
	NhanSu *cb = new CanBo("Nguyen Van A", "Van" ,"123124", "Chuyen Toan");
	ns->nhap();
	cb->nhap();
	cout << endl;

	ns->Xuat();
	cb->Xuat();

	cout << endl;
	system("pause");



}
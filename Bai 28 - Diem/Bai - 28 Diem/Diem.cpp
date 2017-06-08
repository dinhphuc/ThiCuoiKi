#include "Diem.h"

void Diem::Nhap()
{
	cout << "Nhap vao MaSV: "; fflush(stdin); getline(cin, this->MaSV);
	cout << "Nhap vao MaMon: "; fflush(stdin); getline(cin, this->MaMon); 
	cout << "Nhap vao DiemThi: ";cin>>this->DiemThi;
}
void Diem::Xuat()
{
	cout << "MaSV: " << this->MaSV; cout << endl;
	cout << "MaMon: " << this->MaMon;	cout << endl;
	cout << "DiemThi: " << this->DiemThi;	cout << endl;
}
Diem::Diem()
{
	this->MaSV = "";
	this->MaMon = "";
	this->DiemThi = 0;
}


Diem::~Diem()
{
}


void DiemHocPhan::Nhap()
{
	Diem::Nhap();
	cout << "Nhap vao NgayThi: ";  fflush(stdin); getline(cin, this->NgayThi); fflush(stdin);
	cout << "Nhap vao HeSo: "; cin >> this->HeSo;
}
void DiemHocPhan::Xuat()
{
	Diem::Xuat();
	cout << "NgayThi: " << this->NgayThi;	cout << endl;
	cout << "HeSo: " << this->HeSo;	cout << endl;
}

DiemHocPhan::DiemHocPhan() :Diem()
{
	this->NgayThi = "";
	this->HeSo = 0;
}
DiemHocPhan::~DiemHocPhan()
{
}

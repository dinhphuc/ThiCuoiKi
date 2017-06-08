#include "MonHoc.h"

void MonHoc::Nhap()
{
	cout << "Nhap vao MaMon: "; fflush(stdin); getline(cin, this->MaMon);
	cout << "Nhap vao TenMon: "; fflush(stdin); getline(cin, this->TenMon);
}
void MonHoc::Xuat()
{
	cout << "MaMon: "<< this->MaMon;	cout << endl;
	cout << "TenMon: " << this->TenMon;	cout << endl;
}
MonHoc::MonHoc()
{
	this->MaMon = "";
	this->TenMon ="";
}


MonHoc::~MonHoc()
{
}


void MonChuyenNganh::Nhap()
{
	MonHoc::Nhap();
	cout << "Nhap vao MaChuyenNganh: ";  fflush(stdin); getline(cin, this->MaChuyenNganh);
	cout << "Nhap vao SoDvht: "; cin >> this->SoDvht ;
}
void MonChuyenNganh::Xuat()
{
	MonHoc::Xuat();
	cout << "MaChuyenNganh: " << this->MaChuyenNganh;	cout << endl;
	cout << "SoDvht: " << this->SoDvht;	cout << endl;
}

MonChuyenNganh::MonChuyenNganh() :MonHoc()
{
	this->MaMon = "";
	this->TenMon = "";
	this->MaChuyenNganh="";
	this->SoDvht=0;
}
MonChuyenNganh::~MonChuyenNganh()
{
}
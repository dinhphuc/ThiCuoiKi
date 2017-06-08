#include "NhanSu.h"
void NhanSu::nhap()
{
	cout << "Nhap vao Ma: "; getline(cin, this->Ma);
	cout << "Nhap vao Ten : "; getline(cin, this->Ten);
}
void NhanSu::Xuat()
{
	cout << "\nMa : " << this->Ma;
	cout << "\nTen : " << this->Ten;

}

NhanSu::NhanSu(string _Ma, string _Ten)
{
	this->Ma = _Ma;
	this->Ten = _Ten;
}

NhanSu::NhanSu()
{
	this->Ma = "";
	this->Ten= "";
}


NhanSu::~NhanSu()
{
}
//-------can bo


void CanBo::nhap()
{
	NhanSu::nhap();
	cout << "Nhap vao Ma Chuc Vu: "; getline(cin, this->MaChucVu);
	cout << "Nhap vao Ma Phong Ban : "; getline(cin, this->MaPhongBan);
}
void CanBo::Xuat()
{
	NhanSu::Xuat();
	cout << "\nMa Chuc Vu  : " << this->MaChucVu;
	cout << "\nMa Phong Ban : " << this->MaPhongBan;

}
CanBo::CanBo(string _Ma, string _ten, string _MaChucVu, string _MaPhongBan) :NhanSu(_Ma, _ten)
{
	this->MaChucVu = _MaChucVu;
	this->MaPhongBan = _MaPhongBan;
}
CanBo::CanBo():NhanSu()
{
	this->MaChucVu = "";
	this->MaPhongBan = "";
}
CanBo::~CanBo()
{

}
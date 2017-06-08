#include "HangHoa.h"

void HangHoa::Nhap()
{
	cout << "Nhap vao Ma Hang: "; getline(cin, this->MaHang);
	cout << "Nhap vao Ten Hang: "; getline(cin, this->TenHang);
}
void HangHoa::Xuat()
{
	cout << "\nMa Hang: " << this->MaHang;
	cout << "\nTen Hang: " << this->TenHang;
	
}


void HangHoa::SetMaHang(string _Mathang)
{
	this->MaHang = _Mathang;
}
void HangHoa::SetTenHang(string _TenHang)
{
	this->MaHang = _TenHang;
}
string HangHoa::getMaHang()
{
	return this->TenHang;
}
string HangHoa::getTenhang()
{
	return this->MaHang;
}

HangHoa::HangHoa()
{
	this->MaHang = "";
	this->TenHang = "";
}


HangHoa::~HangHoa()
{
}

//----------------


void HangDienTu::Nhap()
{
	HangHoa::Nhap();
	cout << "Nhap vao Dac Tinh: "; getline(cin, this->DacTinh);
	cout << "Nhap vao Loai: "; cin >> this->Loai;
}
void HangDienTu::Xuat()
{
	HangHoa::Xuat();
	cout << "\nDac Tinh: " << this->DacTinh;
	cout << "\nLoai: " << this->Loai;
	
}
//----------
void HangDienTu::SetDacTinh(string _DacTinh)
{
	this->DacTinh = _DacTinh;
}
void HangDienTu::SetLoai(int _Loai)
{
	this->Loai = _Loai;
}
string HangDienTu::getDacTinh()
{
	return this->DacTinh;
}
int HangDienTu::getLoai()

{
	return this->Loai;
}


HangDienTu::HangDienTu() :HangHoa()
{
	this->DacTinh = "";
	this->Loai = 0;
}


HangDienTu::~HangDienTu()
{
}
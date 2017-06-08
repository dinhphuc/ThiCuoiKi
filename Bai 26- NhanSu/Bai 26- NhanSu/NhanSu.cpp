#include "NhanSu.h"
void NhanSu::Nhap()
{ 
	cout << "Nhap Vao ho ten : "; fflush(stdin); getline(cin, HoTen);
	cout << "Nhap Vao tuoi : "; cin >> this->Tuoi;

}
void NhanSu::Xuat()
{
	cout << "\nNhap Vao ho ten : "<< this->HoTen ;
	cout << "\nNhap Vao tuoi : " << this->Tuoi;

}

NhanSu::NhanSu()
{
	this->HoTen = "";
	this->Tuoi = 0;
}


NhanSu::~NhanSu()
{
}
//---------
void GiaoVien::Nhap()
{
	NhanSu::Nhap();
	cout << "Nhap Vao Chuyen Nganh : "; fflush(stdin) ;getline(cin,ChuyenNganh);
}
void GiaoVien::Xuat()
{
	NhanSu::Xuat();
	cout << "\nChuyen Nganh : " << ChuyenNganh<<endl;
}
GiaoVien::GiaoVien() :NhanSu()
{
	this->ChuyenNganh = "";
}
GiaoVien::~GiaoVien()
{

}
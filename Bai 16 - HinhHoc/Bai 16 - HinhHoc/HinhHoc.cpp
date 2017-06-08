#include "HinhHoc.h"
//HinhHoc

double HinhHoc::TinhChuVi()
{
	return 0;
}
double HinhHoc::TinhDienTich()
{
	return 0;
}
HinhHoc::HinhHoc()
{
}


HinhHoc::~HinhHoc()
{
}
// Hinh Chu Nhat
double HCN::TinhChuVi()
{
	return (this->x + this->y) * 2;
}
double HCN::TinhDienTich()
{
	return (this->x * this->y);
}

HCN::HCN(int _x, int _y)
{
	x = _x;
	y = _y;

}
//Hinh Tron
double HinhTron::TinhChuVi()
{
	return r * 2 * 3.14;
}
double HinhTron::TinhDienTich()
{
	return r*r*3.14;
}

HinhTron::HinhTron(int _r)
{
	r = _r;
}
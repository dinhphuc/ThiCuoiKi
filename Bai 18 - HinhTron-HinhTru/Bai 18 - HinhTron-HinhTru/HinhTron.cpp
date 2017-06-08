#include "HinhTron.h"

//////Hình tròn

double HinhTron::DienTich()
{
	return r*r*3.14;
}
double HinhTron::DuongKinh(){
	return r*2;
}
HinhTron::HinhTron(double _r){
	this->r = _r;
}
HinhTron::HinhTron()
{
	this->r = 0;
}


HinhTron::~HinhTron()
{
}
///Hình Trụ

double HinhTru::ChuViMatDay()
{
	return this->r * 2 * 3.14;
}
double HinhTru::DienTichMatDay()
{
	return this->DienTich();
}
double HinhTru::DienTichXungQuanh()
{
	return 2 * 3.14*this->r*this->h;
}
double HinhTru::DienTichToanPhan()
{
	return 2 * 3.14*this->r*(this->r + this->h);
}
double HinhTru::TheTich()
{
	return 3.14*this->r*this->r*this->h;
}
HinhTru::HinhTru(double _r, double _h): HinhTron(_r)
{
	this->h = _h;
}
HinhTru::HinhTru()
{
	this->r = 0;
	this->h = 0;
}
HinhTru::~HinhTru()
{

}



/*

*/
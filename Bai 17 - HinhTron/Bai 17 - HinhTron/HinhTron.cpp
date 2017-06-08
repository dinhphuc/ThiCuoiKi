#include "HinhTron.h"

double HinhTron::DienTich()
{
	return r*r*3.14;
}
double HinhTron::DuongKinh()
{
	return r * 2;
}
HinhTron::HinhTron(double _r)
{
	this->r = _r;
}


double HinhCau::TheTich()
{
	return (4 / 3 * 3.14*this->r*this->r*this->r);
}
HinhCau::HinhCau(double _r)
{
	this->r = _r;
}
HinhCau::HinhCau()
{
	this->r = 0;
}
HinhCau::~HinhCau()
{
}


HinhTron::HinhTron()
{
	this->r = 0;
}


HinhTron::~HinhTron()
{
}

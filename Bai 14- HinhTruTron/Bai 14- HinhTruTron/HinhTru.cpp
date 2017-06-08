#include "HinhTru.h"

double HinhTru::DienTichDay()
{
	return r*r*3.14;
}
double HinhTru::DienTichXungQuanh()
{
	return 2 * 3.14*this->r*this->h;
}
double HinhTru::TheTich()
{
	return 3.14*this->r*this->r*this->h;
}
HinhTru::HinhTru(double _r, double _h)
{
	this->r = _r;
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

#include "TamGiac.h"

double TamGiac::DienTich()
{
	if ((a>0) && (c>0) && (b>0) && (a + b>c) && (b + c>a) && (a + c>b))
	{
		double p = (a + b + c) / 2;
		return (sqrt(p*(p - a)*(p - b)*(p - c)));
	}
	else
		return 0;
}
double TamGiac::ChuVi()
{
	if ((a>0) && (c>0) && (b>0) && (a + b>c) && (b + c>a) && (a + c>b))
		return (a + b + c);
	else
		return 0;
}
TamGiac::TamGiac(double _a, double _b, double _c)
{
	a = _a;
	b = _b;
	c = _c;
}
TamGiac::TamGiac()
{
	a = 0;
	b = 0;
	c = 0;
}


TamGiac::~TamGiac()
{
}

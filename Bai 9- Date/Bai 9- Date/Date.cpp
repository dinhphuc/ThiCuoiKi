#include "Date.h"

bool Date::KTNhuan(Date D)
{
	if ((D.Nam % 4 == 0 && D.Nam % 100 != 0) || D.Nam % 400 == 0)
	{
		return true;
	}
	return false;
}
Date::Date(int _Ngay, int _Thang, int _Nam)
{
	Ngay = _Ngay;
	Thang = _Thang;
	Nam = _Nam;
}
Date::Date()
{
	Ngay = 0;
	Thang = 0;
	Nam = 0;
}


Date::~Date()
{
}

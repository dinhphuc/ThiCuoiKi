#include "TamGiac.h"

int TamGiac::XacDinhTamGiac()
{
	if (((a > 0) && (b > 0) && (c > 0)) || ((a + b > c) && (a + c >b) && (b + c > a)))
	{
		if ((a == b) && (b == c))return 1;
		if ((a == b) || (b == c) || (c == a))
		{
			if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))return 2;// Vuong can
			else return 3; // can
		}
		if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))return 4;
		else
		return 5;
	}
	else
		return 0;
}
void TamGiac::KTTamGiac()
{
	switch (this->XacDinhTamGiac())
	{
	case 0:
		cout << "Khong La Tam Giac " << endl;
		break;
	case 1:
		cout << "La Tam Giac Deu" << endl;
		break;
	case 2:
		cout << "La Tam Giac Vuong can" << endl;
		break;
	case 3:
		cout << "La Tam Giac can k vuong" << endl;
		break;
	case 4:
		cout << "La Tam giac vuong Binh Thuong" << endl;
		break;
	case 5:
		cout << "La Tam giac Binh Thuong" << endl;
		break;
	}
}
TamGiac::TamGiac(int _a,int _b,int _c)
{
	a = _a;
	b = _b;
	c = _c;
}

TamGiac::TamGiac()
{
}


TamGiac::~TamGiac()
{
}

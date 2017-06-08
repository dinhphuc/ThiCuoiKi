#include "PhanSo.h"


int PhanSo::UCLN(int a, int b)
{
	int c;
	while ((c = (a%b)) != 0)
	{
		a = b;
		b = c;
	}
	return b;
}
void PhanSo::RutGon(PhanSo &a)
{
	int temp = UCLN(a.TS, a.MS);
	a.TS = a.TS / temp;
	a.MS = a.MS / temp;
}
PhanSo PhanSo :: operator+(int A)
{
	PhanSo temp;
	temp.TS = this->TS +A*this->MS;
	temp.MS = this->MS;
	RutGon(temp);
	return temp;
}


PhanSo operator*(PhanSo a, PhanSo b)
{
	PhanSo temp;
	temp.TS = a.TS*b.TS;
	temp.MS = a.MS*b.MS;
	temp.RutGon(temp);
	return temp;
}
PhanSo operator/(PhanSo a, PhanSo b)
{
	PhanSo temp;
	temp.TS = a.TS*b.MS;
	temp.MS = a.MS*b.TS;
	temp.RutGon(temp);
	return temp;
}
//--Nhập Xuất --//
istream& operator>>(istream &input, PhanSo &a)
{
	cout << "\nNhap Vao Tu So: ";
	input >> a.TS;
	do{
		cout << "Nhap Vao Mau So: ";
		input >> a.MS;
		if (a.MS == 0)cout << "Nhap MS !=0\n ";
	} while (a.MS == 0);
	return input;
}
ostream& operator<<(ostream &output, PhanSo b)
{
	if (b.TS == b.MS)b.TS = b.MS = 1;
	if (b.MS == 1)
	{
		cout << b.TS;
		return output;
	}
	cout << b.TS << "/" << b.MS;
	return output;
}
PhanSo::PhanSo(int TuSo, int MauSo)
{
	this->TS = TuSo; this->MS = MauSo;
}
PhanSo::PhanSo()
{
	this->TS = 0; this->MS = 1;
}
PhanSo::~PhanSo()
{
}
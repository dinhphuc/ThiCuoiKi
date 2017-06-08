#pragma once
#include <iostream>
using namespace std;
class HinhTron
{
protected:
	double r;
public:
	double DienTich();
	double DuongKinh();
	HinhTron(double);
	HinhTron();
	~HinhTron();
};
class HinhTru:public HinhTron
{
protected:
	double h;
public:
	double ChuViMatDay();
	double DienTichMatDay();
	double DuongKinh();
	double DienTichXungQuanh();
	double DienTichToanPhan();
	double TheTich();
	HinhTru(double _r, double _h);
	HinhTru();
	~HinhTru();
};


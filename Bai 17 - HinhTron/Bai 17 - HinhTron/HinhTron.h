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
class HinhCau : public HinhTron
{
public:
	double TheTich();
	HinhCau(double);
	HinhCau();
	~HinhCau();
};


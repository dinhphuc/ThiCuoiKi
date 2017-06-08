#pragma once
#include <iostream>
using namespace std;

class HinhTru
{
private:
	double r;
	double h;
public:
	double DienTichDay();
	double DienTichXungQuanh();
	double TheTich();
	HinhTru(double _r, double _h);
	HinhTru();
	~HinhTru();
};


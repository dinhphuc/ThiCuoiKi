#pragma once
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
class TamGiac
{
private: 
	double a, b, c;
public:
	double DienTich();
	double ChuVi();
	TamGiac(double _a, double _b, double _c);
	TamGiac();
	~TamGiac();
};


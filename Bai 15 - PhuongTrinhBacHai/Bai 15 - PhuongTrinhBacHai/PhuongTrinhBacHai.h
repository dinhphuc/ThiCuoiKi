#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <conio.h>

using namespace std;
class PhuongTrinhBacHai
{
private:
	double a, b, c;
public:
	PhuongTrinhBacHai SetValue();
	void TimNghiem();
	PhuongTrinhBacHai(double, double, double);
	PhuongTrinhBacHai();
	~PhuongTrinhBacHai();
};
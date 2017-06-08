#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private:
	int TS, MS;
public:
	friend istream& operator >>(istream &input, PhanSo &A);
	friend ostream& operator <<(ostream &output, PhanSo B);
	friend PhanSo operator*(PhanSo, PhanSo);
	friend PhanSo operator/(PhanSo, PhanSo);
	PhanSo operator+(int A);
	int UCLN(int, int);
	void RutGon(PhanSo&);
	PhanSo(int TuSo, int MauSo);
	PhanSo();
	~PhanSo();
};


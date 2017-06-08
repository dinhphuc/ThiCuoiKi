#pragma once
#include <iostream>
using namespace std;
class HinhHoc
{
public:
	virtual double TinhChuVi();
	virtual double TinhDienTich();
	HinhHoc();
	~HinhHoc();
};
class HCN : public HinhHoc
{
private:
	int x, y;
public:
	 double TinhChuVi();
	 double TinhDienTich();
	HCN(int ,int);
	~HCN();
};
class HinhTron : public HinhHoc
{
private:
	int r;
public:
	 double TinhChuVi();
	 double TinhDienTich();
	HinhTron(int r);
	~HinhTron();
};


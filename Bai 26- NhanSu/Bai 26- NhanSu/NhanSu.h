#pragma once
#include <string>
#include <iostream>
using namespace std;

class NhanSu
{
private:
	string HoTen;
	int Tuoi;
public:
	virtual void Nhap();
	virtual void Xuat();
	NhanSu();
	~NhanSu();
};

class GiaoVien : public NhanSu
{
private:
	string ChuyenNganh;
public:
	 void Nhap();
	 void Xuat();
	GiaoVien();
	~GiaoVien();
};
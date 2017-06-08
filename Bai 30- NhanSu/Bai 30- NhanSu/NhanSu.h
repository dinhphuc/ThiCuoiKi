#pragma once
#include <string>
#include <iostream>
using namespace std;
class NhanSu
{
protected:
	string Ma;
	string Ten;
public:
	virtual void nhap();
	virtual void Xuat();
	NhanSu(string, string);
	NhanSu();
	~NhanSu();
};
class CanBo: public NhanSu
{
protected:
	string MaPhongBan;
	string MaChucVu;
public:
	void nhap();
	void Xuat();
	CanBo(string, string, string, string);
	CanBo();
	~CanBo();
};



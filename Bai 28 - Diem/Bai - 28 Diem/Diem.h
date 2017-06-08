#pragma once
#pragma once
#include <string>
#include <iostream>
using namespace std;
class Diem
{
private:
	string MaSV;
	string MaMon;
	int DiemThi;
public:
	virtual void Nhap();
	virtual void Xuat();
	Diem();
	~Diem();
};
class DiemHocPhan :public Diem
{
private:
	string NgayThi;
	int HeSo;
public:
	void Nhap();
	void Xuat();
	DiemHocPhan();
	~DiemHocPhan();
};

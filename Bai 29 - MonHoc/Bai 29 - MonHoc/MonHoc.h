#pragma once
#include <string>
#include <iostream>
using namespace std;
class MonHoc
{
protected:
	string MaMon;
	string TenMon;
public:
	virtual void Nhap();
	virtual void Xuat();
	MonHoc();
	~MonHoc();
};

class MonChuyenNganh:MonHoc
{
private:
	string MaChuyenNganh;
	int SoDvht;
public:
	 void Nhap();
	 void Xuat();
	MonChuyenNganh();
	~MonChuyenNganh();
};
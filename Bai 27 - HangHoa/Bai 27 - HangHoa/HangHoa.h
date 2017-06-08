#pragma once
#include <string>
#include <iostream>
using namespace std;

class HangHoa
{
protected:
	string MaHang;
	string TenHang;
public:
	virtual void Nhap();
	virtual void Xuat();
	void SetMaHang(string);
	void SetTenHang(string);
	string getMaHang();
	string getTenhang();

	HangHoa();
	~HangHoa();
};


class HangDienTu :public HangHoa
{
private:
	string DacTinh;
	int	Loai;
public:
	void Nhap() override;
	void Xuat() override;
	void SetDacTinh(string);
	void SetLoai(int);
	string getDacTinh();
	int getLoai();
	HangDienTu();
	~HangDienTu();
};

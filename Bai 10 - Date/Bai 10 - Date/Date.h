#pragma once
class Date
{
public:
	int Ngay, Thang, Nam;
	static bool  KTNhuan(Date D);
	static int  TinhNgay(Date );
	Date(int, int, int);
	Date();
	~Date();
};


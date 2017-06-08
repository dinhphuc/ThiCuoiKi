#include<iostream>
using namespace std;
class Date{
private:
	int day, month, year;
public:
	Date();
	Date(int day, int month, int year);
	int getMonth();
	static bool Nhuan(int year);
	static int tinhsongay(int month, int year);
	static long SoNgay(Date d0, Date d);
	static long HieuHaiNgay(Date, Date);
};

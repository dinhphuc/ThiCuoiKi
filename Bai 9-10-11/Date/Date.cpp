#include"Date.h"
Date::Date(){
	this->day = 1;
	this->month = 1;
	this->year = 1;

}
Date::Date(int day, int month, int year){
	this->day = day;
	this->month = month;
	this->year = year;
}
bool Date::Nhuan(int year){
	if ((year % 4 == 0) && (year % 100 != 0)) 
		return 1;
		if ((year % 100 == 0) && (year % 400 == 0)) 
		return 1;
		
	return 0;
}
int Date::tinhsongay(int month, int year){
	if (month == 2){
		if (Nhuan(year)) return 29;
		return 28;
	}
	if (month==4|| month == 6 || month == 9 || month == 11) return 30;
		return 31;

}
long Date::HieuHaiNgay(Date d1, Date d2){
	int year0 = d1.year;
	if (year0 > d2.year)
		year0 = d2.year;
	int s1 = SoNgay(Date(1, 1, year0), d1);
	int s2 = SoNgay(Date(1, 1, year0), d2);
	return (s1 - s2);
}
long Date::SoNgay(Date d0, Date d){
	int s = d.day - 1;
	for (int i = 1; i < d.month; i++){
		s = s + tinhsongay(i, d.year);
	}
	for (int i = d0.year; i < d.year; i++){
		if (Nhuan(i))
			s += 366;
		else
			s += 365;
	}
	return s;
}
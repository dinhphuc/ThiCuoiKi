#pragma once
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;


class Time
{
protected:
	int gio;
	int phut;
	int giay;
public:
	Time();
	~Time();
	Time(int, int, int);
	void Nhap();
	void Xuat();
	Time operator +(int k);
	Time operator -(int k);
	int operator -(Time);
	Time operator ++();
	Time operator --();
	bool operator >(Time);
	bool operator <(Time);
	bool operator >=(Time);
	bool operator <=(Time);
	bool operator ==(Time);
	bool operator !=(Time);
};


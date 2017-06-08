#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int Ngay, Thang, Nam;
public:
	static bool  KTNhuan(Date D);

	Date(int , int , int );
	Date();
	~Date();
};


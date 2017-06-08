#pragma once
#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class mtime
{
private:
	int hours, minutes, seconds;
public:
	mtime output();
	mtime operator+(mtime);
	mtime(int gio, int phut, int giay);
	mtime();
	~mtime();
};


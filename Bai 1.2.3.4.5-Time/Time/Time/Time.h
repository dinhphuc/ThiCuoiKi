#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class Time
{
private:
	int h;
	int m;
	int s;
public:
	Time();
	void setTime();
	Time(int, int, int);
	bool operator>(Time t2);
	bool operator<(Time t2);
	friend ostream & operator<<(ostream &os, Time t);
	~Time();
};


#include "Time.h"


Time::Time()
{
	h = 0;
	m = 0;
	s = 0;
}
bool Time::operator>(Time t2)
{
	if (this->h > t2.h) return true;
	else if (this->h == t2.h)
	{
		if (this->m > t2.m) return true;
		else if (this->m == t2.m)
		{
			if (this->s > t2.s) return true;
			else return false;
		}
		else return false;
	}
	else return false;
}

bool Time::operator<(Time t2)
{
	if (this->h < t2.h) return true;
	else if (this->h == t2.h)
	{
		if (this->m < t2.m) return true;
		else if (this->m == t2.m)
		{
			if (this->s < t2.s) return true;
			else return false;
		}
		else return false;
	}
	else return false;
}

void Time::setTime()
{
	this->s = this->s % 60;
	this->m = (this->m + this->s / 60) % 60;
	this->h = this->h;
}


Time::Time(int gio, int phut, int giay)
{
	if (gio >= 24 || gio < 0) gio = abs(gio) % 24;
	if (phut >= 60 || phut < 0) phut = abs(phut) % 60;
	if (giay >= 60 || giay < 0) giay = abs(giay) % 60;
	h = gio;
	m = phut;
	s = giay;
}
ostream & operator<<(ostream &os, Time t)
{
	os << t.h << ":" << t.m << ":" << t.s << endl;
	return os;
}
Time::~Time()
{
}

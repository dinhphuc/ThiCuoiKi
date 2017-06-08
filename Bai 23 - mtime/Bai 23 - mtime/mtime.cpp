#include "mtime.h"
mtime mtime::output()
{
	cout << this->hours << ":" << this->minutes << ":" << this->seconds;
	return *this;
}
mtime mtime::operator+(mtime t)
{
	int a = ((this->hours + t.hours) * 3600 + (this->minutes + t.minutes) * 60 + this->seconds + t.seconds);
	mtime temp;
	while (a >= 60)
	{
		a -= 60;
		temp.minutes++;
		if (temp.minutes >= 60)
		{
			temp.minutes -= 60;
			temp.hours++;
		}
	}
	temp.seconds = a;
	return mtime(temp.hours, temp.minutes, temp.seconds);
}
mtime::mtime(int gio, int phut, int giay )
{
	if (gio >= 24 || gio < 0) gio = abs(gio) % 24;
	if (phut >= 60 || phut < 0) phut = abs(phut) % 60;
	if (giay >= 60 || giay < 0) giay = abs(giay) % 60;
	hours = gio;
	minutes = phut;
	seconds = giay;
}
mtime::mtime()
{
	
	hours = 0;
	minutes = 0;
	seconds = 0;
}


mtime::~mtime()
{
}

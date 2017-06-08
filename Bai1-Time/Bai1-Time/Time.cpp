#include "Time.h"


Time::Time()
{
	gio = 0;
	phut = 0;
	giay = 0;
}
Time::~Time()
{
}
Time::Time(int h, int m, int s)
{
	gio = h;
	phut = m;
	giay = s;
}
void Time::Nhap()
{
	cout << "Moi ban nhap vao gio: ";
	cin >> this->gio;
	cout << "Moi ban nhap vao phut: ";
	cin >> this->phut;
	cout << "Moi ban nhap vao giay: ";
	cin >> this->giay;
	//Time(gio, phut, giay);
}
void Time::Xuat()
{
	cout << gio << ":" << phut << ":" << giay;
}
Time Time:: operator +(int k)
{
	int temp = 0;
	temp = giay + k;
	phut += temp / 60;
	giay = temp % 60;
	if (phut >= 60)
	{
		gio += phut / 60;
		phut = phut % 60;
	}
	return Time(gio, phut, giay);
}
Time Time::operator -(int k)
{
		int tam = this->gio * 3600 + this-> phut * 60 + this->giay;
		tam -= k;
		int h = 0, m = 0, s = 0;
		while (tam >= 60)
		{
			tam -= 60;
			m++;
			if (m >= 60)
			{
				m -= 60;
				h++;
			}
		}
		this->gio = h;
		this->phut = m;
		this->giay = tam;
		return Time(gio, phut, giay);
}
int Time::operator -(Time t)
{
	return (this->gio * 3600 + this->phut * 60 + this->giay) - (t.gio * 3600 + t.phut * 60 + t.giay);
}
Time Time::operator ++()
{
	giay++;
	if (giay == 60)
	{
		phut++;
		giay = 0;
		if (phut == 60)
		{
			gio++;
			phut = 0;
		}
	}

	return Time(gio, phut, giay);

}
Time Time::operator --()
{
	giay--;
	if (giay < 0)
	{
		giay = 59;
		phut--;
		if (phut<0)
		{
			phut = 59;
			gio--;
		}
	}
	return Time(gio, phut, giay);
}
bool Time::operator >(Time t)
{
	if (this->gio > t.gio) return true;
	else if (this->gio == t.gio)
	{
		if (this->phut > t.phut) return true;
		else if (this->phut == t.phut)
		{
			if (this->giay > t.giay) return true;
			else return false;
		}
		else return false;
	}
	else return false;
}
bool Time::operator <(Time t)
{

	if (this->gio < t.gio) return true;
	else if (this->gio == t.gio)
	{
		if (this->phut < t.phut) return true;
		else if (this->phut == t.phut)
		{
			if (this->giay < t.giay) return true;
			else return false;
		}
		else return false;
	}
	else return false;
}
bool Time::operator >=(Time t)
{

	if (this->gio >= t.gio) return true;
	else if (this->gio == t.gio)
	{
		if (this->phut >= t.phut) return true;
		else if (this->phut == t.phut)
		{
			if (this->giay >= t.giay) return true;
			else return false;
		}
		else return false;
	}
	else return false;
}
bool Time::operator <=(Time t)
{
	if (this->gio <= t.gio) return true;
	else if (this->gio == t.gio)
	{
		if (this->phut <= t.phut) return true;
		else if (this->phut == t.phut)
		{
			if (this->giay <= t.giay) return true;
			else return false;
		}
		else return false;
	}
	else return false;
}
bool Time::operator ==(Time t)
{
	if (this->gio != t.gio) return false;
	if (this->phut != t.phut) return false;
	if (this->giay != t.giay) return false;
	return true;
}
bool Time::operator !=(Time t)
{
	if (this->gio == t.gio) return false;
	if (this->phut == t.phut) return false;
	if (this->giay == t.giay) return false;
	return true;
}
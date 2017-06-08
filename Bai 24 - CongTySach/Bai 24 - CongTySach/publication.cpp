#include "publication.h"



void publication::setdata()
{ 
	cout << "Nhap Vao Tieu De: ";getline(cin, this->the_title);
	cout << "Nhap Vao Gia : "; cin>>this->price;
}
void publication::putdata()
{ 
	cout << "\nTieu De: " << this->the_title;
	cout << "\nVao Gia : " << this->price;
}

publication::publication()
{
	this->the_title = "";
	this->price = 0;
}


publication::~publication()
{
}
//----------Book-------------


void book::setdata()
{

	publication::setdata();
	cout << "Nhap Vao So Trang : "; cin >> this->trang;

}
void book::putdata()
{
	publication::putdata();
	cout << "\nSo Trang : "<< this->trang;
}

book::book() :publication()
{
	this->trang = 0;
}


book::~book()
{
}

//-----------tape
void tape::setdata()
{
	publication::setdata();
	cout << "Nhap Vao Thoi Luong : ";cin>>  this->Thoiuong;
}
void tape::putdata()
{
	publication::putdata();
	cout << "\nThoi Luong : " << this->Thoiuong;
}

tape::tape() :publication()
{
	this->Thoiuong = 0;
}


tape::~tape()
{
}
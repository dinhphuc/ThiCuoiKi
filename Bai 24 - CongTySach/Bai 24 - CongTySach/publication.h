#pragma once
#include <string>
#include <iostream>
using namespace std;
class publication
{
protected:
	string the_title;
	float price;
public:
	virtual void setdata();
	virtual	void putdata();
	publication();
	~publication();
};

class book :public publication
{
private:
	int trang;
public:
	void setdata() override;
	void putdata() override ;
	book();
	~book();

};
class tape: public publication
{
private:
	float Thoiuong;
public:
	void setdata() override;
	void putdata() override;
	tape();
	~tape();

};
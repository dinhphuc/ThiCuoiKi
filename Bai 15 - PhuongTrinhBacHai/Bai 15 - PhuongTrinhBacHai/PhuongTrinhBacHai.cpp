#include "PhuongTrinhBacHai.h"

PhuongTrinhBacHai PhuongTrinhBacHai::SetValue()
{
	cout << "Nhap Vao a: "; cin >> a;
	cout << "Nhap Vao b: "; cin >> b;
	cout << "Nhap Vao c: "; cin >> c;
	return PhuongTrinhBacHai(a, b, c);
}
void PhuongTrinhBacHai::TimNghiem()
{
	if ((a == 0) && (b == 0) && (c == 0))
	{
		cout << "Phuong Trinh co vo so nghiem " << endl;
		return;
	}
	else if ((a == 0 && b == 0))
	{
		cout << "PhuongTrinh Vo Nghiem " << endl;
		return;
	}
	else if (a == 0)
	{
		cout << "Phuong Trinh co nghiem " << -c / b << endl;
		return;
	}

	double Delta = b*b - 4 * a*c;
	if (Delta < 0)
	{
		cout << "PhuongTrinh Vo Nghiem " << endl;
		return;
	}
	else if (Delta == 0)
	{
		cout << "Phuong Trinh co Nghiem Kep x1=x2= " << (-b / a);
		return;
	}
	else if (Delta > 0)
	{
		cout << "Phuong Trinh co Nghiem X1= " << ((-b + sqrt(Delta)) / (2 * a)) << endl;
		cout << "Phuong Trinh co Nghiem X2= " << ((-b - sqrt(Delta)) / (2 * a)) << endl;
		return;
	}

}
PhuongTrinhBacHai::PhuongTrinhBacHai(double _a, double _b, double _c)
{
	a = _a;
	b = _b;
	c = _c;
}
PhuongTrinhBacHai::PhuongTrinhBacHai()
{
	a = 0;
	b = 0;
	c = 0;

}
PhuongTrinhBacHai::~PhuongTrinhBacHai()
{}
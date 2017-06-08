#include "TamGiac.h"


void main()
{
	int a = 0, b = 0, c = 0;
	do
	{
		do{
			cout << "Nhap Vao canh 1 cua Tam giac: "; cin >> a;
			cout << "Nhap Vao canh 2 cua Tam giac: "; cin >> b;
			cout << "Nhap Vao canh 3 cua Tam giac: "; cin >> c;
			if (!((a > 0) && (c > 0) && (b > 0) && (a + b > c) && (b + c > a) && (a + c > b)))cout << "Khong Phai Tam Giac \n";
		} while (!((a > 0) && (c > 0) && (b > 0) && (a + b > c) && (b + c > a) && (a + c > b)));


		TamGiac A(a, b, c);
		cout << "Dien Tich Tam Giac: " << A.DienTich() << endl;
		cout << "Chu Vi Tam Giac: " << A.ChuVi() << endl;
		cout << endl;
		cout<<"Nhap Tiep (enter) \n";

	} while (_getch() != 27);

}
#include "TamGiac.h"

void main()
{
	int a = 0, b = 0, c = 0;
	
	do{
		do{
			cout << "Nhap Vao canh 1 cua Tam giac: "; cin >> a;
			cout << "Nhap Vao canh 2 cua Tam giac: "; cin >> b;
			cout << "Nhap Vao canh 3 cua Tam giac: "; cin >> c;
			if ((a < 0) || (c < 0) || (b < 0))cout << "Khong Phai Tam Giac \n";
		} while ((a < 0) || (c < 0) || (b < 0));
		TamGiac A(a,b,c);
		A.KTTamGiac();
	} while (_getch() != 27);
	cout << endl;
	system("pause");
}

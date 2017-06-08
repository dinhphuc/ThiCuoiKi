#include "PhuongTrinhBacHai.h"

void main()
{ 
	do
	{
		PhuongTrinhBacHai a;
		a.SetValue();
		a.TimNghiem();
		cout << endl;
		cout << " Nhap Tiep (enter)"<<endl;
	} while (_getch() != 27);
}
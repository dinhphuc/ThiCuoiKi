#include "HangHoa.h"

void main()
{
	HangHoa *hdt = new HangDienTu();
	
	hdt->Nhap(); 
	cout << endl;
	
	hdt->Xuat();

	cout << endl;
	system("pause");



}
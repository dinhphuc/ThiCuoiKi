#include"Date.h"
void main(){
	
	
    if (Date::Nhuan(2016))
		cout << "Nam nhuan\n";
	else
		cout << "Nam khong nhuan\n";
	cout << "so ngay trong thang la\n" << Date::tinhsongay(2, 2017);
	/*Date A(5, 12, 2017);
	Date B(20, 6, 2007);
	cout << Date::HieuHaiNgay(A, B);*/
	system("pause");
}
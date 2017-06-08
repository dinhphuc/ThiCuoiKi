#include"Time.h"


void main()
{
	int Nhap = 0;
	Time t1;
	do{
		system("cls");
		cout << "\n\t\tBai 1: " << endl << endl;
		cout << "\t1. Nhap Time" << endl;
		cout << "\t2. In Time" << endl;
		cout << "\t3. Cong Time voi k(s)" << endl;
		cout << "\t4. Tru Time voi k(s)" << endl;
		cout << "\t5. Tru Time voi Time = k(s)" << endl;
		cout << "\t6. Time++" << endl;
		cout << "\t7. Time--" << endl;
		cout << "\t8. So Sanh( <,>,= )" << endl;
		cout << "\t9. So Sanh( <= )" << endl;
		cout << "\t10. So Sanh( >= )" << endl;
		cout << "\t11. So Sanh( != )" << endl;
		cout << "\t12. Thoat" << endl;
		cout << "Nhap Vao Lua Chon: "; cin >> Nhap;

		switch (Nhap)
		{
		case 1:
			t1.Nhap();
			cout << endl;
			system("pause");
			break;
		case 2:
			cout << "Time La: "; t1.Xuat();
			cout << endl;
			system("pause");
			break;
		case 3:
		{
				  cout << "nhap Vao t1: \n";
				  t1.Nhap();
				  int k;
				  cout << "Nhap k(s) = "; cin >> k; cout << endl;
				  t1.Xuat(); cout << " + " << k << " = "; (t1 + k).Xuat();
				  cout << endl;
				  system("pause");
		}
			break;
		case 4:
		{
				  cout << "nhap Vao t1: \n";
				  t1.Nhap();
				  int k;
				  cout << "Nhap k(s) = "; cin >> k; cout << endl;
				  t1.Xuat(); cout << " - " << k << " = "; (t1 - k).Xuat();
				  cout << endl;
				  system("pause");
		}
			break;
		case 5:
		{
				  cout << "nhap Vao t1: \n";
				  t1.Nhap();
				  cout << endl;
				  cout << "nhap Vao t2: \n";
				  Time t2;
				  t2.Nhap();
				  t1.Xuat(); cout << " - "; t2.Xuat(); cout << " = " << "k(s) = " << t1 - t2;
				  cout << endl;
				  system("pause");
		}
			break;
		case 6:
		{
				  cout << "nhap Vao t1: \n";
				  t1.Nhap();
				  cout << "t1++: ";
				  (t1++).Xuat();
				  cout << endl;
				  system("pause");
		}
			break;
		case 7:
		{
				  cout << "nhap Vao t1: \n";
				  t1.Nhap();
				  cout << "t1--: ";
				  (t1--).Xuat();
				  cout << endl;
				  system("pause");
		}
			break;
		case 8:
		{
				  char c = '>';
				  Time t2;
				  cout << "nhap Vao t1: \n";
				  t1.Nhap();
				  cout << "nhap Vao t2: \n";
				  t2.Nhap();
				  cout << "nhap Vao Toan Tu So Sanh:(<,>,=) "; 
				  fflush(stdin);
				  scanf_s("%c", &c);
				  switch (c)
				  {
				  case '>':
					  if (t1 > t2)
						  cout << "t1 lon hon t2 \n";
					  else   cout << "t1 k lon hon t2 \n";
					  break;
				  case '<':
					  if (t1 < t2)
						  cout << "t1 nho hon t2 \n";
					  else     cout << "t1 khong nho hon t2 \n";
					  break;	 
				  case '=':
					  if (t1 == t2)
						  cout << "t1 bang t2 \n";
					  else      cout << "t1 khong bang t2 \n";
					  break;
				 
				  }
				  system("pause");
				  break;
		}
		case 9:
		{
			Time t2;
			cout << "nhap Vao t1: \n";
			t1.Nhap();
			cout << "nhap Vao t2: \n";
			t2.Nhap();
			if (t1 <= t2)
				cout << "t1 nho hon hoac bang t2 \n";
			else     cout << "t1 khong nho hon hoac bang t2 \n";
		}
			system("pause");
			break;
		case 10:
		{
			Time t2;
			cout << "nhap Vao t1: \n";
			t1.Nhap();
			cout << "nhap Vao t2: \n";
			t2.Nhap();
			if (t1 >= t2)
				cout << "t1 Lon hon hoac bang t2 \n";
			else     cout << "t1 khong Lon hon hoac bang t2 \n";
		}
			system("pause");
			break;
		case 11:
		{
			Time t2;
			cout << "nhap Vao t1: \n";
			t1.Nhap();
			cout << "nhap Vao t2: \n";
			t2.Nhap();
			if (t1 != t2)
				cout << "t1 Khac t2 \n";
			else     cout << "t1 khong Khac t2 \n";
			}
			system("pause");
			break;
		case 12:
			return;
			break;
		}
	} while (Nhap != 12);
	system("pause");
}
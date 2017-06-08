#include"Time.h"
int main()
{
	Time t1(1,122,8),t2(0,0,1);
	
	cout << t1;
	if (t1 < t2) cout << "Dung" << endl;
	else cout << "Sai" << endl;
	system("pause");
}
#include "List.h"
#include "node.h"
#include "stack.h"
#include "Queue.h"

void main()
{
	cout << "\n-------------LinkList--------\n";
	List<int> L;
	cout << "\n-------------kT Empty--------\n";
	if (L.Empty())cout << "Empty";
	else cout << "No Empty\n";
	cout << "\n-------------Chen Dau--------\n";
	for (int i = 0; i < 6; i++)
	{
		L.ChenDau(i);
	}
	L.XoaDau();
	L.Xuat();
	cout << "\n-------------stack--------\n";
	stack <int> s;
	for (int i = 0; i < 6; i++)
	{
		s.push(i);
	}
	s.hienthi();
	cout << "\n-------------Queue--------\n";
	Queue <int> Q;
	for (int i = 0; i < 6; i++)
	{
		Q.push(i);
	}
	Q.hienthi();
	cout << endl;
	system("pause");
}
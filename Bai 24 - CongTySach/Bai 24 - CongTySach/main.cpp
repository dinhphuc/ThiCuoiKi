#include "publication.h"

void main()
{
	publication *B = new book();
	publication *t = new tape();

	
	B->setdata();
	t->setdata();

	
	B->putdata();
	t->putdata();

	cout << endl;
	system("pause");
}
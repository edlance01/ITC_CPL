
#include "vintlist.h"
#include "vintlistcreate.h"

#include <iostream>
using namespace std;

int main()
{
	vIntList* pList;

	pList = CreateList(10);

	pList->Add(10);
	pList->Add(12);
	pList->Add(15);

	int y;

	y = pList->Remove();
	cout << y << "  ";
	y = pList->Remove();
	cout << y << "  ";
	y = pList->Remove();
	cout << y << "   ";
	y = pList->Remove();
	cout << y << "   ";

	cout << endl;
}


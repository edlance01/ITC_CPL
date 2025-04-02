#include "vintlist.h"
#include "intlist.h"
#include "vintlistcreate.h"

vIntList* CreateList(int x)
{
	IntList* pList = new IntList(10);
	vIntList * pvList = pList;

	return pList;
}


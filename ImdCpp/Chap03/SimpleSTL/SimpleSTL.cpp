// SimpleSTL.cpp

#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int a[6] = {1, 2, 3, 4, 5, 6};

	list<int> list1(&a[0], &a[6]);

	list<int>::iterator lstart = list1.begin();
	list<int>::iterator lfinish = list1.end();
	list<int>::iterator lwhere;

	lwhere = find(lstart, lfinish, 5);
	cout << "list   " << *lwhere << endl;

	int* astart = &a[2];
	int* afinish = &a[5];
	int* awhere;

	awhere = find(astart, afinish, 5);
	cout << "array   " << *awhere << endl;

	return 0;
}

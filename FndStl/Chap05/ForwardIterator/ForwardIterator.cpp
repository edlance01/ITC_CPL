// ForwardIterator.cpp

#include <list>
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	int a[] = { 10,20,10,40,10,60,10,80,10,100};
 	replace(a, a + 10, 10, 0);	// replace 10 with 0
	int i;
 	for (i = 0; i < 10; i++)
		cout << a[i] << " " ;
	cout << endl;

	vector<int> v(&a[0],&a[10]);
	// from begin to end - 5
	replace(v.begin(), v.end() -5 , 0, 100);
	for (i = 0; i < 10; i++)
		cout << v[i] << " " ;
	cout << endl;
	list<int> L(&a[0], &a[10]);

	replace(L.begin(), L.end(), 100,0);
	list<int>::iterator r = L.begin();
	while(r != L.end())
		cout << *r++ << " ";
	cout << endl;
	return 0;
}

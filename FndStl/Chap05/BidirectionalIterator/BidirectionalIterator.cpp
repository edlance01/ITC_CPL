// BidirectionalIterator.cpp

#include <list>
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	int  a[] = {10,20,10,40,10,60,10,80,10,100};

 	reverse(a, a + 10);
 	for (int i = 0; i < 10; i++)
		cout << a[i] << " " ;
 	cout << endl;
	 	
	int  b[] = {10,20,10,40,10,60,10,80,10,100};
	vector<int> v(b,b + 10);
 	reverse(v.begin(), v.end());
 	vector<int>::iterator vit = v.begin();
	while(vit != v.end())
		cout << *vit++ << " " ;
 	cout << endl;

 	int	c[] = {10,20,10,40,10,60,10,80,10,100};
	list<int> L(&c[0], &c[10]);
 	reverse(L.begin(), L.end());
 	list<int>::iterator r = L.begin();
 	while(r != L.end())
		cout << *r++ << " ";
 	cout << endl;
	return 0;
}

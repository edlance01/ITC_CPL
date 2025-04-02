// InputIterator.cpp

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

int main()
{
	using namespace std;
	int    a[] = { 10,20,30,40,50,60,70,80,90,100};
	int *p = find(&a[0], &a[10], 80);
 	if ( p != a + 10)
		cout << "found item at " << (p - a) << endl;
	else
		cout << "item not found\n";

	list<int> L(&a[0], &a[10]);
	list<int>::iterator i = find(L.begin(),L.end(),80);
	if ( i != L.end()) 
	{
		int n = distance(L.begin(), i);
		cout <<"found 80 in list at pos " << n << endl;
	}
	else
		cout << "didn't find in list\n";

	cout << "include x in characters you input" << endl;
	// special input iterators are also provided by STL
	istream_iterator<char> in(cin);
	istream_iterator<char> eos;
	find(in, eos, 'x');

	cout << "first non white space following 'x' is ";
	cout << *(++in) << endl;
	return 0;
}

// Multiset.cpp

#include <iostream>
#include <list>
#include <set>
using namespace std;

list<char> mlist(char* s)
{
	list<char> x;
	while (*s != '\0')
		x.push_back(*s++);
	return x;
}

int main()
{
	list<char> list1 = mlist("some sample data");
	multiset<char, less<char> > ms1;
	list<char>::iterator i;

	for (i = list1.begin(); i != list1.end(); ++i)
		ms1.insert(*i);

	list<char> list2;
	multiset<char, less<char> >::iterator k;

	for (k = ms1.begin(); k != ms1.end(); ++k)
		list2.push_back(*k);

	for (k = ms1.begin(); k != ms1.end(); ++k)
		cout << *k;
	cout << endl;
	return 0;
}

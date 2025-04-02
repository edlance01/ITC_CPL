// Set.cpp

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
	list <char> list1 = mlist("some sample data");
	set<char, less<char> > set1;
	list<char>::iterator i;
	for (i = list1.begin(); i != list1.end(); ++i)
		set1.insert(*i);

	list<char> list2;
	set<char, less<char> >::iterator k;
	for (k = set1.begin(); k != set1.end(); ++k)
		list2.push_back(*k);

	for (i = list2.begin(); i != list2.end(); i++)
		cout << *i;
	cout << endl;
	return 0;
}


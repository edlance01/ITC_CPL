// FindList.cpp

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
	char* s = "C++ is a better C";
	int len = strlen(s);
	list<char> list1(&s[0], &s[len]);
	list<char>::iterator where;

	where = find(list1.begin(), list1.end(), 'e');

	if ( where != list1.end())
		cout << "found the e\n";
	cout << endl;
	return 0;
}

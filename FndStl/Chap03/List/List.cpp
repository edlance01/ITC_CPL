// List.cpp

#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

list<char> mlist(char* s)
{
	list<char> x;
	while (*s != '\0')
	    x.push_back(*s++);
		return x;
}

int main( )
{
	list<char> list1 = mlist("instructor");
	list<char>::iterator lsi = list1.begin();
	reverse(list1.begin(), list1.end());
	while(lsi != list1.end())
		cout << *lsi++;	
	cout << endl;
	return 0;
}

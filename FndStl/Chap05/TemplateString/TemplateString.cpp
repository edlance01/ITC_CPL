// TemplateString.cpp

#include <iostream>
#include <string>
using namespace std;

template <class T>
T *find(T *begin, T *end, const T & value)
{
	while(begin != end)  
	{
		if ( *begin == value )
			return begin;
		else
			begin++;
	}
		return begin;
}

const int SIZE = 5;

int main()
{
	string  names[SIZE] = 
	{
		 "mike",
		 "john",
		 "jane",
		 "peter",
		 "susan"
	};
	string *p;
	for ( int value = 0; value < SIZE; value++) 
	{
		p = find(names, names + SIZE, names[value]);
		if ( p != names + SIZE) 
		{
			cout << "found ";
			cout << names[value];
			cout << " at " << p - names << endl;
		}
	}
	return 0;
}

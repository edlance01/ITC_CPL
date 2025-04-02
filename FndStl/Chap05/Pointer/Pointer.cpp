// Pointer.cpp

#include <iostream>
using namespace std;

int *find(int *begin, int *end, const int & value)
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
	int x[SIZE] = { 0,2,4,6,8 };
	int *p;
	for ( int value = 0; value < SIZE + 1; value++) 		
	{
		p = find(x, x + SIZE, value);
		if ( p != x + SIZE)
			cout << "found " << value << endl;
	}
	return 0;
}

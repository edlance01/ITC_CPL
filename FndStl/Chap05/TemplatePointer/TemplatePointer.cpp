// TemplatePointer.cpp

#include <iostream>
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

int	main()
{
	int x[SIZE] = { 0,2,4,6,8 };
	int *p;
	for ( int value = 0; value < SIZE; value++) 
	{
		p = find(x, x + SIZE, value);
		if ( p != x + SIZE)
			cout << "found " << value << endl;
	}

	double d[SIZE] = { 0.1, 2.1, 4.1, 6.1, 8.1};
	double *dp;
	double val;
	for (  val = 0.1; val < SIZE; val++) 
	{
		dp = find(d, d + SIZE, val);
		if ( dp != d + SIZE)
			cout << "found " << val<< endl;
	}
	return 0;
}


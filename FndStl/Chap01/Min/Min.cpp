// Min.cpp

#include <iostream>
#include <string>
using namespace std;

// template function
template < class T >		   
T minimum(const T & a,const T & b) 
{
	if ( a < b)
		return a;
	return b;	
}

int main( )
{
	int a = 5, b = 10;
	double x = 30.45, y = 57.35;
	string r("mike"), s("sue");	
	cout << minimum(a,b) << endl;	// instantiation
	cout << minimum(x,y) << endl;	//	"
	cout << minimum(r,s) << endl;	//	"
	return 0;
}

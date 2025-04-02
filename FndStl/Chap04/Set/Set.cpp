// Set.cpp

#pragma warning(disable: 4786)
#include <iostream>
#include <set>

int main()
{
	using namespace std;
	int init[] = { 4, 10, 1, 3, 22, 1, 100, -100 };
 	set<int, less<int> > S( init, init + 8);

 	cout << S.size() << endl; 		
	if ( S.empty())
		cout << "empty" << endl;
	else
		cout << "Not empty" << endl;
	
	set<int, less<int> >::iterator i;
	for ( i = S.begin() ; i != S.end(); i++ )	  				
		cout << *i << " ";
	cout << endl;
	//
	// -100, 1, 3, 4, 10, 22, 100	
	//
	set<int, less<int> >::reverse_iterator j;	
  	for ( j = S.rbegin(); j != S.rend(); j++ )
		cout << *j << " ";
	cout << endl;
	//	
	// 100, 22, 10, 4, 3, 1, -100
	//
	return 0;
}

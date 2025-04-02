// Multiset.cpp

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
	
void print(char *title, multiset<int, less<int> > p)
{
	cout << title;
	multiset<int,less<int> >::iterator f = p.begin();
    multiset<int, less<int> >::iterator e = p.end();

    while ( f != e )
		cout << *f++ << " ";
	cout << endl;
}

int main() 
{
	const int N = 10;
	int a[N] = {4, 1, 1, 1, 1, 1, 0, 5, 1, 0};
  	int b[N] = {4, 4, 2, 4, 2, 4, 0, 1, 5, 5};
 	multiset<int,  less<int> > A(a, a + N);
 	multiset<int,  less<int> > B(b, b + N);
  	multiset<int,  less<int> > C;
  	print("FIRST SET  ", A);
	print("SECOND SET ", B);

	set_union(A.begin(), A.end(), B.begin(), B.end(),
							inserter(C, C.begin()));
    print("SET UNION  ", C);
  	C.erase(C.begin(),C.end());		// clear

	set_intersection(A.begin(), A.end(), B.begin(),
			 		B.end(),inserter(C, C.begin()));
	print("INTERSEC   ",C);
  	C.erase(C.begin(),C.end());		

	set_difference(A.begin(), A.end(), B.begin(), B.end(),inserter(C, C.begin()));
	print("DIFFERENCE ", C);
	return 0;
}

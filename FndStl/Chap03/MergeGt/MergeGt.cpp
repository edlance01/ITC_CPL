// MergeGt.cpp

#include <iostream>
#include <algorithm>
using namespace std;

bool gt(int p1, int p2)
{
	return (p1 > p2);
}

int main( )
{
	int s[] = { 8,6,5,3};
	int t[] = { 10,8,6,3};
	int result[8];

	merge(s, s + 4, t, t + 4, result, gt);
			
	for (int i = 0; i < 8; i++)
		cout << result[i] << " " ;
	cout << endl;
	return 0;
}

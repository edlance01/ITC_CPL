// Iterator.cpp

#include <vector>
#include <numeric>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	int x[5] = {2, 3, 5, 7, 11};
	vector<int> v1(&x[0], &x[5]);
	int sum;

	sum = accumulate(v1.begin(),v1.end(),0);
	cout << "Vector sum: " << sum << endl; // 28

	double y[5] = {2.0, 3.0, 5.3, 7.0, 11.5 };
	list <double> L(&y[0], &y[5]);
	double dsum;

	dsum = accumulate(L.begin(), L.end(), 0.0);
	cout << "List sum: " << dsum << endl; 	// 28.8
	return 0;
}

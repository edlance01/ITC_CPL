// RandomAccessIterator.cpp

#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int main()
{
	int a[] = {10,20,10,40,10,60,10,80,10,100};
	vector<int> v(&a[0], &a[10]);
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < 10; i++)
		cout << v[i] << " ";
	cout << endl;
	return 0;
}

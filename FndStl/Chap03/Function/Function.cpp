// Function.cpp

#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

int mult(int x, int y)
{ 
	return x * y; 
}

int main()
{
	int x[5] = {2, 3, 5, 7, 11};
	vector<int> v1(x, x+5); 

	int p;
	p  = accumulate(v1.begin(), v1.end(), 1, mult);
	cout << p << endl;
	return 0;
}

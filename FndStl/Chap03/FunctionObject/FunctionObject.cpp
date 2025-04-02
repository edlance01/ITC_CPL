// FunctionObject.cpp

#include <vector>
#include <numeric>
#include <functional>
#include <iostream>
using namespace std;

class mult 
{
public:
	mult() 
	{
		cout << "inside default constructor" << endl;
	}
	int operator()(int x, int y) const
	{
		return x * y;
	}
};

int main()
{
	int x[5] = {2, 3, 5, 7, 11};
	vector<int> V(x, x+5); 
	int p = accumulate(V.begin(),V.end(),1,mult());
	cout << p << endl;
	return 0;
}

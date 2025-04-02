// UserSet.cpp

#include <iostream>
#include <set>
using namespace std;

class Frac 
{
public:
	int n,d;
	Frac(int a = 0, int b = 1) : n(a), d(b) { }
};

class less_f 
{
public:
	bool operator()(const Frac& a, const Frac& b)const
	{
		double left = a.n;
		left /= a.d;
		double right = b.n;
		right /= b.d;
		return left < right;
	}
};

int main()
{
	set<Frac, less_f> a;

	a.insert(Frac(4,3));
	a.insert(Frac(6,3));
	a.insert(Frac(8,3));
	cout << a.size() << endl;

	set<Frac, less_f>::iterator i;
	for ( i = a.begin() ; i != a.end(); i++ )
		cout << (*i).n << " " << (*i).d << endl;
	cout << endl;
	return 0;
}

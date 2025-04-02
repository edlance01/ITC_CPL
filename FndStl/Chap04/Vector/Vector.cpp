// Vector.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Fraction 
{
public:
	Fraction(int a = 0, int b = 1) : n(a), d(b) {}
	void print() 
	{ 
		cout << n << "/" << d <<endl; 
	}
	Fraction operator+(const Fraction & f);
	friend 
	ostream& operator<<(ostream& os,const Fraction& x);
private:
	int n, d;
};

ostream & operator<<(ostream& os,const Fraction& f)
{
	os << f.n << "/" << f.d;
	return os;
}

template <class TYPE>
void print(const vector<TYPE> & vtr) 
{
	cout << "vector of size " << vtr.size() << endl;
	for (int i = 0; i < (signed)vtr.size(); i++)
		cout << vtr[i] <<" " ;
	cout << endl;
}

int main() 
{
	vector<Fraction> f(5);
	print(f);

	for (int i = 0; i < (signed) f.size(); i++)
		f[i] = Fraction(i,2);
	print(f);

	f.push_back(Fraction(4,3));
	print(f);
	
	reverse(f.begin(), f.end());
	print(f);
	
	//f.erase(&f[4]);
	//print(f);
	
	f.insert(f.begin()+1, Fraction(10,3));
	print(f);
	
	for (int i = 0; i < 3; i++)
		f.pop_back();
	print(f);
	
	return 0;
}

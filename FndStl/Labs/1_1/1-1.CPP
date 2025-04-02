//
//	Lab 1-1
//
//	Write the Lookup function for a Pair type
//
//
#include <iostream>
#include <string>
using namespace std;

template <class L, class R>
class Pair 
{
private:
	L left_d;
	R right_d;
public:
	Pair(const L & Left, const R & Right);
	Pair();
	L getleft() const { return left_d; }
	void setleft(const L & clr) { left_d = clr; }
	R getright() const { return right_d; }
	void setright(const R & crr) { right_d = crr; }
};

template <class L, class R>
Pair<L,R>::Pair(const L & left, const R & right)
: left_d(left), right_d(right)
{ }

template <class L, class R>
Pair<L,R>::Pair()
{}

class Fraction {
	int n,d;
public:
	Fraction(int a, int b) : n(a), d(b) {}
	Fraction() : n(0), d(1) {}
	~Fraction() {}
	friend ostream & operator<<(std::ostream & os, const Fraction & cfr);

};

ostream & operator<<(std::ostream & os, const Fraction & cfr)
{
	os << cfr.n << "/" << cfr.d;
	return os;
}

// TODO
// Write the Lookup function referenced in the main routine below.
// Lookup inputs:
//		an array of Pair of string and Fraction classes
//		an int indicating how many elements are in the Pair array
//		a string object to search for
// The function should search the Pair array for the string and return:
//		the index of the String item, if found
//		-1 if not found


int main()
{
	Fraction pe1(100,27), pe2(140,39);
	string s1("NETSCAPE"), s2("MICROSOFT");
	Pair <string, Fraction> Companies[2];
	Companies[0].setleft(s1);
	Companies[0].setright(pe1);
	Companies[1].setleft(s2);
	Companies[1].setright(pe2);
	cout << "PAIR ARRAY\n";
	for ( int i = 0; i < 2; i++) {
		cout << Companies[i].getleft() << endl;
		cout << Companies[i].getright() << endl;
	}
	int found;
	// TODO
	// Make some tests of the Lookup function
	found = Lookup(Companies, 2, s1);

	return 0;
}

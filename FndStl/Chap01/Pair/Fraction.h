#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Fraction 
{
private:
	int n,d;
public:
	Fraction(int a, int b) : n(a), d(b) {}
	Fraction() : n(0), d(1) {}
	~Fraction() {}
	friend std::ostream & operator<<(std::ostream & os, const Fraction & cfr);

};

std::ostream & operator<<(std::ostream & os, const Fraction & cfr)
{
	os << cfr.n << "/" << cfr.d;
	return os;
}


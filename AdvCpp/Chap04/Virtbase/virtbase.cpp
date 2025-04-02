// virtbase.cpp

#include "trace.h"

class B
{
public:
	B(int i = 0) : b(i) {}
	int b;
};

class D1 : virtual public B
{
public:
	D1(int i = 1) : B(i) {}
};

class D2 : virtual public B
{
public:
	D2(int i = 2) : B(i) {}
};

class M : public D1, public D2
{
public:
	// M must initialize the base class directly
	M(int i = 100) : B(i) {}
};

int main()
{
	M m;
	Trace("m.b = ", m.b);	// not ambiguous
	return 0;
}

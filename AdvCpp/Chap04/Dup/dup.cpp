// dup.cpp

#include "trace.h"

class B
{
public:
	B(int i = 0) : b(i) {}
	int b;
};

class D1 : public B
{
public:
	D1(int i = 1) : B(i) {}
};

class D2 : public B
{
public:
	D2(int i = 2) : B(i) {}
};

class M : public D1, public D2
{
public:
	M(int i1 = 10, int i2 = 20) : D1(i1), D2(i2) {}
};

int main()
{
	M m;
//	Trace("m.b = ", m.b);	// ambiguous
	Trace("m.D1::b = ", m.D1::b);
	Trace("m.D2::b = ", m.D2::b);
	return 0;
}

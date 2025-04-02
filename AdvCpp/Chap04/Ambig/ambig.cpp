// ambig.cpp

#include "trace.h"

class B
{
public:
	void f() {Trace("B::f()");}
};

class C
{
public:
	void f() {Trace("C::f()");}
};

class M: public B, public C
{
};

int main()
{
	M m;
	m.f();	   // which f??
	return 0;
}

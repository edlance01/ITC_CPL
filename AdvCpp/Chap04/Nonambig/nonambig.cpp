// nonambig.cpp

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
public: 
	void f() {B::f();}
};

int main()
{
	M m;
	m.f();	   // now it is B::f()
	return 0;
}

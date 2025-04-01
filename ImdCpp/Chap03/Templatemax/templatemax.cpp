// templmax.cpp

#include "trace.h"

template<class T>
T Max(T a, T b)
{
	return (a > b) ? a : b;
}

int main()
{
	int a = 7;
	int b = 50;
	Trace("Before");
	Trace("a = ", a);
	Trace("b = ", b);
	Trace("Max = ", Max(a++, b++));
									// no anomaly
	Trace("");
	Trace("After");
	Trace("a = ", a);
	Trace("b = ", b);

	Trace("");
	Trace("double");
	double x = 7.7;
	double y = 50.5;
	Trace("x = ", x);
	Trace("y = ", y);
	Trace("Max = ", Max(x, y));

	return 0;
}

//  democonv.cpp
//
//  Demo program for conversions & assignments

#include <string.h>
#include "trace.h"
#include "strn.h"

void Print2Strings(const String& a, const String& b)
{
	Trace("1st = ", (const char *) a);
	Trace("2nd = ", (const char *) b);
}

void PrintCharPtr(const char* str)
{
	Trace("char ptr = ", str);
}

void PrintString(const String& s)
{
	Trace("String = ", (const char *) s);
}

int main()
{
	String a("Alpha");
	String b("Beta");

	Print2Strings(a, b);

	a = "Hello";
	b = a;

	Print2Strings(a, b);

	PrintString("Goodbye");

	PrintCharPtr(a);

	return 0;
}

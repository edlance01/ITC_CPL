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
	SmartString a("Alpha");
	SmartString b("Beta");

	Print2Strings(*a, *b);

	b = a = "Hello";

	Print2Strings(*a, *b);

	PrintString("Goodbye");

	PrintCharPtr(*a);

	int len;
	len = a->length();
	Trace("String Length ", len);

	return 0;
}

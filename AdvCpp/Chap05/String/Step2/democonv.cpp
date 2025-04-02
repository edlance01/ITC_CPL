//  democonv.cpp
//
//  Demo program for conversions & assignments

#include <string.h>
#include "trace.h"
#include "strn.h"

void Print2Strings(const SmartString& a, const SmartString& b)
{
	Trace("1st = ", (const char *) a);
	Trace("2nd = ", (const char *) b);
}

void PrintCharPtr(const char* str)
{
	Trace("char ptr = ", str);
}

void PrintString(const SmartString& s)
{
	Trace("String = ", (const char *) s);
}

int main()
{
	SmartString smarta("Alpha");
	SmartString smartb("Beta");
	SmartString smarthello("Hello");

	Print2Strings(smarta, smartb);

	smartb = smarta = smarthello;

	Print2Strings(smarta, smartb);

	PrintString(smarthello);

	return 0;
}

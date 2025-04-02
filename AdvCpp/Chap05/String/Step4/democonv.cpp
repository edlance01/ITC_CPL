//  democonv.cpp
//
//  Demo program for conversions & assignments

#include <string.h>
#include "trace.h"
#include "strn.h"
#include "smartpointer.h"

void Print2Strings(const SmartPointer<String>& sa, const SmartPointer<String>& sb)
{
	String* a = &(*sa);
	String* b = &(*sb);

	Trace("1st = ", (const char *) *a);
	Trace("2nd = ", (const char *) *b);
}

void PrintCharPtr(const char* str)
{
	Trace("char ptr = ", str);
}

void PrintString(const SmartPointer<String>& sptr)
{
	String* s = &(*sptr);
	Trace("String = ", (const char *) *s);
}


int main()
{
	String* palpha = new String("Alpha");
	String* pbeta = new String("Beta");
	String* phello = new String("Hello");

	SmartPointer<String> smarta(palpha);
	SmartPointer<String> smartb(pbeta);
	SmartPointer<String> smarthello(phello);

 	Print2Strings(smarta, smartb);

	smartb = smarta = smarthello;

	Print2Strings(smarta, smartb);

	PrintString(smarthello);

	return 0;
}


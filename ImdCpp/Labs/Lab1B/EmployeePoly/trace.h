// trace.h
/*
Added flush to cout to ensure vs ce captured it.
*/
#ifndef _TRACE_H
#define _TRACE_H

#include <iostream>

using namespace std;

inline void Trace(const char* str)
{
	cout << str << endl << flush;
}

inline void Trace(const char* str1, const char* str2)
{
	cout << str1 << str2 << endl << flush;
}

inline void Trace(const char* str1, int num)
{
	cout << str1 << num << endl << flush;
}

inline void Trace(int num)
{
	cout << num << endl << flush;
}

inline void Trace(const char* str1, const char* str2, int num)
{
	cout << str1 << str2 << num << endl << flush;
}

#endif

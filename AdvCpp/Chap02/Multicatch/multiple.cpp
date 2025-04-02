// multiple.cpp

#include "trace.h"
#include "strn.h"

int main()
{
	try
	{
		String s("I am a string");
		int n = 17;
//		throw s;
		throw n;
	}
	catch (int n)
	{
		Trace("int caught: ", n);
	}
	catch(const char *str)
	{
		Trace("char * caught: ", str);
	}
	catch(String s)
	{
		Trace("String caught: ", (const char*) s);
	}
	return 0;
}

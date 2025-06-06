//  objdemo.cpp
//
//  Demo program for Object class 

#include "trace.h"
#include "object.h"
#include "ostrn.h"

int main()
{
	Object anObject, *pObject;
	OString aString("I am a string");
	OString bString(aString);

	Trace("");
	Trace("Dumping a generic object");
	pObject = &anObject;
	pObject->Dump();

	Trace("");
	Trace("Dumping an OString");
	pObject = &aString;
	pObject->Dump();

	Trace("");
	Trace("Dumping a copy of an OString");
	pObject = &bString;
	pObject->Dump();

	return 0;
}


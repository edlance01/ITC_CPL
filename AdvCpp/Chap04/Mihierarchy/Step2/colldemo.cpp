//  colldemo.cpp
//
//  Demo program for stack collection class 

#include "object.h"
#include "ostrn.h"
#include "ostack.h"

int main()
{
	Object aObject;
	OString aString("I am a String");
	OStack stack;

	stack.Push(&aObject);
	stack.Push(&aString);
	stack.Push(&stack);

	stack.Print();

	return 0;
}


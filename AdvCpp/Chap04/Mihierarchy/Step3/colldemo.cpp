//  colldemo.cpp
//
//  Demo program for stack collection class 

#include "object.h"
#include "ostrn.h"
#include "ostack.h"
#include "employee.h"

int main()
{
	Object aObject;
	OString aString("I am a String");
	OStack stack;
	SalaryEmployee sally("Sally", 500);
	WageEmployee wally("Wally", 40, 10);

	stack.Push(&aObject);
	stack.Push(&aString);
	stack.Push(&stack);
	stack.Push(&sally);
	stack.Push(&wally);

	stack.Print();

	return 0;
}

//  StringStack.cpp
//
//  Implementation of string Stack class

#include <iostream>
#include <string>
using namespace std;
#include <stdlib.h>
#include "trace.h"
#include "StringStack.h"

StringStack::StringStack(long size)        
{
	Trace("StringStack::StringStack(long size)");
	stacksize = size;
	stack = new string[stacksize];
	if (stack == 0)
    {
        Trace("ERROR: Memory allocation error");
        exit(1);
    }
	top = 0;
	for (int i = 0; i < stacksize; ++i)
		stack[i] = "";
}

StringStack::~StringStack()
{
	Trace("StringStack::~StringStack()");
	delete [] stack;
}

void StringStack::Push(string x)
{
    if (IsFull())
    {
        Trace("ERROR: Stack is full");
        exit(1);
    }
    stack[top++] = x;
}

string StringStack::Pop()
{
    if (IsEmpty())
    {
        Trace("ERROR: Stack is empty");
        exit(1);
    }
    return stack[--top];
}

void StringStack::Print()
{
    for (int i=top-1; i>=0; --i)
        Trace(stack[i]);
}

int StringStack::IsEmpty()
{
	return (top == 0);
}

int StringStack::IsFull()
{
	return (top == stacksize);
}


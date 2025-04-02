//  ostack.cpp
//
//  Implementation of generic stack collection class
//  of Object pointers.  

#include <stdlib.h>
#include "trace.h"
#include "object.h"
#include "ostack.h"

OStack::OStack(long size) : Object("OStack")        
{
	Trace("OStack::OStack(long size)");
	stacksize = size;
	stack = new Object*[stacksize];
	if (stack == 0)
    {
        Trace("ERROR: Memory allocation error");
        exit(1);
    }
	top = 0;
	for (int i = 0; i < stacksize; ++i)
		stack[i] = 0;
}

OStack::~OStack()
{
	Trace("OStack::~OStack()");
	delete [] stack;
}

void OStack::Push(Object* x)
{
    if (IsFull())
    {
        Trace("ERROR: Stack is full");
        exit(1);
    }
    stack[top++] = x;
}

Object* OStack::Pop()
{
    if (IsEmpty())
    {
        Trace("ERROR: Stack is empty");
        exit(1);
    }
    return stack[--top];
}

void OStack::Print()
{
    for (int i=top-1; i>=0; --i)
        stack[i]->Dump();
}

int OStack::IsEmpty()
{
	return (top == 0);
}

int OStack::IsFull()
{
	return (top == stacksize);
}


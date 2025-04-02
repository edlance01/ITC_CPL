//  intstack.cpp
//
//  Implementation of Integer Stack class 

#include <stdlib.h>
#include "trace.h"
#include "intstack.h"

IntStack::IntStack(long size)        
{
	Trace("IntStack::IntStack(long size)");
	stacksize = size;
	stack = new int[stacksize];
	if (stack == 0)
    {
        Trace("ERROR: Memory allocation error");
        exit(1);
    }
	top = 0;
	for (int i = 0; i < stacksize; ++i)
		stack[i] = 0;
}

IntStack::~IntStack()
{
	Trace("IntStack::~IntStack()");
	delete [] stack;
}

void IntStack::Push(int x)
{
    if (IsFull())
    {
        Trace("ERROR: Stack is full");
        exit(1);
    }
    stack[top++] = x;
}

int IntStack::Pop()
{
    if (IsEmpty())
    {
        Trace("ERROR: Stack is empty");
        exit(1);
    }
    return stack[--top];
}

void IntStack::Print()
{
    for (int i=top-1; i>=0; --i)
        Trace(stack[i]);
}

int IntStack::IsEmpty()
{
	return (top == 0);
}

int IntStack::IsFull()
{
	return (top == stacksize);
}


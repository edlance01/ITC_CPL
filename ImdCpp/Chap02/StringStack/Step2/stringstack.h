//  StringStack.h
//
//  Specification of string Stack class

#ifndef _STRINGSTACK_H
#define	_STRINGSTACK_H

#include <string>

const int STACKSIZE = 5;

class StringStack              
{
public:
    StringStack(long size = STACKSIZE);  
	~StringStack();
    void Push(string x);
    string Pop();
    void Print();
	int IsEmpty();
	int IsFull();
private:
	long stacksize;			// size of stack
    string *stack;			// stack data
    long top;               // top of stack
};                          

#endif


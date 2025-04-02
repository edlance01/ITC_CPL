//  intstack.h
//
//  Specification of Integer Stack class

#ifndef _INTSTACK_H
#define	_INTSTACK_H

const int STACKSIZE = 5;

class IntStack              
{
public:
    IntStack(long size = STACKSIZE);  
	~IntStack();
    void Push(int x);
    int Pop();
    void Print();
	int IsEmpty();
	int IsFull();
private:
	long stacksize;			// size of stack
    int *stack;				// stack data
    long top;               // top of stack
};                          

#endif


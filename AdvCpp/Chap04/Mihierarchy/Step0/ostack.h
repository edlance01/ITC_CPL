//  ostack.h
//
//  Specification of generic stack class

#ifndef _OSTACK_H
#define	_OSTACK_H

const int STACKSIZE = 5;

class OStack : public Object              
{
public:
    OStack(long size = STACKSIZE);  
	~OStack();
    void Push(Object* x);
    Object* Pop();
    void Print();
	int IsEmpty();
	int IsFull();
private:
	long stacksize;			// size of stack
    Object **stack;			// stack data
    long top;               // top of stack
};                          

#endif


#include "intstack.h"

class IntList
{
public:
	IntList():stk(100){};
	IntList(int size):stk(size){};
	~IntList(){};
	void Add(int value) {stk.Push(value);}
	int Remove() {int ret; ret = stk.Pop(); return ret;}
private:
	IntStack stk;
};


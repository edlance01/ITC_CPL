#include "intstack.h"

class IntList : private IntStack
{
public:
	IntList():IntStack(100){};
	IntList(int size):IntStack(size){};
	~IntList(){};
	void Add(int value) {Push(value);}
	int Remove() {int ret; ret = Pop(); return ret;}
};


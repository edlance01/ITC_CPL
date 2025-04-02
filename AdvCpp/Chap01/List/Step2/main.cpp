
#include "intlist.h"

#include <iostream>
using namespace std;

int main()
{
	IntList x(40);

	x.Add(10);
	x.Add(12);
	x.Add(15);
//	x.Push(22);

	int y;

	y = x.Remove();
	cout << y << "  ";
	y = x.Remove();
	cout << y << "  ";
	y = x.Remove();
	cout << y << "   ";
//	y = x.Remove();
//	cout << y << "   ";

	cout << endl;
}


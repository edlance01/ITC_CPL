// castdemo.cpp

int main()
{
	long a;
	long* pa;
	short b;
	 
	b = (short) a;					// deprecated
	a = (long) pa;					// deprecated

	b = static_cast<short>(a);		// new syntax
//	a = static_cast<short>(pa);		// illegal
	a = reinterpret_cast<long>(pa);	// new syntax

	const int i = 0;
//	int *pi = &i;					// illegal
	int *pi = (int*) &i;			// deprecated
	*pi = 5;						// changed!

	int *qi = const_cast<int*>(&i);	// new syntax
	*qi = 10;						// changed again

	return 0;
}

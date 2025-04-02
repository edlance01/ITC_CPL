// Access.cpp 

#include <iostream>
using namespace std;

class A
{
public:
	int a;
	int foo() {c = 0; return a;}
protected:
	int b;
	int gar() {c = 1; return a;}
private:
	int c;
	int har() {return a;}
};

class B : public A
{
public:
	B(int p){a = p + 1; b = p + 2; z = p + 3; /* c = p + 4;*/}
	int bar() {return foo();}
//	int yar() {return har();}
	int zar() {return gar();}
	int z;
};

int main(int argc, char* argv[])
{
	int a = 0;
	int q = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;

	B b(3);

	a = b.z;
	cout << a << endl;

	q = b.bar();
	cout << q << endl;

	c = b.a;
	cout << c << endl;

	d = b.foo();
	cout << d << endl;

//	e = b.b;
//	f = b.gar();

//	g = b.c;
//	h = b.har();


	return 0;
}

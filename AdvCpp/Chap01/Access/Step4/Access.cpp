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
	B(int p){a = p + 1; b = p + 2; z = p + 3;}
	int bar() {return A::foo();}
	int zar() {return gar();}
	int foo(int p) {return a + 1;}
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

//	h = b.foo();
	h = b.foo(2);
	cout << h << endl;

	return 0;
}

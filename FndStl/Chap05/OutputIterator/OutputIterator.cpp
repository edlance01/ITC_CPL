// OutputIterator.cpp

#include <algorithm>
#include <list>
#include <iostream>
using namespace std;

const int SIZE = 5;
class Fraction
{
public:
	Fraction(int a = 0, int b = 1) : n(a), d(b) {}
	void print() { cout << n << "/" << d << endl; }
private:
	int n,d;
};

int main()
{
	int x[SIZE] = {2,4,6,8,10};
	int y[SIZE];
	copy(x , x + SIZE, y);
	for (int i = 0; i < SIZE; i++)
		cout << y[i] << " "<< " ";
	cout << endl;

	Fraction array[SIZE] = { Fraction(2,3),
			Fraction(3,4),  Fraction(4,5),
			Fraction(5,6),  Fraction(6,7) };
	Fraction newarray[SIZE];

	copy(array, array + SIZE, newarray);
	for (int i = 0; i < SIZE; i++)
			newarray[i].print();

	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int 	c[10];
    list<int> L(&a[0], &a[10]);

  	copy(L.begin(), L.end(),c);
    for (int i = 0; i < 10; i++)
		cout << c[i] << " ";
	cout << endl;
	return 0;
}

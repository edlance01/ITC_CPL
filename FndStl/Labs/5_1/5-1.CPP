//
//		Lab 5-1.cpp
//
#include <iostream>
#include <vector>
using namespace std;

// TODO
// Write a template function that inputs a reference to a vector.
// The function should return a vector iterator that points to
// the middle element. Use the formula (last-first)/2.

int main()
{
	int x[10] = { 0,10,20,30,40,50,60,70,80,90 };
	vector<int> v(x, x+ 10);
	// TODO
	// Write code to obtain the middle iterator and to
	// print out the middle element of the original array
	// and then the last half of the elements of the original array

	return 0;
}


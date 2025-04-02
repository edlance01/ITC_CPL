//
//		Solution 5-1.cpp
//
#include <iostream>
#include <vector>
using namespace std;

// TODO
// Write a template function that inputs a reference to a vector.
// The function should return a vector iterator that points to
// the middle element. Use the formula (last-first)/2.
template <class T>
typename vector<T>::iterator middle(vector<T>& v)
{
	typename vector<T>::iterator first = v.begin();
	typename vector<T>::iterator last = v.end();

	int mid = (v.end() - v.begin()) / 2;
	return v.begin() + mid;
}

int main()
{
	int x[10] = { 0,10,20,30,40,50,60,70,80,90 };
	vector<int> v(x, x+ 10);
	// TODO
	// Write code to obtain the middle iterator and to
	// print out the middle element of the original array
	// and then the last half of the elements of the original array

	vector<int>::iterator mid;
	mid = middle(v);
	cout << "The middle element is " << *mid << endl;
	cout << "The elements in last half are:" << endl;
	while(mid != v.end())
		cout << *mid++ << " " ;
	cout << endl;

	return 0;
}


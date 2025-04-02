//
//	Lab 3-1
//
//	Reverse a Vector by using the STL swap function which swaps
//	any two elements of the same type.
//
#include <iostream>
#include <vector>
using namespace std;

// TODO
// Write a template function to reverse elements in an STL vector
// using the STL swap function.
template<class T>
void reverse(vector<T> &v)
{
}

int main( )
{
	// Define a vector of ints and initialize it.
	vector<int> vector1;
	for (int i = 0; i < 10; i++)
	{
		// TODO
		// Initialize the vector with the values 0, 1, 2, ..., 9
	}
	
	// TODO
	// Write a loop to print out the vector contents.
	cout << "original vector of ints -> " << endl;
	
	// Reverse the elements in the vector.
	reverse(vector1);

	// TODO
	// Write a loop to print out the vector contents.
	cout  << "vector  of ints reversed -> " << endl;
	

	// TODO
	// Now call the STL reverse function to reverse the vector again.


	// TODO
	// Write a loop to print out the vector contents.
	cout << "original vector  of ints -> " << endl;


	vector<char> vector2;
	for (char ch = 'a'; ch < 'i'; ch++)
	{
		// TODO
		// Initialize the vector with the values a, b, c, ..., i
	}

	// TODO
	// Write a loop to print out the vector contents.
	cout << "original vector of chars -> " << endl;

	// Reverse the elements in the vector.
	reverse(vector2);

	// TODO
	// Write a loop to print out the vector contents.
	cout  << "vector  of chars reversed -> " << endl;
	
	// TODO
	// Now call the STL reverse function to reverse the vector again.


	// TODO
	// Write a loop to print out the vector contents.
	cout << "original vector  of chars -> " << endl;

	return 0;
}

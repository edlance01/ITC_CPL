//
//	Solution 3-1
//
//	Reverse a Vector by using the STL swap function which swaps
//	any two elements of the same type.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

// TODO
// Write a template function to reverse elements in an STL vector
// using the STL swap function.
template<class T>
void reverse(vector<T> &v)
{
	T temp;

	for (size_t i = 0; i < v.size() / 2; i++) {
		temp = v[i];
		v[i] = v[v.size() - i - 1];
		v[v.size() - i - 1] = temp;
	}
}

int main( )
{
	size_t i;

	// Define a vector of ints and initialize it.
	vector<int> vector1;
	for (i = 0; i < 10; i++)
	{
		// TODO
		// Initialize the vector with the values 0, 1, 2, ..., 9
		vector1.push_back(i);
	}
	
	// TODO
	// Write a loop to print out the vector contents.
	cout << "original vector of ints -> " << endl;
	for (i = 0; i < vector1.size(); i++) {
		cout << "vector1[" << i << "] = " << vector1[i] << endl;
	}
	
	// Reverse the elements in the vector.
	reverse(vector1);

	// TODO
	// Write a loop to print out the vector contents.
	cout  << "vector  of ints reversed -> " << endl;
	for (i = 0; i < vector1.size(); i++) {
		cout << "vector1[" << i << "] = " << vector1[i] << endl;
	}
	

	// TODO
	// Now call the STL reverse function to reverse the vector again.
	reverse(vector1.begin(), vector1.end());

	// TODO
	// Write a loop to print out the vector contents.
	cout << "original vector  of ints -> " << endl;
	for (i = 0; i < vector1.size(); i++) {
		cout << "vector1[" << i << "] = " << vector1[i] << endl;
	}

	char ch;
	vector<char> vector2;
	for (ch = 'a'; ch < 'i'; ch++)
	{
		// TODO
		// Initialize the vector with the values a, b, c, ..., i
		vector2.push_back(ch);
	}

	// TODO
	// Write a loop to print out the vector contents.
	cout << "original vector of chars -> " << endl;
	for (i = 0; i < vector2.size(); i++) {
		cout << "vector2[" << i << "] = " << vector2[i] << endl;
	}

	// Reverse the elements in the vector.
	reverse(vector2);

	// TODO
	// Write a loop to print out the vector contents.
	cout  << "vector  of chars reversed -> " << endl;
	for (i = 0; i < vector2.size(); i++) {
		cout << "vector2[" << i << "] = " << vector2[i] << endl;
	}
	
	// TODO
	// Now call the STL reverse function to reverse the vector again.
	reverse(vector2.begin(), vector2.end());


	// TODO
	// Write a loop to print out the vector contents.
	cout << "original vector  of chars -> " << endl;
	for (i = 0; i < vector2.size(); i++) {
		cout << "vector2[" << i << "] = " << vector2[i] << endl;
	}

	return 0;
}

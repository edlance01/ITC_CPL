//
//		Lab 4-1
//
//    Use two sets to order integers entered by the user.
//		End the input when the user enters the value 0.
//		One set should produce an ascending sequence
//		The other set should produce a descending sequence
//
#include <iostream>
#include <set>
using namespace std;

int main()
{

	// TODO
	// Declare an STL set to store ints in increasing order.
	// Also declare an set iterator for moving through the set.

	// TODO
	// Declare an STL set to store ints in decreasing order.
	// Also declare an set iterator for moving through the set.

	int number;
	cout << "enter integer, 0 to terminate: ";
	cin >> number;
	while (number != 0)
	{
		// TODO
		// Insert the number read into each set.

		cout << "enter integer, 0 to terminate: ";
		cin >> number;
	}

	// TODO
	// Now print out the set stored in increasing order.
	cout << "forward: ";

	// TODO
	// Now print out the set stored in decreasing order.
	cout << "backward: ";
}

//
//		Solution 4-2
//
//		Read some strings (say 5) from the user into
//		a List,then copy them into a Set in where they
//		are stored alphabetially.  Print them from the
//		set.
//
#include <iostream>
#include <string>
#include <list>
#include <set>
using namespace std;

int main()
{

	// TODO
	// Declare an STL list to hold strings.
	list<string> sLi;

	string word;
	for (int i = 0; i < 5; i++)
	{
		cout << "enter a string: ";
		cin >> word;

		// TODO
		// Put the word read in on the list.
		sLi.push_front(word);
	}

	// TODO
	// Declare a list iterator. Then create a loop
	// to print out the words on the list.
	list<string>::iterator iterLi;
	cout << "Words read in:" << endl;
	for (iterLi = sLi.begin(); iterLi != sLi.end(); iterLi++) 
	{
		cout << *iterLi << endl;
	}
	
	// TODO
	// Declare an STL set to hold strings.
	set<string> sSet;

	// TODO
	// Using the list iterator from above, create a loop
	// to insert all the words in the list into the set.
	for (iterLi = sLi.begin(); iterLi != sLi.end(); iterLi++) 
	{
		sSet.insert(*iterLi);
	}

	// TODO
	// Declare a set iterator. Then create a loop
	// to print out the words in the set.
	set<string>::iterator iterSet;
	cout << "Words from set:" << endl;
	for (iterSet = sSet.begin(); iterSet != sSet.end(); iterSet++) 
	{
		cout << *iterSet << endl;
	}

	return 0;
}

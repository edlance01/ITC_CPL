//
//		Solution 4-3
//
//		Maintain name and balance information in a map
//
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{

	string name;
	double amount;

	// TODO
	// Declare a map to store pairs of names and amounts.
	map<string, double> mAcct;

	// TODO
	// Create a loop to read in names and amounts.
	// Store each pair in the map, with the name as the key
	// and the amount as the value.
	cout << "Enter name and amount to store in map ('0 0' to end)" << endl;
	cout << ": ";
	cin >> name >> amount;
	while (name[0] != '0') 
	{
		//mAcct.insert(map<string, double>::value_type(name, amount));
		// or:
		mAcct[name] = amount;
		cout << ": ";
		cin >> name >> amount;
	}

	// TODO
	// Declare a map iterator. Use it in a loop thats
	// prints out all the name and amount pairs in the map.
	map<string, double>::iterator iter;
	for (iter = mAcct.begin(); iter != mAcct.end(); iter++) 
	{
		cout << iter->first << " " << iter->second << endl;
	}

	// TODO
	// Create a loop to read in names and look up the
	// corresponding amount
	cout << "Enter name ('0' to end)" << endl;
	cout << ": ";
	cin >> name;
	while (name[0] != '0') 
	{
		if (mAcct.find(name) == mAcct.end())
			cout << name << " not found" << endl;
		else
			cout << "amount = " << mAcct[name] << endl;
		cout << ": ";
		cin >> name;
	}

	return 0;
}


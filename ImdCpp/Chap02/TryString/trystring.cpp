// trystring.cpp

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string a = "bat";
	string b = "man";
	string c = a + b;
	cout << c << endl;
	cout << "length = " << c.length() << endl;
	return 0;
}

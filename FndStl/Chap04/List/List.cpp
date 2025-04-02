// List.cpp

#include <iostream>
#include <string>
#include <list>
using namespace std;
	
int main()
{
	list<string> text;
 	char buf[100];

	cout << "Enter a name to add (0 to end): ";
	cin >> buf;
 	while (*buf != '0') 
	{
		text.push_back( buf );
		cout << "Enter a name to add (0 to end): ";
		cin >> buf;
	}

	cout << "Enter a name to delete (0 to end): ";
	cin >> buf;
 	while (*buf != '0') 
	{
		list<string>::iterator j = text.begin();
		while(j != text.end()) 
		{
			if (*j++ == buf) 
			{
				text.erase(--j);
				cout << "found " << buf << endl;
				break;
			}
		}
		cout << "Enter a name to delete (0 to end): ";
		cin >> buf;
	}

	cout << "Final list:" << endl;
	list<string>::iterator i = text.begin();
	while ( i != text.end())
		cout << *i++ << endl;
	return 0;
}

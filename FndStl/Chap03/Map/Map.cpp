// Map.cpp

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main( )
{

	map<string, long, less<string> > directory;
	directory["Bogart"] = 1234567;
	directory["Bacall"] = 9876543;
	directory["Cagney"] = 3459876;

	char name[20];
	cout << "Type Ctrl+Z to exit" << endl;
	cout << "Please enter a name:   ";
	while (cin >> name) 
	{ 
		if(directory.find(name)!=directory.end())
		{ 
			cout<< "phone for " << name << ": ";
			cout<< directory[name] << "\n";
		}
		else
			cout<<"No listing: " << name << "\n";
		cout << "Please enter a name:   ";
	}	
	return 0;
}

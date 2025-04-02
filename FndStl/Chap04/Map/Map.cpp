// Map.cpp

//NOTE:  This program requires a file data.txt
//containing a sample paragraph.
#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

class counter 
{
public:
	 counter() : value(0) {}
	 void operator++(int){ value++; }
	 int value;
};

ostream& operator<<(ostream& s, counter& a )
{	
	 return s << a.value;
}

int main()
{
	 map<string, counter, less<string> > counts;

	 //Open file named data
	 ifstream input("data.txt");  // need err check
	 char word[80];

	 while(!input.eof())
	 {
		input >> word;
	    counts [ word ]++;
	 }
	 input.close();

	 map<string , counter, less<string> >::iterator i;
	 for ( i = counts.begin(); i != counts.end() ; i++) 
	 	cout << i->first << ", " << i->second << endl;
		
	 return 0;
}

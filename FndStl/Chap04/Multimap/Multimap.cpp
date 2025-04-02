// Multimap.cpp

//NOTE:  This program requires a file 
//containing a sample paragraph.
#pragma warning(disable: 4786)
#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
	using namespace std;
	//Open file named data.txt
	ifstream input("data.txt"); 	// needs err check
	char buf[100], wd[20], delims[]= ".\t !@#$"; //etc 
	int ln = 1, count = 0;
	multimap< string, int, less<string> > words;
	string word;
	
	while(input.getline(buf, 100)) 
	{
		cout << buf << endl;
		char *p = strtok(buf, delims);
		while (p != 0) 
		{
	  		strcpy(wd, p);
			word = wd;
			words.insert(pair<const string,int>(word, ln));
			p = strtok(NULL, delims);
			count++;
		}
		ln++;
	}
	multimap< string, int, less<string> >::iterator j;
	multimap< string, int, less<string> >::iterator k;
	j = words.begin();
	while(j != words.end()) 
	{
		k = words.upper_bound((*j).first );
		cout << (*j).first << ": ";
		while( j != k) 
			cout << (*j++).second << ", ";
		cout << endl;
	}
	cout << count << " words total" << endl;
	input.close();
	return 0;
}

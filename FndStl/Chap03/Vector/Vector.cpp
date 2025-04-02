// Vector.cpp

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<char> mv(char* s)
{
	vector<char> x;
  	while (*s != '\0')
	    x.push_back(*s++);
	return x;
}

int main( )
{
	vector<char> vector1 = mv("michael");
	reverse(vector1.begin( ), vector1.end( ));
	for (int i = 0; i < (signed) vector1.size(); i++)
	cout << vector1[i] << " ";
	cout << endl;
	return 0;
}

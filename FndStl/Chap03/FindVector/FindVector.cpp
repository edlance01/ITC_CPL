// FindVector.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	char* s = "C++ is a better C";
	int len = strlen(s);

	vector<char> v1(&s[0], &s[len]);
  	vector<char>::iterator where;

	where = find(v1.begin(), v1.end(), 'e');
	if ( where != v1.end())
		cout << "found the e\n";
	cout << endl;
	return 0;
}

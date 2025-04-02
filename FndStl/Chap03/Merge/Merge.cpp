// Merge.cpp

#include <iostream>
#include <algorithm>
using namespace std;

int main( )
{
	char* s = "adgh";
	int slen = strlen(s);
	char * t = "bcefi";
	int tlen = strlen(t);
	char res[10];

	merge(&s[0], s + slen, t, t + tlen, res);
	res[slen + tlen] = '\0';
	cout << res << endl;   // abcdefghi
	return 0;
}

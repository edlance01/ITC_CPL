// intstring.cpp

#include <string>
#include <iostream>
using namespace std;

int main()
{
	int alpha[] = {2, 3, 5};
	int beta[] = {7, 11, 13};
	basic_string<int> a(alpha, 3);
	basic_string<int> b(beta, 3);
	basic_string<int> c;
	c = a + b;
	cout << "length = " << c.length() << endl;
	for (int i = 0; i < c.length(); i++)
		cout << c[i] << endl;
	return 0;
}

// Iterator.cpp

#include <vector>
#include <iostream>
using namespace std;

int main() 
{
	vector <int> v(10);
	for (int i = 0; i < 10; i++) 
		v[i] = i;
	
	vector<int>::iterator it = v.begin();
	while (it != v.end()) 
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	return 0;
}

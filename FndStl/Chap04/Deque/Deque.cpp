// Deque.cpp

#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque <int> d;
	d.push_front(1);  // deque = 1
	d.push_back(2);   // deque = 1,2
	d.push_front(3);  // deque = 3,1,2
	d.push_back(4);   // deque = 3,1,2,4

	while(! d.empty()) 
	{
		cout << d.back() << " ";
		cout << d.front() << " ";
		d.pop_front();
		d.pop_back();
	}
	cout << endl;
	return 0;
}

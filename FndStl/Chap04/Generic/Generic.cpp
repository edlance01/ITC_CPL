// Generic.cpp

#include <iostream>
#include <deque>
#include <vector>
#include <list>
using namespace std;

template  <class TYPE>
void print(char * title, TYPE & data)
{
	cout << title << " " ;
	typename TYPE::iterator it;
	for (it = data.begin(); it != data.end(); it++)
		cout << *it << " ";
	cout << endl;
}

int main()
{
	// deque
	deque <int> D;
	for ( int i = 0; i < 4; i++)
	D.push_back(i);    

	// vector
	vector <int> V;
	for ( int i = 0; i < 4; i++)
		V.push_back(i);

	// list
	list <int> L;
	for ( int i = 0; i < 5; i++)
	
	L.push_back(i);
	print("printing a list", L);
	print("printing a vector",V);
	print("printing a deque", D);
	return 0;
}

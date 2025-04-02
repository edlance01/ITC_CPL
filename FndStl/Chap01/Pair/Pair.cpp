// Pair.cpp

#include <string>
#include <iostream>
#include "Fraction.h"

template <class L, class R> 
class Pair 
{
	public:
		Pair(const L & Left,const R & Right)
				: left_d(Left), right_d(Right) { }
		Pair() { }
		L getleft() const { return left_d; }
		void setleft(const L & clr){left_d = clr;}
		R getright() const { return right_d; }
		void setright(const R & crr){right_d=crr;}
	private:
		L left_d;
		R right_d;
};

int main( ) 
{
	using namespace std;
	string Name1("MERCK"), Name2("NETSCAPE");
	Fraction MRKPE(80,4), NETPE(35,2);  //PE's

	Pair <string, Fraction> pfolio[2];
	pfolio[0].setleft(Name1);
	pfolio[0].setright(MRKPE);
	pfolio[1].setleft(Name2);
	pfolio[1].setright(NETPE);
	for ( int i = 0; i < 2; i++) 
	{
		cout << pfolio[i].getleft( ) << endl;
		cout << pfolio[i].getright( ) << endl;  
	}
/*	if(Lookup(pfolio, 2, Name1) == -1)
		cout << Name1 << " not found\n";
	else
		cout << Name1 << " found\n";
*/
	return 0;
}

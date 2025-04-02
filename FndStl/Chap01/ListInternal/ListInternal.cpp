// ListInternal.cpp

#include <list>
#include <string>
#include <iostream>
using namespace std;

template <class T>
class ListWithString : public list<T>
{
public:
   ListWithString(string n, T *beg, T *end)
   : list<T>(beg, end), name(n)
   {}
   string getName() { return name; }
private:
   string name;
};

int main()
{
   int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
   ListWithString<int> L("Mylist", x, x + 10);

   cout << L.getName() << endl;

   list<int>::iterator begin = L.begin();
   list<int>::iterator end = L.end();

   while(begin != end)
      cout << *begin++ <<  " " << endl;
   return 0;
}

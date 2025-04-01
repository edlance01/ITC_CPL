//  testdynm.cpp
//
//  Interactive test program for dynamic creation and deletion
//  of StringStack objects.

#include <iostream>
#include <string>
using namespace std;
#include <stdlib.h>
#include "trace.h"
#include "IntStack.h"

int main()
{
    IntStack *ps = 0;           // pointer to stack object
    int      item;
    long        size;
    string      cmd;	        // command

    cout << ": ";               // prompt
    cin >> cmd;
    while (cmd != "quit")
    {
        if (cmd == "create")
        {
            cout << "size of new stack: ";
            cin >> size;
            ps = new IntStack(size);
			if (ps == NULL)
		    {
		        Trace("ERROR: Memory allocation error");
				exit(1);
			}
        }
        else if (cmd == "destroy")
		{
            delete ps;
			ps = NULL;
		}
        else if (cmd == "push")
        {
			if (ps != NULL)
			{
	            if (ps->IsFull())
		            cout << "Stack is full\n";
			    else
				{
					cout << "push item: ";
	                cin >> item;
		            ps->Push(item);
			    }
			}
        }
        else if (cmd == "pop")
        {
			if (ps != NULL)
			{
	            if (ps->IsEmpty())
		            cout << "Stack is empty\n";
			    else
				{
					item = ps->Pop();
	                cout << "popped item = " << item << '\n';
		        }
			}
        }
        else if (cmd == "print")
		{
			if (ps != NULL)
				ps->Print();
		}
        else
        {
            cout << "legal commands are:\n";
            cout << "\tcreate\n"
                << "\tdestroy\n"
                << "\tpush\n"
                << "\tpop\n"
                << "\tprint\n"
                << "\tquit\n";
        }
        cout << ": ";
        cin >> cmd;
    }
	return 0;
}

//  testdynm.cpp
//
//  Interactive test program for dynamic creation and deletion
//  of IntStack objects.

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "trace.h"
#include "intstack.h"

int main()
{
	using namespace std;
	
    IntStack    *ps = 0;        // pointer to stack object
    int         item;
    long        size;
    char        cmd[80];        // command

    cout << ": ";               // prompt
    cin >> cmd;
    while (strcmp(cmd, "quit") != 0)
    {
        if (strcmp(cmd, "create") == 0)
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
        else if (strcmp(cmd, "destroy") == 0)
		{
            delete ps;
			ps = NULL;
		}
        else if (strcmp(cmd, "push") == 0)
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
        else if (strcmp(cmd, "pop") == 0)
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
        else if (strcmp(cmd, "print") == 0)
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

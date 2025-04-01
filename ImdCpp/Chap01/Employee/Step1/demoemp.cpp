//  demoemp.cpp
//
//  Demo program for Employee classes

#include "trace.h"
#include "employee.h"

int main()
{
	SalaryEmployee sally("Sally", 500);
	WageEmployee wally("Wally", 40, 10);
	
	Trace("Sally's name = ", sally.GetName());
	Trace("Sally's salary = ", sally.GetSalary());
	Trace("Wally's name = ", wally.GetName());
	Trace("Wally's hours = ", wally.GetHours());
	Trace("Wally's wage = ", wally.GetWage());
	return 0;
}


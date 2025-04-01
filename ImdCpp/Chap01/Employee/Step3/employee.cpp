// employee.cpp

#include "employee.h"

Employee::Employee(const char *name) : m_name(name) 
{
	Trace("Employee::Employee(const char*)"); 
}

Employee::~Employee() 
{
	Trace("Employee::~Employee()");
}

SalaryEmployee::SalaryEmployee(const char *name, int salary) 
	: Employee(name), m_salary(salary) 
{
	Trace("SalaryEmployee::SalaryEmployee(const char *, int)");
}

SalaryEmployee::~SalaryEmployee()
{
	Trace("SalaryEmployee::~SalaryEmployee()");
}

int SalaryEmployee::GetPay()
{
	return m_salary;
}

WageEmployee::WageEmployee(const char* name, int hours, int wage) 
	: Employee(name), m_hours(hours), m_wage(wage) 
{
	Trace("WageEmployee::WageEmployee(const char*,int,int)");
}

WageEmployee::~WageEmployee()
{
	Trace("WageEmployee::~WageEmployee()");
}

int WageEmployee::GetPay()
{
	return m_hours * m_wage;
}

SalesEmployee::SalesEmployee(const char* name, int commission, int sales)
	: Employee(name), m_commission(commission), m_sales(sales)
{
	Trace("SalesEmployee::SalesEmployee(const char*, int, int");
}

SalesEmployee::~SalesEmployee()
{
	Trace("SalesEmployee::~SalesEmployee()");
}


/* 
Rounding - This works because if the decimal part of the unrounded result is 0.5 
or greater, adding 50 will cause the integer division to round up. if the decimal 
is less than 0.5, the addition will have no effect on the integer part of the division.
*/
int SalesEmployee::GetPay()
{
	return (m_sales * m_commission + 50) / 100;
}

// employee.cpp

#include "trace.h"
#include "employee.h"

Employee::Employee(const char *name) : m_name(name) 
{
	Trace("Employee::Employee(const char*)"); 
}

Employee::~Employee() 
{
	Trace("Employee::~Employee()");
}

OEmployee::OEmployee(const char *name, const char* className)
	: Object(className) , Employee(name)
{
	Trace("OEmployee::OEmployee(const char*)"); 
}

OEmployee::~OEmployee() 
{
	Trace("OEmployee::~OEmployee()");
}

SalaryEmployee::SalaryEmployee(const char *name, int salary) 
	: OEmployee(name, "SalaryEmployee"), m_salary(salary)
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
	: OEmployee(name, "WageEmployee"), m_hours(hours), m_wage(wage)
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

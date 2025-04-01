// employee.cpp

#include "employee.h"

Employee::Employee(const char *name) : m_name(name) 
{
	Trace("Employee::Employee(const char*)"); 
}

Employee::~Employee() 
{
	Trace("Employee::~Employee()");
	std:cout << "Employee::~Employee CALLED for object at " << this << std::endl;
}

SalaryEmployee::SalaryEmployee(const char *name, int salary) 
	: Employee(name), m_salary(salary) 
{
	Trace("SalaryEmployee::SalaryEmployee(const char *, int)");
	
}

SalaryEmployee::~SalaryEmployee()
{
	Trace("SalaryEmployee::~SalaryEmployee()");
	std::cout << "SalaryEmployee::~SalaryEmployee() CALLED for object at " << this << std::endl;
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
	std::cout << "WageEmployee::~WageEmployee() CALLED for object at " << this << std::endl;
}

int WageEmployee::GetPay()
{
	return m_hours * m_wage;
}

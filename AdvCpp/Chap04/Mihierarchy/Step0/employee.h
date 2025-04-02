// employee.h
//
// Employee class using OString for embedded name object

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include "trace.h"
#include "ostrn.h"
#include "object.h"

class Employee
{
public:
	Employee(const char *name = ""); 
	virtual ~Employee(); 
	void SetName(const char *name) 
		{ m_name = name;}
	const char* GetName() const {return m_name;}
	virtual int GetPay() = 0;
private:
	OString m_name;
};

class SalaryEmployee : public Employee
{
public:
	SalaryEmployee(const char *name = "", 
		int salary = 0); 
	~SalaryEmployee();
	int GetPay();
private:
	int m_salary;
};
						
class WageEmployee : public Employee
{   
public:
    WageEmployee(const char* name = "", 
		int hours = 0, int wage = 0);
	~WageEmployee();
	int GetPay();
private:
    int m_hours;
    int m_wage;
};

#endif

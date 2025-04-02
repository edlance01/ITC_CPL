//  colldemo.cpp
//
//  Demo program for stack collection class 

#include "object.h"
#include "ostrn.h"
#include "ostack.h"
#include "employee.h"
#include <typeinfo.h>

void PayReport(OStack* pStack)
{
	Trace("----------------------------------------");
	int nWage = 0, nSalary = 0;
	while (!pStack->IsEmpty())
	{
		Object* pObj = pStack->Pop();
		const type_info& id = typeid(*pObj);
		Trace(id.name());
		OEmployee* pEmp = dynamic_cast<OEmployee*>(pObj);
		if (pEmp != 0)
		{
			if (id == typeid(WageEmployee))
				++nWage;
			else if (id == typeid(SalaryEmployee))
				++nSalary;
			Trace(pEmp->GetName(),"   ", pEmp->GetPay());
		}
	}
	Trace("nWage = ", nWage);
	Trace("nSalary = ", nSalary);
	Trace("----------------------------------------");
}

int main()
{
	Object aObject;
	OString aString("I am a String");
	OStack stack;
	SalaryEmployee sally("Sally", 500);
	WageEmployee wally("Wally", 40, 10);
	SalaryEmployee sue("Sue", 1000);

//	stack.Push(&aObject);
	stack.Push(&aString);
	stack.Push(&stack);
	stack.Push(&sally);
	stack.Push(&wally);
	stack.Push(&sue);

	stack.Print();

	PayReport(&stack);

	return 0;
}

//  colldemo.cpp
//
//  Demo program for stack collection class 

#include "object.h"
#include "ostrn.h"
#include "ostack.h"
#include "employee.h"
#include <typeinfo>

void PayReport(OStack* pStack)
{
	Trace("----------------------------------------");
	while (!pStack->IsEmpty())
	{
		OEmployee* pEmp = (OEmployee*) pStack->Pop();
		const type_info& id = typeid(*pEmp);
		Trace(id.name());
		if ((id == typeid(WageEmployee)) || 
			(id == typeid(SalaryEmployee)))
			Trace(pEmp->GetName(),"   ", pEmp->GetPay());
	}
	Trace("----------------------------------------");
}

int main()
{
	Object aObject;
	OString aString("I am a String");
	OStack stack;
	SalaryEmployee sally("Sally", 500);
	WageEmployee wally("Wally", 40, 10);

	stack.Push(&aObject);
	stack.Push(&aString);
	stack.Push(&stack);
	stack.Push(&sally);
	stack.Push(&wally);

	stack.Print();

	PayReport(&stack);

	return 0;
}

// templateoperate.cpp
#include <iostream>
using namespace std;

class Employee
{
public:
	Employee(): m_salary(1000), m_evaluationRank(++counter){};
	void RaiseSalary(long raise) {m_salary += raise;}
	long GetSalary(void){ return m_salary;}
	long GetEvaluationRank(void){ return m_evaluationRank;}
	static void Raise(Employee* pEmp) 
	{
		pEmp->RaiseSalary(
			pEmp->GetEvaluationRank() * 200);
	}
	static long counter;
private:
	long m_salary;
	long m_evaluationRank;
};

long Employee::counter = 0;

void Operate(long* value)
{
	*value = *value + 1;
}

template <class T, class F> void transform(T* start, T* end, F func)
{
	T* current;
	current = start;
	while (current != end)
	{
		func(current);
		current++;
	}
}

int main()
{
	long x[5] = { 1, 3, 4, 2, 5};
	for (int i = 0; i < 5; i++)
		cout << x[i] << endl;
	
	transform(&x[0], &x[5], Operate);
	for (int i = 0; i < 5; i++)
		cout << x[i] << endl;

	Employee EmpList[5];
	for (int i = 0; i < 5; i++)
		EmpList[i].RaiseSalary(i * 2000);

	for (int i = 0; i < 5; i++)
		cout << i << "  " << EmpList[i].GetSalary() << endl;

	transform(&EmpList[0], &EmpList[5], Employee::Raise);
	for (int i = 0; i < 5; i++)
		cout << i << "  " << EmpList[i].GetSalary() << endl;
}

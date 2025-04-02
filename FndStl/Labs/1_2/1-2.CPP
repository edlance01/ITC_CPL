//
//	Lab 1-2
//
//	Write the code which realizes
//
//	Array < Stack<int> > ASI(10);
//

#include <iostream>
using namespace std;

template <class T>
class Array {
private:
	T *elements;
	int size;
public:
	Array(int no_elements = 10);
	~Array();                  
	T & operator[ ] (int index);
	int dimension() const;     
	int operator==(const Array<T> & a);
	Array <T> & operator=(const Array & a);
};

template <class T>
int Array<T>::operator==(const Array<T> & a)
{
	for (int i = 0; i < size; i++)
		if( elements[i] != a.elements[i] )
			return 0;
	return 1;
}

template <class T>
T & Array<T>::operator[](int position)
{
	return elements[position];
}

template < class T>
Array <T>::Array(int number)
{
	elements = new T[size = number];
}

template <class T>
int Array<T>::dimension() const
{
	return size;
}

template <class T>
Array<T>::~Array()
{
	delete [ ] elements;
}

template <class T>
class Stack {
private:
	T *elements;
	int sp;
	int size;
public:
	Stack(int no_elements = 10);
	Stack(const Stack & a);
	~Stack();
	void push(T & val);	
	T pop();			
	int operator==(const Stack<T> & csr);
	int operator!=(const Stack<T> & csr);
};

template < class T>
int Stack<T>::operator!=(const Stack<T> & csr)
{
	return ! (*this == csr);
}

template < class T>
int Stack<T>::operator==(const Stack<T> & csr)
{
	if ( sp != csr.sp)
		return 0;
	for (int i = 0; i < sp; i++)
		if(elements[i] != csr.elements[i] )
			return 0;
	return 1;
}

template < class T>
Stack<T>::Stack(int number)
{
	elements = new T[size = number];
	sp = 0;
}

template <class T>
Stack<T>::~Stack()
{
	delete [ ] elements;
}

template <class T>
void Stack<T>::push(T & value)
{
	elements[sp++] = value;
}

template <class T>
T Stack<T>::pop()
{
	return elements[--sp];
}

// TO DO:
// Write a test program that will instantiate an array of 10 int stacks
// and perform following operations:
//		fill up the 0th stack
//		fill up the 1st stack
//		test if these two stacks are =
//		pop and display elements from 0th stack
//		pop and display elements from 1st stack

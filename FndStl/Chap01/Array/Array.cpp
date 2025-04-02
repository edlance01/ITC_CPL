// Array.cpp

#include <iostream>

template < class T >	// T is the type parameter 
class Array 
{	
public:
	Array(int);
	Array(const Array & a);
//	~Array( );
	T & operator[](int index);
	int dimension( ) const;
//	int operator==(const Array & a);
//  Array<T> & operator=(const Array & a);
private:
	T *elements;
	int size;
};

template <class T> 
T & Array<T>::operator[](int index)
{
	return elements[index];
}

template <class T> 
int Array<T>::dimension() const
{
	return size;
}

template <class T> 
Array<T>::Array(int number)
{
	elements = new T[size = number];
}

int main()
{
	using namespace std;
//	An array of 10 integers
//	<int> 	is the parameterized type

	Array <int> IArray(10);

//	An array of 10 doubles
//	<double> 	is the parameterized type

	Array <double> DArray(10);

	for(int i=0; i < IArray.dimension(); i++)
		cout << IArray[i] << endl;
	return 0;
}

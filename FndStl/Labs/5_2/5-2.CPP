//
//		Lab 5-2
//
//		Write an ListIterator class that knows how to traverse
//		the list class below.

#include <iostream>
using namespace std;

template<typename U> class ListIterator;   // makes everyone happy,  but really should be in List

template <class T>
class List 
{
public:
//	template<typename U> class ListIterator;	// best place to put it, but gives VC6 a migraine
	friend class ListIterator<T>;

	struct Item 
	{
		Item (T value)
		: data(value), next(0) { }
		T data;
		Item *next;
	};
	Item *head;
	Item *tail;
	unsigned long howmany;
public:
	List();
	~List();
	unsigned long length() const;
	T operator[](int position) const;
	void insert(T NewElement);
};

template <class T> List<T>::List()
: head(0), tail(0), howmany(0)
{
	cout << "List Constructor\n";
}

template <class T> unsigned long List<T>::length() const
{
	return howmany;
}

template <class T> T List<T>::operator[](int position) const
{
	Item *ptr;
	for ( ptr = head; position > 0; position--)
		ptr = ptr -> next;
	return ptr -> data;
}

template <class T> List<T>::~List()
{
	Item *scan = head;
	Item *deleted;

	while( scan != 0 ) 
	{
		deleted = scan;
		scan = scan -> next;
		delete deleted;
	}
}

template <class T> void List<T>::insert(T NewElement)
{
	Item *newItem = new Item(NewElement);
	if ( head == 0)
		head = tail = newItem;
	else 
	{
		newItem -> next = head;
		head = newItem;
	}
	howmany++;
}

// TODO
// Define template ListIterator class 
//		Provide functions
//
//      ListIteratator(List)    constructor
//		operator++(int);		returns the current node and
//									advances the pointer to the next
//		reset()					sets the Iterator List's beginning
//								(implemented inline)
								

// TODO
// Implement the constructor to initialize currentItem


// TODO
// Implement operator++


int main()
{
	List <int> x;
	int i;
	
	for ( i = 1; i <= 5; i++)
		x.insert(i);
	for ( size_t i = 0; i < x.length(); i++)
		cout <<  x[i] << " ";
	cout << endl;

	ListIterator<int> LI(x);
	int element;

	for (i = 0; (element = LI++) != 0 ; i++)
		cout << element << " ";
	cout << endl;

	LI.reset();
	for (i = 0; (element = LI++) != 0 ; i++)
		cout << element << " ";
	cout << endl;

	return 0;
}


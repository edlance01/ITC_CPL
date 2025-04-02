template <class T> class SmartPointer
{
public:
	SmartPointer(T* ptr = 0);
	~SmartPointer();
	SmartPointer(const SmartPointer& s);
	SmartPointer& operator=(const SmartPointer& s);
	T* operator->() const {return m_ptr;};
	T& operator*() const {return *m_ptr;};
private:
	T* m_ptr;
};

template <class T> SmartPointer<T>::~SmartPointer()
{
}

template <class T> SmartPointer<T>::SmartPointer(T* ptr)
{
	m_ptr = ptr;
}

template <class T> SmartPointer<T>::SmartPointer(const SmartPointer& s)
{
	m_ptr = s.m_ptr;
}

template <class T>SmartPointer<T>& SmartPointer<T>::operator=(const SmartPointer& s)
{
	if (this != &s)
		m_ptr = s.m_ptr;

	return *this;
}







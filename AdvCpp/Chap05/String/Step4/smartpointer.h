template <class T> class SmartPointer
{
public:
	SmartPointer(T* ptr = 0);
	SmartPointer(const SmartPointer& sp);
	~SmartPointer();
	SmartPointer& operator=(const SmartPointer& sp);
	T* operator->() const {return m_ptr;};
	T& operator*() const {return *m_ptr;};
private:
	T* m_ptr;
};

template <class T> SmartPointer<T>::~SmartPointer()
{
	if (m_ptr)
		m_ptr->decrement();

};

template <class T> SmartPointer<T>::SmartPointer(T* ptr)
{
	m_ptr = ptr;
	if (ptr)
		m_ptr->increment();
};

template <class T> SmartPointer<T>::SmartPointer(const SmartPointer& sp)
{
	m_ptr = sp.m_ptr;
	if (m_ptr)
		m_ptr->increment();
}

template <class T> SmartPointer<T>& SmartPointer<T>::operator=(const SmartPointer& sp)
{
	if (m_ptr != sp.m_ptr)
	{
		if (m_ptr)
			m_ptr->decrement();

		m_ptr = sp.m_ptr;
		if (m_ptr)
			m_ptr->increment();
	}

	return *this;
}


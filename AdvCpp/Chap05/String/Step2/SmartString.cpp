#include "strn.h"
#include "trace.h"

SmartString::SmartString(const char* str)
{
	m_ptr = new String(str);
	if (m_ptr)
		m_ptr->increment();
}

SmartString::SmartString(const SmartString& sstr) : m_ptr(sstr.m_ptr)
{
	if (m_ptr)
		m_ptr->increment();
}

SmartString::~SmartString()
{
	Trace("smart string destructor");
	if (m_ptr)
		m_ptr->decrement();
}

SmartString::operator const char* () const
{
	Trace("smart string operator const char* () const");
    return (const char *)(*m_ptr);
}

const SmartString& SmartString::operator=(const SmartString& sstr)
{
	if (m_ptr != sstr.m_ptr)
	{
		if (m_ptr)
			m_ptr->decrement();

		m_ptr = sstr.m_ptr;
		if (m_ptr)
			m_ptr->increment();
	}

	return *this;
}

//  ostrn.cpp
//
//  Implementation of OString class

#include <string.h>
#include "trace.h"
#include "ostrn.h"

OString::OString(const char *str)
{
	Trace("OString::OString(const char *str)");
    m_length = strlen(str);
    m_str = new char[m_length + 1];
    strcpy(m_str, str);
}

OString::OString(const OString& s)
{
	Trace("OString::OString(const OString& s)");
    m_length = s.m_length;
    m_str = new char[m_length + 1];
    strcpy(m_str, s.m_str);
}

OString::~OString()
{
	Trace("OString::~OString()");
    delete [] m_str;
}

OString OString::operator=(const char *str)
{
	Trace("operator=(const char *str)");
    delete [] m_str;
    m_length = strlen(str);
    m_str = new char[m_length + 1];
    strcpy(m_str, str);
	return *this;
}

OString& OString::operator=(const OString& s)
{
	Trace("operator=(const OString& s)");
	if (this == &s)		// special case s = s
		return *this;
	m_length = s.m_length;
    delete [] m_str;
    m_str = new char[m_length + 1];
    strcpy(m_str, s.m_str);
	return *this;
}

OString::operator const char* () const
{
//	Trace("operator const char* () const");
    return m_str;
}

OString OString::operator+(const OString& s)
{
	char *buf = new char[m_length + s.m_length + 1];
	strcpy(buf, m_str);
	strcat(buf, s.m_str);
	OString temp(buf);
	delete buf;
	return temp;
}

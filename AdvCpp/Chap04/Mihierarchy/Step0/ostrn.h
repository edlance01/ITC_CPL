//  ostrn.h
//
//  Specification of OString class (derived from Object)

#ifndef _OSTRN_H
#define _OSTRN_H

#include "object.h"

class OString : public Object
{
public:
	OString(const char *str = "");
	OString(const OString& s);
	~OString();
	OString operator=(const char *str);
	OString& operator=(const OString& s);
	operator const char* () const;
	OString operator+(const OString& str);
private:
	char *m_str;
	int m_length;
};

#endif


//  strn.h
//
//  Specification of String class

#ifndef _STRN_H
#define _STRN_H

class String
{
public:
	String(const char *str = "");
	String(const String& s);
	~String();
	int length() {return m_length;}
	String operator=(const char *str);
	String& operator=(const String& s);
	operator const char* () const;
	String operator+(const String& str);
private:
	char *m_str;
	int m_length;
};

class SmartString
{
public:
	SmartString(const char* str = "") {m_ptr = new String(str);}
	String* operator->() const {return m_ptr;}
	operator String*() const {return m_ptr;}
private:
	String* m_ptr;
};

#endif


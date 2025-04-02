//  strn.h
//
//  Specification of String class

#ifndef _STRN_H
#define _STRN_H

class String
{
public:
	String(const char *str = "");
//	String(const String& s);
	~String();
	int length() {return m_length;}
//	String operator=(const char *str);
//	String& operator=(const String& s);
	operator const char* () const;
	String operator+(const String& str);
	void increment();
	void decrement();
private:
	char *m_str;
	int m_length;
	int m_ref_count;
};

class SmartString
{
public:
	SmartString(const char* = "");
	SmartString(const SmartString&);
	~SmartString();
	operator const char*() const;
	const SmartString& operator=(const SmartString&);
	String* operator->() const {return m_ptr;}
	operator String*() const {return m_ptr;}
private:
	String* m_ptr;
};

#endif


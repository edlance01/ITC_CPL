// object.h

#ifndef _OBJECT_H
#define _OBJECT_H

#include "trace.h"

class Object
{
public:
	Object(const char* name = "Object");
	virtual void Dump();
private:
	enum {CLASSLEN = 20, DUMPLEN = 40};
	char m_className[CLASSLEN];
};

#endif

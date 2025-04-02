// object.cpp

#include <string.h>
#include <stdio.h>
#include "trace.h"
#include "object.h"

Object::Object(const char* name)
{
	strcpy(m_className, name);
}

void Object::Dump() 
{
	char buf[DUMPLEN];
	sprintf(buf, "An %s at %p", m_className, (void*) this);
	Trace(buf);
}

// object.cpp

#include <string.h>
#include <stdio.h>
#include "trace.h"
#include "object.h"

Object::Object(const char* name)
{
	strcpy(m_name, name);
}

void Object::Dump() 
{
	char buf[DUMPLEN];
	sprintf(buf, "An %s at %p", m_name, (void*) this);
	Trace(buf);
}

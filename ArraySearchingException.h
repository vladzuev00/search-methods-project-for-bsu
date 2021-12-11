#ifndef ARRAYSEARCHINGEXCEPTION_H
#define ARRAYSEARCHINGEXCEPTION_H

#include "ArrayException.h"

//***********************************************************************************
class ArraySearchingException : public ArrayException
{
public:
	ArraySearchingException();
	ArraySearchingException(const string &description);
	ArraySearchingException(Exception * const cause);
	ArraySearchingException(const string &description,
		Exception * const cause);
public:
	virtual ~ArraySearchingException() override;
};
//***********************************************************************************

#endif ARRAYSEARCHINGEXCEPTION_H
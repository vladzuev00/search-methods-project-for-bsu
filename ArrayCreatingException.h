#ifndef ARRAYCREATINGEXCEPTION_H
#define ARRAYCREATINGEXCEPTION_H

#include "ArrayException.h"

//*****************************************************************************
class ArrayCreatingException : public ArrayException
{
public:
	ArrayCreatingException();
	ArrayCreatingException(const string &description);
	ArrayCreatingException(Exception * const cause);
	ArrayCreatingException(const string &description,
		Exception * const cause);
public:
	virtual ~ArrayCreatingException() override;
};
//*****************************************************************************

#endif ARRAYCREATINGEXCEPTION_H
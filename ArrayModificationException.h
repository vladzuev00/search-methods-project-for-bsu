#ifndef ARRAYMODIFICATIONEXCEPTION_H
#define ARRAYMODIFICATIONEXCEPTION_H

#include "ArrayException.h"

//**********************************************************************
class ArrayModificationException : public ArrayException
{
public:
	ArrayModificationException();
	ArrayModificationException(const string &description);
	ArrayModificationException(Exception * const cause);
	ArrayModificationException(const string &description,
		Exception * const cause);
public:
	virtual ~ArrayModificationException() override;
};
//**********************************************************************

#endif ARRAYMODIFICATIONEXCEPTION_H
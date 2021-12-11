#ifndef ARRAYEXCEPTION_H
#define ARRAYEXCEPTION_H

#include "Exception.h"

//*****************************************************************************
class ArrayException : public Exception
{
public:
	ArrayException();
	ArrayException(const string &description);
	ArrayException(Exception * const cause);
	ArrayException(const string &description,
		Exception * const cause);
public:
	virtual ~ArrayException() override;
};
//*****************************************************************************

#endif ARRAYEXCEPTION_H
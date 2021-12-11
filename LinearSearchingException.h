#ifndef LINEARSEARCHINGEXCEPTION_H
#define LINEARSEARCHINGEXCEPTION_H

#include "SearchingException.h"

//*************************************************************************
class LinearSearchingException : public SearchingException
{
public:
	LinearSearchingException();
	LinearSearchingException(const string &description);
	LinearSearchingException(Exception * const cause);
	LinearSearchingException(const string &description,
		Exception * const cause);
public:
	virtual ~LinearSearchingException() override;
};
//*************************************************************************

#endif LINEARSEARCHINGEXCEPTION_H
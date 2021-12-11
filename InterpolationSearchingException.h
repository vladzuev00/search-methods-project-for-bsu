#ifndef INTERPOLATIONSEARCHINGEXCEPTION_H
#define INTERPOLATIONSEARCHINGEXCEPTION_H

#include "SearchingException.h"

//****************************************************************
class InterpolationSearchingException : public SearchingException
{
public:
	InterpolationSearchingException();
	InterpolationSearchingException(const string &description);
	InterpolationSearchingException(Exception * const cause);
	InterpolationSearchingException(const string &description,
		Exception * const cause);
public:
	virtual ~InterpolationSearchingException() override;
};
//****************************************************************

#endif INTERPOLATIONSEARCHINGEXCEPTION_H
#ifndef SEARCHINGEXCEPTION_H
#define SEARCHINGEXCEPTION_H

#include "Exception.h"

//*******************************************************************
class SearchingException : public Exception
{
public:
	SearchingException();
	SearchingException(const string &description);
	SearchingException(Exception * const cause);
	SearchingException(const string &description, Exception * const cause);
public:
	virtual ~SearchingException() override;
};
//*******************************************************************

#endif SEARCHINGEXCEPTION_H
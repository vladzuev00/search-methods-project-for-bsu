#ifndef BINARYSEARCHINGELEMENTEXCEPTION_H
#define BINARYSEARCHINGELEMENTEXCEPTION_H

#include "SearchingException.h"

//****************************************************************
class BinarySearchingElementException : public SearchingException
{
public:
	BinarySearchingElementException();
	BinarySearchingElementException(const string &description);
	BinarySearchingElementException(Exception * const cause);
	BinarySearchingElementException(const string &description,
		Exception * const cause);
public:
	virtual ~BinarySearchingElementException() override;
};
//****************************************************************

#endif BINARYSEARCHINGELEMENTEXCEPTION_H
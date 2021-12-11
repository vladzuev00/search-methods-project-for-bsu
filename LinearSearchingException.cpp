#include "stdafx.h"
#include "LinearSearchingException.h"

//*************************************************************************
LinearSearchingException::LinearSearchingException() 
	: SearchingException::SearchingException()
{

}
//*************************************************************************
LinearSearchingException::LinearSearchingException(const string &description)
	: SearchingException::SearchingException(description)
{

}
//*************************************************************************
LinearSearchingException::LinearSearchingException(Exception * const cause)
	: SearchingException::SearchingException(cause)
{

}
//*************************************************************************
LinearSearchingException::LinearSearchingException(const string &description,
	Exception * const cause)
	: SearchingException::SearchingException(description, cause)
{

}
//*************************************************************************
LinearSearchingException::~LinearSearchingException()
{

}
//*************************************************************************
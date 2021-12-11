#include "stdafx.h"
#include "SearchingException.h"

//*******************************************************************
SearchingException::SearchingException() : Exception::Exception()
{

}
//*******************************************************************
SearchingException::SearchingException(const string &description) 
	: Exception::Exception(description)
{

}
//*******************************************************************
SearchingException::SearchingException(Exception * const cause)
	: Exception::Exception(cause)
{

}
//*******************************************************************
SearchingException::SearchingException(const string &description,
	Exception * const cause)
	: Exception::Exception(description, cause)
{

}
//*******************************************************************
SearchingException::~SearchingException()
{

}
//*******************************************************************
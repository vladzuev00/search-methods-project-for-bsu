#include "stdafx.h"
#include "ArrayException.h"

//*****************************************************************************
ArrayException::ArrayException() : Exception::Exception()
{

}
//*****************************************************************************
ArrayException::ArrayException(const string &description)
	: Exception::Exception(description) 
{

}
//*****************************************************************************
ArrayException::ArrayException(Exception * const cause) 
	: Exception::Exception(cause)
{

}
//*****************************************************************************
ArrayException::ArrayException(const string &description, Exception * const cause) 
	: Exception::Exception(description, cause)
{

}
//*****************************************************************************
ArrayException::~ArrayException()
{

}
//*****************************************************************************
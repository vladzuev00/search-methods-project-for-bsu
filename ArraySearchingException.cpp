#include "stdafx.h"
#include "ArraySearchingException.h"

//***********************************************************************************
ArraySearchingException::ArraySearchingException() 
	: ArrayException::ArrayException()
{

}
//***********************************************************************************
ArraySearchingException::ArraySearchingException(const string &description)
	: ArrayException::ArrayException(description)
{

}
//***********************************************************************************
ArraySearchingException::ArraySearchingException(Exception * const cause)
	: ArrayException::ArrayException(cause)
{

}
//***********************************************************************************
ArraySearchingException::ArraySearchingException(const string &description,
	Exception * const cause)
	: ArrayException::ArrayException(description, cause)
{

}
//***********************************************************************************
ArraySearchingException::~ArraySearchingException()
{

}
//***********************************************************************************
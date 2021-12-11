#include "stdafx.h"
#include "ArrayCreatingException.h"

//*****************************************************************************
ArrayCreatingException::ArrayCreatingException() : ArrayException::ArrayException()
{

}
//*****************************************************************************
ArrayCreatingException::ArrayCreatingException(const string &description) 
	: ArrayException::ArrayException(description)
{

}
//*****************************************************************************
ArrayCreatingException::ArrayCreatingException(Exception * const cause) 
	: ArrayException::ArrayException(cause)
{

}
//*****************************************************************************
ArrayCreatingException::ArrayCreatingException(const string &description,
	Exception * const cause) 
	: ArrayException::ArrayException(description, cause)
{

}
//*****************************************************************************
ArrayCreatingException::~ArrayCreatingException()
{

}
//*****************************************************************************
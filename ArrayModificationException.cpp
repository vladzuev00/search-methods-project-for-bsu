#include "stdafx.h"
#include "ArrayModificationException.h"

//**********************************************************************
ArrayModificationException::ArrayModificationException() 
	: ArrayException::ArrayException()
{

}
//**********************************************************************
ArrayModificationException::ArrayModificationException(const string &description)
	: ArrayException::ArrayException(description)
{

}
//**********************************************************************
ArrayModificationException::ArrayModificationException(Exception * const cause)
	: ArrayException::ArrayException(cause)
{

}
//**********************************************************************
ArrayModificationException::ArrayModificationException(const string &description,
	Exception * const cause)
	: ArrayException::ArrayException(description, cause)
{

}
//**********************************************************************
ArrayModificationException::~ArrayModificationException()
{

}
//**********************************************************************
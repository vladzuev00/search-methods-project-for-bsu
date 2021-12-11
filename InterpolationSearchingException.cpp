#include "stdafx.h"
#include "InterpolationSearchingException.h"

//****************************************************************
InterpolationSearchingException::InterpolationSearchingException() 
	: SearchingException::SearchingException()
{

}
//****************************************************************
InterpolationSearchingException::InterpolationSearchingException(
	const string &description)
	: SearchingException::SearchingException(description)
{

}
//****************************************************************
InterpolationSearchingException::InterpolationSearchingException(
	Exception * const cause)
	: SearchingException::SearchingException(cause)
{

}
//****************************************************************
InterpolationSearchingException::InterpolationSearchingException(
	const string &description, Exception * const cause)
	: SearchingException::SearchingException(description, cause)
{

}
//****************************************************************
InterpolationSearchingException::~InterpolationSearchingException()
{

}
//****************************************************************
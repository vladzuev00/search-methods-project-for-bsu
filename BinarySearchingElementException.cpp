#include "stdafx.h"
#include "BinarySearchingElementException.h"

//****************************************************************
BinarySearchingElementException::BinarySearchingElementException()
	: SearchingException::SearchingException()
{

}
//****************************************************************
BinarySearchingElementException::BinarySearchingElementException(const string &description)
	: SearchingException::SearchingException(description)
{

}
//****************************************************************
BinarySearchingElementException::BinarySearchingElementException(Exception * const cause)
	: SearchingException::SearchingException(cause)
{

}
//****************************************************************
BinarySearchingElementException::BinarySearchingElementException(
	const string &description, Exception * const cause)
	: SearchingException::SearchingException(description, cause)
{

}
//****************************************************************
BinarySearchingElementException::~BinarySearchingElementException()
{

}
//****************************************************************
#include "stdafx.h"
#include "LinearSearchElement.h"
#include "LinearSearchingException.h"

//**********************************************************************
template class LinearSearchElement<double>;
//**********************************************************************
template<class ElementType>
LinearSearchElement<ElementType>::LinearSearchElement() 
	: MethodOfSearchingElement<ElementType>::MethodOfSearchingElement()
{

}
//**********************************************************************
template<class ElementType>
ElementType& LinearSearchElement<ElementType>::findElement(
	const ElementType &valueOfElement, const Array<ElementType> &array) const
{
	for (int i = 0; i < array.getAmountOfElements(); i++)
	{
		if (array[i] == valueOfElement) 
		{
			return array[i];
		}
	}
	throw new LinearSearchingException("Impossible to find element with"
		" given value: " + std::to_string(valueOfElement) + ".");
}
//**********************************************************************
template<class ElementType>
LinearSearchElement<ElementType>::~LinearSearchElement()
{

}
//**********************************************************************
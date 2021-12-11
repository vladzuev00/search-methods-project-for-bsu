#include "stdafx.h"
#include "BinarySearchElementMethod.h"
#include "BinarySearchingElementException.h"

//*******************************************************************
template class BinarySearchElementMethod<double>;
//*******************************************************************
template<class ElementType>
BinarySearchElementMethod<ElementType>::BinarySearchElementMethod()
{

}
//*******************************************************************
template<class ElementType>
ElementType& BinarySearchElementMethod<ElementType>::findElement(
	const ElementType &valueOfElement, const Array<ElementType> &array) const
{
	const int startIndexOfSearching = 0;
	const int endIndexOfSearching = array.getAmountOfElements() - 1;
	return this->findElement(valueOfElement, array, startIndexOfSearching, endIndexOfSearching);
}
//*******************************************************************
template<class ElementType>
ElementType& BinarySearchElementMethod<ElementType>::findElement(
	const ElementType &valueOfElement, const Array<ElementType> &array,
	const int startIndexOfSearching, const int endIndexOfSearching) const
{
	const int currentIndexOfSearching = (startIndexOfSearching + endIndexOfSearching) / 2;
	if (array[currentIndexOfSearching] == valueOfElement) 
	{
		return array[currentIndexOfSearching];
	}
	else if (startIndexOfSearching >= endIndexOfSearching) 
	{
		throw new BinarySearchingElementException("Impossible to find element with"
			" given value: " + std::to_string(valueOfElement) + ".");
	}
	else 
	{
		return (valueOfElement < array[currentIndexOfSearching])
			? this->findElement(valueOfElement, array, startIndexOfSearching,
				currentIndexOfSearching - 1)
			: this->findElement(valueOfElement, array, currentIndexOfSearching + 1,
				endIndexOfSearching);
	}
}
//*******************************************************************
template<class ElementType>
BinarySearchElementMethod<ElementType>::~BinarySearchElementMethod()
{

}
//*******************************************************************
#include "stdafx.h"
#include "InterpolationSearchElement.h"
#include "InterpolationSearchingException.h"

//****************************************************************
template class InterpolationSearchElement<double>;
//****************************************************************
template<class ElementType>
InterpolationSearchElement<ElementType>::InterpolationSearchElement()
{

}
//****************************************************************
template<class ElementType>
ElementType& InterpolationSearchElement<ElementType>::findElement(
	const ElementType &valueOfElement, const Array<ElementType> &array) const 
{
	int currentResearchIndex = 0;
	int currentLeftIndexOfSearching = 0;
	int currentRightIndexOfSearching = array.getAmountOfElements() - 1;
	bool elementIsFound = false;
	while (!elementIsFound && (currentLeftIndexOfSearching != currentRightIndexOfSearching))
	{
		currentResearchIndex = currentLeftIndexOfSearching
			+ ((valueOfElement - array[currentLeftIndexOfSearching])
				* (currentRightIndexOfSearching - currentLeftIndexOfSearching))
			/ (array[currentRightIndexOfSearching] - array[currentLeftIndexOfSearching]);
		if (array[currentResearchIndex] < valueOfElement)
		{
			currentLeftIndexOfSearching = currentResearchIndex + 1;
		}
		else if (array[currentResearchIndex] > valueOfElement) 
		{
			currentRightIndexOfSearching = currentResearchIndex - 1;
		}
		else 
		{
			elementIsFound = true;
		}
	}
	if (!elementIsFound) 
	{
		throw new InterpolationSearchingException("Impossible to find "
			"element with given value: " + std::to_string(valueOfElement) + ".");
	}
	return array[currentResearchIndex];
}
//****************************************************************
template<class ElementType>
InterpolationSearchElement<ElementType>::~InterpolationSearchElement()
{

}
//****************************************************************
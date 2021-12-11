#ifndef BINARYSEARCHELEMENTMETHOD_H
#define BINARYSEARCHELEMENTMETHOD_H

#include "Array.h"

//*******************************************************************
template<class ElementType>
class BinarySearchElementMethod : public MethodOfSearchingElement<ElementType>
{
private:
	ElementType& findElement(const ElementType &valueOfElement,
		const Array<ElementType> &array, const int startIndexOfSearching,
		const int endIndexOfSearching) const;
public:
	BinarySearchElementMethod();
public:
	virtual ElementType& findElement(const ElementType &valueOfElement,
		const Array<ElementType> &array) const override;
public:
	virtual ~BinarySearchElementMethod() override;
};
//*******************************************************************

#endif BINARYSEARCHELEMENTMETHOD_H
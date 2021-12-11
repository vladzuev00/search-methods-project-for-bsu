#ifndef LINEARSEARCHELEMENT_H
#define LINEARSEARCHELEMENT_H

#include "Array.h"

//**********************************************************************
template<class ElementType>
class LinearSearchElement : public MethodOfSearchingElement<ElementType>
{
public:
	LinearSearchElement();
public:
	virtual ElementType& findElement(const ElementType &valueOfElement, 
		const Array<ElementType> &array) const override;
public:
	virtual ~LinearSearchElement() override;
};
//**********************************************************************

#endif LINEARSEARCHELEMENT_H
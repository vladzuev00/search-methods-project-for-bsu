#ifndef INTERPOLATIONSEARCHELEMENT_H
#define INTERPOLATIONSEARCHELEMENT_H

#include "Array.h"

//****************************************************************
template<class ElementType>
class InterpolationSearchElement : public MethodOfSearchingElement<ElementType>
{
public:
	InterpolationSearchElement();
public:
	virtual ElementType& findElement(const ElementType &valueOfElement,
		const Array<ElementType> &array) const override;
public:
	virtual ~InterpolationSearchElement() override;
};
//****************************************************************

#endif INTERPOLATIONSEARCHELEMENT_H
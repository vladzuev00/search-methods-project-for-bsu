#ifndef ARRAY_H
#define ARRAY_H

#include <string>

//**************************************************************************
template<class ElementType>
class MethodOfSearchingElement;
//**************************************************************************
class ArrayValidator;
//**************************************************************************
template<class ElementType>
class Array
{
private:
	ElementType *elements;
	int amountOfElements;
	int capacity;
	MethodOfSearchingElement<ElementType> *methodOfSearchingElement;
private:
	static const int DEFAULT_INITIAL_CAPACITY;
	static const ArrayValidator ARRAY_VALIDATOR;
	static const double COEFFICIENT_OF_INCREASING_CAPACITY;
private:
	void initializeElements(const ElementType * const valuesOfElements);
	void increaseCapacity();
	void changeCapacity(const int newCapacity);
	std::string findDescriptionOfElements() const;
public:
	Array();
	Array(const int initialCapacity);
	Array(const ElementType * const valuesOfElements, const int amountOfElements);
	Array(const ElementType * const valuesOfElements, const int amountOfElements,
		  MethodOfSearchingElement<ElementType> * const methodOfSearchingElement);
	Array(const Array<ElementType> &other);
public:
	inline int getAmountOfElements() const;
	inline int getCapacity() const;
	void setMethodOfSearchingElement(
		MethodOfSearchingElement<ElementType> * const methodOfSearchingElement);
	inline MethodOfSearchingElement<ElementType>* 
		getMethodOfSearchingElement() const;
public:
	void updateValueOfElement(const ElementType &newValueOfElement,
		const int indexOfElement);
	ElementType& findElement(const ElementType &valueOfElement) const;
	ElementType& findElement(const int indexOfElement) const;
	void addElement(const ElementType &valueOfAddedElement);
	void addElement(const ElementType &valueOfAddedElement,
		const int indexOfAddedElement);
	void removeElement(const int indexOfRemovedElement);
	void sortElements();
	std::string toString() const;
public:
	ElementType& operator[](const int indexOfElement) const;
	bool operator==(const Array<ElementType> &other) const;
	bool operator!=(const Array<ElementType> &other) const;
	Array<ElementType>& operator=(const Array<ElementType> &other);
public:
	~Array();
};
//**************************************************************************
template<class ElementType>
class MethodOfSearchingElement
{
public:
	MethodOfSearchingElement();
public:
	virtual ElementType& findElement(const ElementType &valueOfElement, 
		const Array<ElementType> &array) const = 0;
public:
	virtual ~MethodOfSearchingElement() = 0;
};
//**************************************************************************
class ArrayValidator 
{
private:
	static const int MINIMAL_ALLOWABLE_INITIAL_CAPACITY;
	static const int MAXIMAL_ALLOWABLE_INITIAL_CAPACITY;
	static const int MINIMAL_ALLOWABLE_AMOUNT_OF_ELEMENTS;
	static const int MAXIMAL_ALLOWABLE_AMOUNT_OF_ELEMENTS;
	static const int MINIMAL_ALLOWABLE_VALUE_OF_INDEX;
public:
	bool isValidInitialCapacity(const int researchInitialCapacity) const;
	template<class ElementType>
	bool areValidValuesOfElements(
		const ElementType * const researchValuesOfElements) const;
	bool isValidAmountOfElements(const int researchAmountOfElements) const;
	template<class ElementType>
	bool isValidMethodOfSearchingElement(
		MethodOfSearchingElement<ElementType> * const researchMethod) const;
	template<class ElementType>
	bool isValidIndex(const int researchIndex,
		const Array<ElementType> &array) const;
	template<class ElementType>
	bool isValidIndexToAddElement(const int researchIndex,
		const Array<ElementType> &array) const;
};
//**************************************************************************

#endif ARRAY_H
#include "stdafx.h"
#include "ArrayTest.h"
#include "UnsupportedOperationException.h"
#include "Array.h"
#include "InterpolationSearchElement.h"

//**************************************************************************
ArrayTest::ArrayTest(const ArrayTest&)
{
	this->reactToRequestCopyTestObject();
}
//**************************************************************************
void ArrayTest::operator=(const ArrayTest&)
{
	this->reactToRequestCopyTestObject();
}
//**************************************************************************
ArrayTest::ArrayTest() : Test::Test()
{

}
//**************************************************************************
ArrayTest::ArrayTest(ostream * const outputStream) 
	: Test::Test(outputStream)
{

}
//**************************************************************************
void ArrayTest::runTests() 
{
	this->Test::runTests();
	this->elementOfArrayShouldBeFoundByItsValue();
}
//**************************************************************************
void ArrayTest::elementOfArrayShouldBeFoundByItsValue()
{
	const int amountOfElementsOfArray = 50;
	const double * const valuesOfElementsOfArray
		= ArrayTest::ELEMENTS_GENERATOR.generateElements(amountOfElementsOfArray);
	Array<double> * const array = new Array<double>(valuesOfElementsOfArray,
		amountOfElementsOfArray);
	const int indexOfValueOfResearchElement = amountOfElementsOfArray / 3;
	const double valueOfResearchElement
		= *(valuesOfElementsOfArray + indexOfValueOfResearchElement);
	delete[] valuesOfElementsOfArray;
	array->sortElements();
	MethodOfSearchingElement<double> * const methodOfSearchingElement
		= new InterpolationSearchElement<double>();
	array->setMethodOfSearchingElement(methodOfSearchingElement);
	const double actualValueOfFoundElement = array->findElement(valueOfResearchElement);
	delete array;
	const double expectedValueOfFoundElement = valueOfResearchElement;
	bool testIsSuccess = (actualValueOfFoundElement == expectedValueOfFoundElement);
	this->incrementCorrespondingAmountTests(testIsSuccess);
}
//**************************************************************************
const double ArrayTest::MINIMAL_BORDER_OF_GENERATION = -1000;
//**************************************************************************
const double ArrayTest::MAXIMAL_BORDER_OF_GENERATION = 1000;
//**************************************************************************
const ElementsGenerator<double> ArrayTest::ELEMENTS_GENERATOR 
	= ElementsGenerator<double>(ArrayTest::MINIMAL_BORDER_OF_GENERATION,
		                        ArrayTest::MAXIMAL_BORDER_OF_GENERATION);
//**************************************************************************
ArrayTest::~ArrayTest()
{

}
//**************************************************************************
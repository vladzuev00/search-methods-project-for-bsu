#ifndef ARRAYTEST_H
#define ARRAYTEST_H

#include "Test.h"
#include "ElementsGenerator.h"

//**************************************************************************
class ArrayTest : public Test
{
private:
	static const double MINIMAL_BORDER_OF_GENERATION;
	static const double MAXIMAL_BORDER_OF_GENERATION;
	static const ElementsGenerator<double> ELEMENTS_GENERATOR;
private:
	ArrayTest(const ArrayTest&);
	void operator=(const ArrayTest&);
private:
	void elementOfArrayShouldBeFoundByItsValue();
public:
	ArrayTest();
	ArrayTest(ostream * const outputStream);
public:
	virtual void runTests() override;
public:
	virtual ~ArrayTest() override;
};
//**************************************************************************

#endif ARRAYTEST_H
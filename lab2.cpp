// lab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "ArrayTest.h"
#include "ElementsGenerator.h"
#include "Array.h"
#include "BinarySearchElementMethod.h"
#include <chrono>

using namespace std;

int main()
{
	Test * const test = new ArrayTest();
	test->runTests();
	test->reportAboutSuccessedAndFailedTests();
	delete test;

	const double minimalBorderOfGeneration = -1000;
	const double maximalBorderOfGeneration = 1000;
	const ElementsGenerator<double> *elementsGenerator
		= new ElementsGenerator<double>(minimalBorderOfGeneration,
			maximalBorderOfGeneration);
	//For array with 100000 elements:
	int amountOfElementsOfArray = 100000;

	const double *valuesOfElementsOfArray
		= elementsGenerator->generateElements(amountOfElementsOfArray);
	
	Array<double> *array = new Array<double>(valuesOfElementsOfArray,
		amountOfElementsOfArray);

	int indexOfValueOfResearchElement = amountOfElementsOfArray / 3;
	double valueOfResearchElement
		= *(valuesOfElementsOfArray + indexOfValueOfResearchElement); 
	delete[] valuesOfElementsOfArray;

	array->sortElements();

	MethodOfSearchingElement<double> * const methodOfSearchingElement
		= new BinarySearchElementMethod<double>();
	array->setMethodOfSearchingElement(methodOfSearchingElement);

	cout << "For array with 100000 elements: \n";
	chrono::steady_clock::time_point startOfExecution 
		= chrono::high_resolution_clock::now();
	array->findElement(valueOfResearchElement);
	chrono::steady_clock::time_point endOfExecution 
		= chrono::high_resolution_clock::now();
	delete array;

	chrono::duration<double> durationOfExecution = endOfExecution - startOfExecution;
	cout << "Duration of execution in seconds : " << durationOfExecution.count() << "\n"; 

	//For array with 75000 elements:
	amountOfElementsOfArray = 75000;
	valuesOfElementsOfArray = elementsGenerator->generateElements(amountOfElementsOfArray);

	array = new Array<double>(valuesOfElementsOfArray,
		amountOfElementsOfArray);

	indexOfValueOfResearchElement = amountOfElementsOfArray / 3;
	valueOfResearchElement = *(valuesOfElementsOfArray + indexOfValueOfResearchElement);
	delete[] valuesOfElementsOfArray;

	array->sortElements();

	cout << "For array with 75000 elements: \n";
	startOfExecution = chrono::high_resolution_clock::now();
	array->findElement(valueOfResearchElement);
	endOfExecution = chrono::high_resolution_clock::now();
	delete array;

	durationOfExecution = endOfExecution - startOfExecution;
	cout << "Duration of execution in seconds : " << durationOfExecution.count() << "\n";

	//For array with 50000 elements:
	amountOfElementsOfArray = 50000;
	valuesOfElementsOfArray = elementsGenerator->generateElements(amountOfElementsOfArray);

	array = new Array<double>(valuesOfElementsOfArray,
		amountOfElementsOfArray);

	indexOfValueOfResearchElement = amountOfElementsOfArray / 3;
	valueOfResearchElement = *(valuesOfElementsOfArray + indexOfValueOfResearchElement);
	delete[] valuesOfElementsOfArray;

	array->sortElements();

	cout << "For array with 50000 elements: \n";
	startOfExecution = chrono::high_resolution_clock::now();
	array->findElement(valueOfResearchElement);
	endOfExecution = chrono::high_resolution_clock::now();
	delete array;

	durationOfExecution = endOfExecution - startOfExecution;
	cout << "Duration of execution in seconds : " << durationOfExecution.count() << "\n";

	//For array with 25000 elements:
	amountOfElementsOfArray = 25000;
	valuesOfElementsOfArray = elementsGenerator->generateElements(amountOfElementsOfArray);

	array = new Array<double>(valuesOfElementsOfArray,
		amountOfElementsOfArray);

	indexOfValueOfResearchElement = amountOfElementsOfArray / 3;
	valueOfResearchElement = *(valuesOfElementsOfArray + indexOfValueOfResearchElement);
	delete[] valuesOfElementsOfArray;

	array->sortElements();

	cout << "For array with 25000 elements: \n";
	startOfExecution = chrono::high_resolution_clock::now();
	array->findElement(valueOfResearchElement);
	endOfExecution = chrono::high_resolution_clock::now();
	delete array;

	durationOfExecution = endOfExecution - startOfExecution;
	cout << "Duration of execution in seconds : " << durationOfExecution.count() << "\n";

	//For array with 10000 elements:
	amountOfElementsOfArray = 75000;
	valuesOfElementsOfArray = elementsGenerator->generateElements(amountOfElementsOfArray);

	array = new Array<double>(valuesOfElementsOfArray,
		amountOfElementsOfArray);

	indexOfValueOfResearchElement = amountOfElementsOfArray / 3;
	valueOfResearchElement = *(valuesOfElementsOfArray + indexOfValueOfResearchElement);
	delete[] valuesOfElementsOfArray;

	array->sortElements();

	cout << "For array with 10000 elements: \n";
	startOfExecution = chrono::high_resolution_clock::now();
	array->findElement(valueOfResearchElement);
	endOfExecution = chrono::high_resolution_clock::now();
	delete array;

	durationOfExecution = endOfExecution - startOfExecution;
	cout << "Duration of execution in seconds : " << durationOfExecution.count() << "\n";

	delete elementsGenerator;

	system("pause");
    return 0;
}


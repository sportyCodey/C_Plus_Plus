#include "stdafx.h"
#include <iostream>
#include <string>
#include "exampleType.h"

void expandArray(int* &arr, int arrSize);

int main()
{
	/* fiddling with pointers */
	exampleType a;
	exampleType b;

	a.setX(100);

	b = a;

	exampleType *pointer = &a;
	pointer->setX(1000);
	pointer->printX();

	a.printX();
	a.setX(200);
	a.printX();

	pointer->printX();

	int x = 90;
	int *p;
	p = &x;

	*p = -50;

	std::cout << x << std::endl;
	x = -100;
	std::cout << *p << std::endl;

	int  *q;
	q = &x;

	x = 90;
	std::cout << *p << std::endl;
	std::cout << *q << std::endl;
	x = 60;
	std::cout << *p << std::endl;
	std::cout << *q << std::endl;

	int arrSize;
	int *arr;
	
	/* dynamically expanding array */
	std::cout << "Enter array size: ";
	std::cin >> arrSize;

	arr = new int[arrSize];

	int count = 0;
	int i = 0;
	int input = 0;
	std::cout << "Enter " << arrSize << " elements. " << std::endl;
	std::cout << "Press -1 to quit: " << std::endl;
	
	while (input != -1)
	{
		if (i == arrSize)
		{
			arrSize *= 2;
			expandArray(arr, arrSize);
			
			/*
			int *expandArr;
			expandArr = new int[arrSize * 2];
			
			int j;
			for (j = 0; j < arrSize; j++)
			{
				expandArr[j] = arr[j];
			}
			arrSize *= 2;

			delete[] arr;
			arr = expandArr;
			*/
	
		}
		std::cin >> input;
		if (input != -1)
		{
			arr[i] = input;
			++count;
		}
		++i;;
	}

	std::cout << "The array holds the following numbers:" << std::endl;

	for (i = 0; i < count; ++i)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

    return 0;
}//end main

void expandArray(int* &arr, int arrSize)
{
	int *expandArr;
	expandArr = new int[arrSize];

	int i;
	for (i = 0; i < arrSize; i++)
	{
		expandArr[i] = arr[i];
	}
	
	delete[] arr;

	//arr = new int[arrSize * 2];
	//for (i = 0; i < arrSize; i++)
	//{
		//arr[i] = expandArr[i];
	//}
	arr = expandArr;
	
	//delete[] expandArr;
}


//implementation file for exampleType

#include "stdafx.h"
#include <iostream>
#include "exampleType.h"

exampleType::exampleType()
{
	x = 10;
}

void exampleType::doThis(exampleType type)
{
	type.x = 100;
	std::cout << type.x << std::endl;
}

void exampleType::setX(int newX)
{
	x = newX;
}

void exampleType::printX() const
{
	std::cout << x << std::endl;
}

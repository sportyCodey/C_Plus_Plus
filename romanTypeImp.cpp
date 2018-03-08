#include "stdafx.h"
#include <iostream>
#include <string>
#include "romanType.h"

romanType::romanType()
{
	romanNumeral = "";
	convertedRomanNumeral = 0;
}

romanType::romanType(std::string newRomanType)
{
	romanNumeral = newRomanType;
	convertedRomanNumeral = 0;
}

std::string romanType::getRomanNumeral() const
{
	return romanNumeral;
}

void romanType::setRomanNumeral(std::string newRomanNumeral)
{
	romanNumeral = newRomanNumeral;
}

void romanType::convert()
{
	bool pairFound = false;
	char tempS[2];
	int tempI;
	int i;
	int j = 0;
	for (i = 0; i < romanNumeral.length(); i++)
	{
		tempI = -1;
		if (pairFound)
		{
			pairFound = false;
			continue;
		}
		if (i < romanNumeral.length() - 1)
		{
			tempS[j] = romanNumeral[i];
			tempS[j + 1] = romanNumeral[i + 1];
		}
		tempI = getValueFromTwo(tempS);
		if (tempI == -1)
		{
			pairFound = false;
			convertedRomanNumeral += getValueFromSingle(romanNumeral[i]);
		}
		else
		{
			pairFound = true;
			if (i == romanNumeral.length() - 1)
			{
				break;
			}
			convertedRomanNumeral += tempI;
		}	
	}
}

int romanType::getValueFromTwo(char type[2])
{
	if (type[0] == 'C' && type[1] == 'M')
		return 900;
	else if (type[0] == 'C' && type[1] == 'D')
		return 400;
	else if (type[0] == 'X' && type[1] == 'C')
		return 90;
	else if (type[0]== 'X' && type[1] == 'L')
		return 40;
	else if (type[0]== 'I' && type[1] == 'X')
		return 9;
	else if (type[0] == 'I' && type[1] == 'V')
		return 4;
	return -1;
}

int romanType::getValueFromSingle(char type)
{
	if (type == 'M')
		return 1000;
	else if (type == 'D')
		return 500;
	else if (type == 'C')
		return 100;
	else if (type == 'L')
		return 50;
	else if (type == 'X')
		return 10;
	else if (type == 'V')
		return 5;
	else if (type == 'I')
		return 1;
}

void romanType::print(bool isRoman) const
{
	if (isRoman)
	{
		std::cout << romanNumeral;
	}
	else
	{
		std::cout << convertedRomanNumeral;
	}
	std::cout << std::endl;
}

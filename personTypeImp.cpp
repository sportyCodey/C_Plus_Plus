#include "stdafx.h"
#include <iostream>
#include <string>
#include "personType.h"

personType::personType()
{
	name = "";
	age = 0;
}

personType::personType(std::string newName, int newAge)
{
	name = newName;
	age = std::abs(newAge);
}

std::string personType::getName() const
{
	return name;
}

int personType::getAge() const
{
	return age;
}

void personType::setName(std::string newSpeciality)
{
	name = newSpeciality;
}

void personType::setAge(int newAge)
{
	age = newAge;
}

void personType::printPerson() const
{
	std::cout << "Person: " << name << " is " << age << " years old." << std::endl;
}


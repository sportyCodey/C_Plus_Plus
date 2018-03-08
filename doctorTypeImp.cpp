#include "stdafx.h"
#include <iostream>
#include <string>
#include "personType.h"
#include "doctorType.h"

doctorType::doctorType()
	:personType()
{
	speciality = "";
}

doctorType::doctorType(std::string newName, int age, std::string newSpeciality)
	:personType(newName, age)
{
	speciality = newSpeciality;
}

std::string doctorType::getSpeciality() const
{
	return speciality;
}

void doctorType::setSpeciality(std::string newSpeciality)
{
	speciality = newSpeciality;
}

void doctorType::printDoctor() const
{
	personType::printPerson();
	std::cout << "Doctor speciality: " << speciality << std::endl;
}

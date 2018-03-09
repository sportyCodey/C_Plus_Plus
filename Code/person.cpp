//implementation file for personType

#include <iostream>
#include <string>
#include "person.hpp"

personType::personType(std::string first, std::string last)
{
    firstName = first;
    lastName = last;
}

std::string personType::getFirstName() const
{
    return firstName;
}

std::string personType::getLastName() const
{
    return lastName;
}

std::string personType::getID() const
{
    return ID;
}

void personType::setFirst(std::string first)
{
    firstName = first;
}

void personType::setName(std::string first, std::string last)
{
    firstName = first;
    lastName = last;
}

void personType::setID(std::string newID)
{
    ID = newID;
}

void personType::print() const
{
    std::cout << firstName << " " << lastName << std::endl;
}



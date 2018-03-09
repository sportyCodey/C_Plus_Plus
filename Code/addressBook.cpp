//implementation file for addressBookType

#include <string>
#include "addressBook.hpp"
#include "extPerson.hpp"

addressBookType::addressBookType(std::string first, std::string last, std::string clarify, std::string phoneNumber, std::string newAddress, std::string newCity, std::string newState, std::string newZip)
    : person(first, last, clarify, phoneNumber, newAddress, newCity, newState, newZip)
{
    
}

void addressBookType::setParameters(std::string first, std::string last, std::string newClarify, std::string newPhoneNumber, std::string newAddress, std::string newCity, std::string newState, std::string newZip)
{
    person.setUpP(first,last, newClarify, newPhoneNumber, newAddress, newCity,newState, newZip);
}

std::string addressBookType::getLastName()
{
    return person.getLastName();
}

std::string addressBookType::getFirstName()
{
    return person.getFirstName();
}

void addressBookType::setFirstName(std::string newFirst)
{
    person.setFirst(newFirst);
}

void addressBookType::print() const
{
    person.print();
}


//implementation file for extPersonType

#include <iostream>
#include "extPerson.hpp"

extPersonType::extPersonType(std::string first, std::string last, std::string newClarify, std::string newPhoneNumber, std::string newAddress, std::string newCity, std::string newState, std::string newZip)
      : personType(first, last), address(newAddress, newCity, newState, newZip)
{
    clarify = newClarify;
    phoneNumber = newPhoneNumber;
}

std::string extPersonType::getClarify() const
{
    return clarify;
}

std::string extPersonType::getPhoneNumber() const
{
    return phoneNumber;
}

void extPersonType::setClarify(std::string newClarify)
{
    clarify = newClarify;
}

void extPersonType::setPhoneNumber(std::string newPhoneNumber)
{
    phoneNumber =  newPhoneNumber;
}

void extPersonType::setUpP(std::string first, std::string last, std::string newClarify, std::string newPhoneNumber, std::string newAddress, std::string newCity, std::string newState, std::string newZip)
{
    setName(first, last);
    clarify = newClarify;
    phoneNumber = newPhoneNumber;
    address.setStreet_Address(newAddress);
    address.setCity(newCity);
    address.setState(newState);
    address.setZip(newZip);
}


void extPersonType::print() const
{
    personType::print();
    std::cout << getClarify() << " " << getPhoneNumber() << std::endl;
    address.printAddress();
}



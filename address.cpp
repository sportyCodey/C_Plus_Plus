#include <iostream>
#include <string>
#include "address.hpp"

addressType::addressType(std::string newAddress, std::string newCity, std::string newState, std::string newZip)
{
    street_Address = newAddress;
    city= newCity;
    state = newState;
    zip = newZip;
}

std::string addressType::getStreet_Address() const
{
    return street_Address;
}

std::string addressType::getCity() const
{
    return city;
}

std::string addressType::getState() const
{
    return state;
}

std::string addressType::getZip() const
{
    return zip;
}

void addressType::setStreet_Address(std::string newAddress)
{
    street_Address = newAddress;
}

void addressType::setCity(std::string newCity)
{
    city = newCity;
}

void addressType::setState(std::string newState)
{
    state = newState;
}

void addressType::setZip(std::string newZip)
{
    zip = newZip;
}

void addressType::printAddress() const {
    std::cout << getStreet_Address() << " " << getCity() << " " << getState() << " " << getZip() << std::endl;
}




#ifndef addressBook_hpp
#define addressBook_hpp

#include <string>
#include "extPerson.hpp"
#include "address.hpp"

class addressBookType
{
public:
    addressBookType(std::string first = "", std::string last = "", std::string newClarify = "", std::string newPhoneNumber = "", std::string newAddress = "", std::string newCity = "", std::string newState = "", std::string newZip = "");
    
    void setParameters(std::string first, std::string last, std::string newClarify, std::string newPhoneNumber, std::string newAddress, std::string newCity, std::string newState, std::string newZip);
    
    std::string getLastName();
    
    std::string getFirstName();
    
    void setFirstName(std::string newFirst);
    
    void print() const;
    
private:
    extPersonType person;
    addressType address;
};

#endif /* addressBook_hpp */

#ifndef extPerson_hpp
#define extPerson_hpp

#include <string>
#include "person.hpp"
#include "address.hpp"

class extPersonType: public personType
{
public:
    extPersonType(std::string first = "", std::string last = "", std::string newCarify = "", std::string newPhoneNumber = "", std::string newAddress = "", std::string newCity = "", std::string newState = "", std::string newZip = "");
    
    std::string getClarify() const;
    
    std::string getPhoneNumber() const;
    
    void setClarify(std::string newClarify);
    
    void setPhoneNumber(std::string newPhoneNumber);
    
    void setUpP(std::string first, std::string last, std::string newCarify, std::string newPhoneNumber, std::string newAddress, std::string newCity, std::string newState, std::string newZip);
    
    void print() const;

private:
    std::string clarify;
    std::string phoneNumber;
    addressType address;
};

#endif /* extPerson_hpp */

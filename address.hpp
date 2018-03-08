#ifndef address_hpp
#define address_hpp

#include <string>

class addressType
{
public:
    addressType(std::string newAddress = "", std::string newCity = "", std::string newState = "", std::string newZip = "");
    
    std::string getStreet_Address() const;
    
    std::string getCity() const;
    
    std::string getState() const;
    
    std::string getZip() const;
    
    void setStreet_Address(std::string newAddress);
    
    void setCity(std::string newCity);
    
    void setState(std::string newState);
    
    void setZip(std::string newZip);
    
    void printAddress() const;
    
private:
   std::string street_Address;
   std::string city;
   std::string state;
   std::string zip;
    
};//end class addressType


#endif /* address_hpp */

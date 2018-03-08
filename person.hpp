#ifndef person_hpp
#define person_hpp

#include <string>

class personType
{
public:
    
    personType(std::string first = "", std::string last = "");
    
    std::string getFirstName() const;
    
    std::string getLastName() const;
    
    std::string getID() const;
    
    void setName(std::string first, std::string last);
    
    void setID(std::string newID);
    
    void setFirst(std::string first);
    
    void print() const;
    
private:
    std::string firstName;
    std::string lastName;
    std::string ID;
};

#endif /* person_hpp */

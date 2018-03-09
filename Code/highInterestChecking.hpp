//header file for highInterestCheckingType

#ifndef highInterestChecking_hpp
#define highInterestChecking_hpp

#include <string>

#include "noServiceChargeChecking.hpp"

class highInterestCheckingType: public noServiceChargeCheckingType
{
public:
    highInterestCheckingType(std::string n_AcctNumber, std::string n_Name, double n_Balance);
    
    void writeCheck();
    
    void deposit(double amount);
    
    void withdraw(double amount);
    
    void create_Monthly_Statement();
    
private:
    const double BIGGER_INTEREST = 5.5;
};

#endif /* highInterestChecking_hpp */

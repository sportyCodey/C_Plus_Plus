//header file for highInterestRateSavingsType

#ifndef highInterestRateSavingsType_hpp
#define highInterestRateSavingsType_hpp

#include <string>

#include "savingsAccountType.hpp"

class highInterestSavingsType: public savingsAccountType
{
public:
    highInterestSavingsType(std::string n_AcctNumber, std::string n_Name, double n_Balance);
    
    void writeCheck();
    
    void deposit(double amount);
    
    void withdraw(double amount);
    
    void create_Monthly_Statement();
    
private:
    const int MIN_BALANCE = 200;
    const double BIGGER_INTEREST = 10;
    
};


#endif /* highInterestRateSavingsType_hpp */

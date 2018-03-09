//header file for noServiceChargeCheckingType

#ifndef noServiceChargeChecking_hpp
#define noServiceChargeChecking_hpp

#include <string>

#include "checkingAccountType.hpp"

class noServiceChargeCheckingType: public checkingAccountType
{
public:
    noServiceChargeCheckingType(std::string n_AcctNumber = "", std::string n_Name = "", double n_Balance = 0.0);
    
    void writeCheck();
    
    void deposit(double amount);
    
    void withdraw(double amount);
    
    void create_Monthly_Statement();
    
    double getMinBalance() const;
    
private:
    const double MIN_BALANCE = 100;
    const int INTEREST = 1.5;
};

#endif /* noServiceChargeChecking_hpp */

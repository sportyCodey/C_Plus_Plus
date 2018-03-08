#ifndef serviceChargeCheckingType_hpp
#define serviceChargeCheckingType_hpp

#include <string>

#include "checkingAccountType.hpp"

class serviceChargeCheckingType: public checkingAccountType
{
public:
    serviceChargeCheckingType(std::string n_AcctNumber = "", std::string n_Name = "", double n_Balance = 0.0);
    
    void writeCheck();
    
    void deposit(double amount);
    
    void withdraw(double amount);
    
    void create_Monthly_Statement();
    
private:
    const int MAX_CHECKS = 10;
    const int MONTHLY_CHARGE = 20;
    int num_Of_Checks;
};

#endif /* serviceChargeCheckingType_hpp */

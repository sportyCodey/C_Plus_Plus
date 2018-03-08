#ifndef checkingAccountType_hpp
#define checkingAccountType_hpp

#include <string>

#include "bankAccountType.hpp"

class checkingAccountType: public bankAccountType
{
public:
    checkingAccountType(std::string n_AcctNumber = "", std::string n_Name = "", double n_Balance = 0.0);
    
    void depositArray(int amount);
    
    void withdrawArray(int amount);
    
    int getDep() const;
    
    int getWithd() const;
    
    void printDepsosityArray();
    
    void printWithdrawArray();
    
    void printChecks() const;
    
    virtual void writeCheck() = 0;
    
    virtual void deposit(double amount) = 0;
    
    virtual void withdraw(double amount) = 0;
    
    virtual void create_Monthly_Statement() = 0;
    
private:
    int dep;
    int withd;
    int depA[50]; //assuming client doesn't deposit more than 50 times
    int withdA[50]; //same story
};

#endif /* checkingAccountType_hpp */

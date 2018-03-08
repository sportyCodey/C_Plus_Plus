#ifndef savingsAccountType_hpp
#define savingsAccountType_hpp

#include <string>

#include "bankAccountType.hpp"

class savingsAccountType: public bankAccountType
{
public:
    savingsAccountType(std::string n_AcctNumber, std::string n_Name, double n_Balance);
    
    void depositArray(int amount);
    
    void withdrawArray(int amount);
    
    int getDep() const;
    
    int getWithd() const;
    
    void printDepsosityArray();
    
    void printWithdrawArray();
    
    void printChecks() const;
    
    void writeCheck();
    
    void deposit(double amount);
    
    void withdraw(double amount);
    
    void create_Monthly_Statement();
    
private:
    const double INTEREST = 2.5;
    int dep;
    int withd;
    int depA[50];
    int withdA[50];
};

#endif /* savingsAccountType_hpp */

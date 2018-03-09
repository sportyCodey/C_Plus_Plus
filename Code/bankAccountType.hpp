//hpp file for bankAcountType

#ifndef bankAccountType_hpp
#define bankAccountType_hpp

#include <string>

class bankAccountType
{
public:
    bankAccountType(std::string n_AcctNumber = "", std::string n_Name = "", double n_Balance = 0.0);
    
    std::string getAccountNumber() const;
    
    std::string getName() const;
    
    double getBalance() const;
    
    void setBalance(double n_Balance);
    
    void printChecks() const;
    
    void incrementCheck();
    
    virtual void writeCheck() = 0;
    
    virtual void deposit(double amount) = 0;
    
    virtual void withdraw(double amount) = 0;
    
    virtual void create_Monthly_Statement() = 0;
    
private:
    std::string acct_Number;
    std:: string name;
    double balance;
    int checkNumber;
};

#endif /* bankAccountType_hpp */

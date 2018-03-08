#ifndef certificateOfDepositType_hpp
#define certificateOfDepositType_hpp

#include <string>

#include "bankAccountType.hpp"

class certificateOfDepositType: public bankAccountType
{
public:
    certificateOfDepositType(std::string n_AcctNumber, std::string n_Name, double n_Balance);
    
    void writeCheck();
    
    void deposit(double amount);
    
    void withdraw(double amount);
    
    void create_Monthly_Statement();
    
private:
    const double INTEREST = 3.5;
    int num_Of_CD;
    int num_Of_Months;
    std::string maturityMonth;
};
#endif /* certificateOfDepositType_hpp */

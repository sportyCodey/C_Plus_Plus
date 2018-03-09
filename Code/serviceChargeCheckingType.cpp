//implementation file for serviceChargeCheckingType

#include <iostream>
#include <string>

#include "serviceChargeCheckingType.hpp"
#include "checkingAccountType.hpp"

serviceChargeCheckingType::serviceChargeCheckingType(std::string n_AcctNumber, std::string n_Name, double n_Balance)
    : checkingAccountType(n_AcctNumber, n_Name, n_Balance)
{
    num_Of_Checks = 0;
}

void serviceChargeCheckingType::writeCheck()
{
    if (num_Of_Checks == MAX_CHECKS)
    {
        std::cout << "You cannot write any more checks. Max size = 10" << std::endl;
        return;
    }
    if (getBalance() > 0)
    {
        std::cout << "You are writing a check. " << std::endl << "Here is the check you wrote: " << std::endl;
        printChecks();
        incrementCheck();
        std::cout << std::endl << "You can write " << MAX_CHECKS - num_Of_Checks - 1 << " more checks." << std::endl;
    }
    else
        std::cout << "You have no money in this checking acccount." << std::endl;
    
     num_Of_Checks++;
}

void serviceChargeCheckingType::deposit(double amount)
{
    depositArray(amount);
}

void serviceChargeCheckingType::withdraw(double amount)
{
    if (amount < 0 || amount > getBalance())
        amount = 0;
    withdrawArray(amount);
}

void serviceChargeCheckingType::create_Monthly_Statement()
{
    std::cout << "Current balance is: " << std::endl << getBalance() + MONTHLY_CHARGE << std::endl << std::endl;
    
    std::cout << "The  amount youd deposited in order: " << std::endl << std::endl;
    printDepsosityArray();
    std::cout << "For a total of " << getDep() << " times you have deposited." << std::endl << std::endl;
    
    std::cout << "The  amount youd withdrew in order: " << std::endl << std::endl;
    printWithdrawArray();
    std::cout << "For a total of " << getWithd() << " times you have withdrew." << std::endl << std::endl;
}
    


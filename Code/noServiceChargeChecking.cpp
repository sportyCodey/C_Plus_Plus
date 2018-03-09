//implementatino file for noServiceChargeCheckingType

#include <iostream>
#include <string>

#include "noServiceChargeChecking.hpp"
#include "checkingAccountType.hpp"

noServiceChargeCheckingType::noServiceChargeCheckingType(std::string n_AcctNumber, std::string n_Name, double n_Balance)
    : checkingAccountType(n_AcctNumber, n_Name, n_Balance)
{
   
}

void noServiceChargeCheckingType::writeCheck()
{
    
    if (getBalance() < MIN_BALANCE)
    {
        std::cout << "You do not have enough money to write a check." << std::endl;
    }
    else
    {
        std::cout << "You are writing a check. " << std::endl << "Here is the check you wrote: " << std::endl;
        printChecks();
        incrementCheck();
    }
}

void noServiceChargeCheckingType::deposit(double amount)
{
    if (getBalance() < MIN_BALANCE)
    {
        std::cout << "You do not have enough money to deposit. You must have " << "$" << MIN_BALANCE << "." << std::endl;
    }
    else
        depositArray(amount + INTEREST);
}

void noServiceChargeCheckingType::withdraw(double amount)
{
    if (getBalance() < MIN_BALANCE)
    {
        std::cout << "You do not have enough money to withdraw. You must have " << "$" << MIN_BALANCE << "." << std::endl;
    }
    else
        withdrawArray(amount);
}

void noServiceChargeCheckingType::create_Monthly_Statement()
{
    if (getBalance() < MIN_BALANCE)
    {
        std::cout << "You do not have enough money to create a monthly statement. You must have " << "$" << MIN_BALANCE << "." << std::endl;
    }
    else
    {
        std::cout << "Current balance is: " << std::endl << getBalance() << std::endl << std::endl;
        
        std::cout << "The  amount youd deposited in order: " << std::endl << std::endl;
        printDepsosityArray();
        std::cout << "For a total of " << getDep() << " times you have deposited." << std::endl << std::endl;
        
        std::cout << "The  amount youd withdrew in order: " << std::endl << std::endl;
        printWithdrawArray();
        std::cout << "For a total of " << getWithd() << " times you have withdrew." << std::endl << std::endl;
    }
}

double noServiceChargeCheckingType::getMinBalance() const
{
    return MIN_BALANCE;
}

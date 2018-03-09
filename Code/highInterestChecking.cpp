//implementation file for highInterestCheckingType

#include <iostream>
#include <string>

#include "highInterestChecking.hpp"
#include "noServiceChargeChecking.hpp"

highInterestCheckingType::highInterestCheckingType(std::string n_AcctNumber, std::string n_Name, double n_Balance)
    : noServiceChargeCheckingType(n_AcctNumber, n_Name, n_Balance)
{
    
}

void highInterestCheckingType::writeCheck()
{
    if (getBalance() < getMinBalance() + 100)
    {
        std::cout << "You do not have enough money to write a check. You must have " << "$" << getMinBalance() + 100 << "." << std::endl;
    }
    else
        noServiceChargeCheckingType::writeCheck();
}

void highInterestCheckingType::deposit(double amount)
{
    if (getBalance() < getMinBalance() + 100) //new min balance
    {
         std::cout << "You do not have enough money to deposit. You must have " << "$" << getMinBalance() + 100 << "." << std::endl;
    }
    else
    {
        amount += BIGGER_INTEREST;
        noServiceChargeCheckingType::deposit(amount);
    }
}

void highInterestCheckingType::withdraw(double amount)
{
    if (getBalance() < getMinBalance() + 100)
    {
         std::cout << "You do not have enough money to withdraw. You must have " << "$" << getMinBalance() + 100 << "." << std::endl;
    }
    else
        noServiceChargeCheckingType::withdraw(amount);
}

void highInterestCheckingType::create_Monthly_Statement()
{
    if (getBalance() < getMinBalance() + 100)
    {
         std::cout << "You do not have enough money to create a monthly statement. You must have " << "$" << getMinBalance() + 100 << "." << std::endl;
    }
    else
        noServiceChargeCheckingType::create_Monthly_Statement();
}


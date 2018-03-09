//implementation file for highInterestRateSavingsType

#include <iostream>
#include <string>

#include "highInterestRateSavingsType.hpp"
#include "savingsAccountType.hpp"

highInterestSavingsType::highInterestSavingsType(std::string n_AcctNumber, std::string n_Name, double n_Balance)
: savingsAccountType(n_AcctNumber, n_Name, n_Balance)
{

}

void highInterestSavingsType::writeCheck()
{
    if (getBalance() < MIN_BALANCE)
    {
        std::cout << "You do not have enough money to write a check. You must have " << "$" << MIN_BALANCE << "." << std::endl;
    }
    else
        savingsAccountType::writeCheck();
}

void highInterestSavingsType::deposit(double amount)
{
    if (getBalance() < MIN_BALANCE) //new min balance
    {
        std::cout << "You do not have enough money to deposit. You must have " << "$" << MIN_BALANCE << "." << std::endl;
    }
    else
    {
        amount += BIGGER_INTEREST;
        savingsAccountType::deposit(amount);
    }
}

void highInterestSavingsType::withdraw(double amount)
{
    if (getBalance() < MIN_BALANCE)
    {
        std::cout << "You do not have enough money to withdraw. You must have " << "$" << MIN_BALANCE << "." << std::endl;
    }
    else
         savingsAccountType::withdraw(amount);
}

void highInterestSavingsType::create_Monthly_Statement()
{
    if (getBalance() < MIN_BALANCE)
    {
        std::cout << "You do not have enough money to create a monthly statement. You must have " << "$" << MIN_BALANCE << "." << std::endl;
    }
    else
         savingsAccountType::create_Monthly_Statement();
}



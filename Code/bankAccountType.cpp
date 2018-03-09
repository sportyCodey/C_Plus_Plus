//implementation file for bankAcountType

#include <iostream>
#include <string>
#include <iomanip>

#include "bankAccountType.hpp"

bankAccountType::bankAccountType(std::string n_AcctNumber, std::string n_Name, double n_Balance)
{
    acct_Number = n_AcctNumber;
    name = n_Name;
    if (n_Balance < 0)
        balance = 0.0;
    else
        balance = n_Balance;
    checkNumber = 100;
}

std::string bankAccountType:: getAccountNumber() const
{
    return acct_Number;
}

std::string bankAccountType:: getName() const
{
    return name;
}

double bankAccountType::getBalance() const
{
    return balance;
}

void bankAccountType::setBalance(double n_Balance)
{
    if (balance > -1)
        balance = n_Balance;
    else
        balance = 0;
}

void bankAccountType::printChecks() const
{
    
    std::cout << std::left;
   
    std::cout << std::setw(20) << "Account Number" << std::setw(20) << "Name" << std::setw(20) << "Check Number" << std::endl << std::setw(20) << acct_Number <<  std::setw(20) << name << std::setw(20) << checkNumber << std::endl;
}

void bankAccountType::incrementCheck()
{
    checkNumber++;
}


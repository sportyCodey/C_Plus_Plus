//implementation file for checkingAccountType

#include <iostream>
#include <string>

#include "checkingAccountType.hpp"
#include "bankAccountType.hpp"

checkingAccountType::checkingAccountType(std::string n_AcctNumber, std::string n_Name, double n_Balance)
    : bankAccountType(n_AcctNumber, n_Name, n_Balance)
{
    dep = 0;
    withd = 0;
}

void checkingAccountType::depositArray(int amount)
{
    setBalance(getBalance() + amount);
    depA[dep] = amount;
    dep++;
}

void checkingAccountType::withdrawArray(int amount)
{
    setBalance(getBalance() - amount);
    withdA[withd] = amount;
    withd++;
}

int checkingAccountType::getDep() const
{
    return dep;
}

int checkingAccountType::getWithd() const
{
    return withd;
}

void checkingAccountType::printDepsosityArray()
{
    int i;
    for (i = 0; i < dep; i++)
    {
        std::cout << i + 1 << ")\t" << depA[i] << std::endl;
    }
}

void checkingAccountType::printWithdrawArray()
{
    int i;
    for (i = 0; i < withd; i++)
     {
         std::cout << i + 1 << ")\t" << withdA[i] << std::endl;
     }
}

void checkingAccountType::printChecks() const
{
    bankAccountType::printChecks();
}


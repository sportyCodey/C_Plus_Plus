//implementation file for savingsAccountType

#include <iostream>
#include <string>

#include "savingsAccountType.hpp"
#include "bankAccountType.hpp"

savingsAccountType::savingsAccountType(std::string n_AcctNumber, std::string n_Name, double n_Balance)
    : bankAccountType(n_AcctNumber, n_Name, n_Balance)
{
    dep = 0;
    withd = 0;
}

void savingsAccountType::depositArray(int amount)
{
    //error checking is easy. Not done in some of these classes. Feel lazy I guess. 
    setBalance(getBalance() + amount);
    depA[dep] = amount;
    dep++;
}

void savingsAccountType::withdrawArray(int amount)
{
    setBalance(getBalance() - amount);
    withdA[withd] = amount;
    withd++;
}

int savingsAccountType::getDep() const
{
    return dep;
}

int savingsAccountType::getWithd() const
{
    return withd;
}

void savingsAccountType::printDepsosityArray()
{
    int i;
    for (i = 0; i < dep; i++)
    {
        std::cout << i + 1 << ")\t" << depA[i] << std::endl;
    }
}

void savingsAccountType::printWithdrawArray()
{
    int i;
    for (i = 0; i < withd; i++)
    {
        std::cout << i + 1 << ")\t" << withdA[i] << std::endl;
    }
}

void savingsAccountType::printChecks() const
{
    bankAccountType::printChecks();
}

void savingsAccountType::writeCheck()
{
    std::cout << "You are writing a check. " << std::endl << "Here is the check you wrote: " << std::endl;
    printChecks();
    incrementCheck();
}

void savingsAccountType::deposit(double amount)
{
    depositArray(amount + INTEREST);
}

void savingsAccountType::withdraw(double amount)
{
    withdrawArray(amount);
}

void savingsAccountType::create_Monthly_Statement()
{
    std::cout << "Current balance is: " << std::endl << getBalance() << std::endl << std::endl;
    
    std::cout << "The  amount youd deposited in order: " << std::endl << std::endl;
    printDepsosityArray();
    std::cout << "For a total of " << getDep() << " times you have deposited." << std::endl << std::endl;
    
    std::cout << "The  amount youd withdrew in order: " << std::endl << std::endl;
    printWithdrawArray();
    std::cout << "For a total of " << getWithd() << " times you have withdrew." << std::endl << std::endl;
}



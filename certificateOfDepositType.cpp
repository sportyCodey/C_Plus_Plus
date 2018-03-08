#include <iostream>
#include <string>

#include "certificateOfDepositType.hpp"
#include "bankAccountType.hpp"

certificateOfDepositType::certificateOfDepositType(std::string n_AcctNumber, std::string n_Name, double n_Balance)
: bankAccountType(n_AcctNumber, n_Name, n_Balance)
{
    maturityMonth = "July";
}

void certificateOfDepositType::writeCheck()
{
    std::cout << "You are writing a CD for 6 months for " << maturityMonth << "." << std::endl << "Here is the check you wrote: " << std::endl;
    printChecks();
    incrementCheck();
    num_Of_CD++;
}

void certificateOfDepositType::deposit(double amount)
{
    setBalance(amount + INTEREST);
}

void certificateOfDepositType::withdraw(double amount)
{
    setBalance(getBalance() - amount);
}

void certificateOfDepositType::create_Monthly_Statement()
{
    std::cout << "You have wrote " << num_Of_CD << " CD's." << std::endl;
}

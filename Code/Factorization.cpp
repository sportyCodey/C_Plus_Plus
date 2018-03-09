//This program calculates the factorization of a number

#include <iostream>
#include <string>
#include <sstream>

void factorization(long long n, const long long list[], long long length);
void prime_Numbers(long long list[], long long length);
bool isPrime(long long n);
//void findNumLength(long long n, long long& numOfDigits); */Find comment below about this */

int main()
{
    long double number = 0;
   // long long numOfDigits = 0;
    
    long long p_List[1000];
    long long length = 1000;
    
    bool isDouble = false;
    
    prime_Numbers(p_List, length);
    
    /* Since str can only go up to 6, I'm going to change from 270... to a smaller number. Learn exceptions and
     then do whatever you want */
    
    std::cout << "Enter an integer between 2 and 270,000: ";
    std::cin >> number;
    
   // findNumLength(number, numOfDigits); /* Worthless in this program, but will keep becuase it's useful */

    std::stringstream ss; //create a stringstream
    ss << number; //add number to the stream
    std::string str = ss.str();  //create a string with the contents of the stream
    
    int s_l = static_cast<unsigned int> (str.length());

    for (int i = 0; i < s_l; i++)
    {
        if (str[i] == '.')
        {
            isDouble = true;
            break;
        }
        else
            isDouble = false;
    }

    /* This error checking obviously should be replaced with exception handlers. */
    
    while (number < 2 || number > 270000|| isDouble)
    {
        if (number > 270000)
            std::cout << "This number is too big" << std::endl << std::endl;
        
        else if (isDouble)
            std::cout << "You entered a double. Enter an integer" << std::endl << std::endl;
        
        else if (number < 2)
            std::cout << "You must pick a larger number." << std::endl << std::endl;
        
        std::cout << "Enter an integer between 2 and 270,000,000,000,000: ";
        std::cin >> number;
        
        std::cout << std::endl;
        
        std::stringstream ss;
        ss << number;
        std::string str = ss.str();
        
        s_l = static_cast<unsigned int> (str.length());
        
        for (int i = 0; i < s_l; i++)
        {
            if (str[i] == '.')
            {
                isDouble = true;
                break;
            }
            else
                isDouble = false;
        }
    }
    
    factorization(number, p_List, length);
    
    std::cout << std::endl;

    return 0;
}//end main

/*
void findNumLength(long long n, long long& numOfDigits)
{
    numOfDigits = 0;
    long long digit = 0;
    long long temp = 0;
    
    temp = n;

    while (temp != 0)
    {
        digit = temp - (temp / 10) * 10;
        temp = temp / 10;
        numOfDigits++;
    }
}
*/
void prime_Numbers(long long list[], long long length)
{
    long long displayedSoFar = 0;
    long long currentNumber = 2;
    long long j = 0;
    bool isPrime = true;
    
     while(displayedSoFar < length)
     {
         isPrime = true;
         for (int i = 2; i < currentNumber; i++)
         {
             if (currentNumber % i == 0)
             {
                 isPrime = false;
             }
         }
         
         if (isPrime)
         {
             list[j] = currentNumber;
             j++;
             displayedSoFar++;
         }
         currentNumber++;
     }
}

bool isPrime(long long n)
{
    int primeCount = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            primeCount++;
            if (primeCount > 1)
                break;
        }
    }
    if (primeCount == 1)
        return true;
    else
        return false;
}

void factorization(long long n, const long long list[], long long length)
{
    long long result = 0;
    long long index = 0;
    long long noMult = 1;
    
    if (isPrime(n))
    {
        std::cout << n << " is a prime number. Its factorization is: ";
        std::cout << std::endl << n << " = " << n;
    }
    else
    {
        std::cout << n << " is not a prime number. Its factorization is: " << std::endl << n << " = ";
        for (int k = 2; k <= n; k++)
        {
            if (n % k == 0)
            {
                if (isPrime(k))
                {
                    for (int j = 0; j < length; j++)
                    {
                        if (k == list[j])
                            index = j;
                    }
                }
                else
                    continue;
                noMult *= list[index];
                if (noMult == n)
                    std::cout << list[index];
                else
                std::cout << list[index] << " " "* ";
                result = n / static_cast<double> (k);
                while (result % k == 0)
                {
                    noMult *= list[index];
                    if (noMult == n)
                        std::cout << list[index];
                    else
                        std::cout << list[index] << " " "* ";
                    result /= static_cast<double> (k);
                }
            }
        }//end for loop
    }
}//end factorization

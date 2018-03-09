//simple program to determine if input is a vowel or not

#include <iostream>

using namespace std;

bool isVowel(char character);

int main()
{
    char input;
    
    cout << "Enter a character: ";
    
    cin >> input;
    
    if (isVowel(input))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}

bool isVowel(char character)
{
    switch (character)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return true;
        default:
            return false;
    }
}






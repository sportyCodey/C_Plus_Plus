//program to manipulate strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
   
    string input = "";
    string socialX = "xxx-xx-xxxx";
    
    getline(cin, input);
    
    int nameIndex = static_cast<unsigned int> (input.find(" "));
    string name = input.substr(0, nameIndex);
    
    /* These variables aren't used */
    int socialSecurity_Index = static_cast<unsigned int> (input.find_first_of(" ", nameIndex + 1));
    string socialSecurity = input.substr(nameIndex + 1, socialSecurity_Index - nameIndex);
    
    int userID_Index = static_cast<unsigned int> (input.find_first_of(" ", socialSecurity_Index + 1));
    string userID = input.substr(socialSecurity_Index + 1, userID_Index - socialSecurity_Index);
    
    int password_Index = static_cast<unsigned int> (input.find_first_of(" ", userID_Index + 1));
    string password = input.substr(userID_Index + 1, password_Index - userID_Index);
    int passwordLength = static_cast<unsigned int> (password.length());
    
    string passwordX = password.insert(0, passwordLength, 'x');
    passwordX.erase(passwordLength, passwordLength);
    
    
    cout << name << " ";
    cout << socialX << " ";
    cout << userID << " ";
    cout << passwordX << endl;
    
    cout << endl << endl;
    
    return 0;
}

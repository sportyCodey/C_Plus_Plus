//program to calculate discounts

#include <iostream>

using namespace std;

void displayInfo();
void getInfo(bool& senior, bool& twelveM, bool& trainer);
void membershipCost(bool& senior, bool& twelveM, bool& trainer);

int main() {
    
    bool senior;
    bool twelveM;
    bool trainer;
    
    displayInfo();
    getInfo(senior, twelveM, trainer);
    membershipCost(senior, twelveM, trainer);
    
    
    return 0;
}

void displayInfo()
{
    cout << "Senior citizens discount is 30%" << endl;
    cout << "If membership is bought and paid for 12 or more months, the discout is 15% off" << endl;
    cout << "If more than 5 personal training sessions are bought and paid for, the discount on each session is 20%" << endl << endl;
}

void getInfo(bool& senior, bool& twelveM, bool& trainer)
{
    int input = 0;
    int count = 0;
    
    int s_D = 0;
    int twelve_D = 0;
    int trainer_D = 0;
    
    cout << "Which one(s) applies to you? Press the number. Also, press 4 to exit" << endl;
    
    cout << "1) You are a senior citizen" << endl;
    cout << "2) You are paying for 12 months of memberhsip" << endl;
    cout << "3) You are paying for 5 personal training sessions" << endl << endl;
    
    cin >> input;
    
    while (input != 4)
    {
        if (input == 1)
        {
            s_D++;
            if (s_D < 2)
            {
                count++;
                senior = true;
            }
            
            else
                cout << "You have already pressed this one" << endl;
        }
        else if (input == 2)
        {
            twelve_D++;
            if (twelve_D < 2)
            {
                count++;
                twelveM = true;
            }
            else
                cout << "You have already pressed this one" << endl;
        }
        else if (input == 3)
        {
            trainer_D++;
            if (trainer_D < 2)
            {
                count++;
                trainer = true;
            }
            else
                cout << "You have already pressed this one" << endl;
        }
        else if (input > 4)
            cout << "Invalid entry" << endl;
        
        if (count == 3)
            break;
        
        cin >> input;
    }
}

void membershipCost(bool& senior, bool& twelveM, bool& trainer)
{
    int membershipCost = 200;
    
    if (senior == 1)
        membershipCost *= .30;
    if (twelveM == 1)
        membershipCost *= .15;
    if (trainer == 1)
        membershipCost *= .20;
    
    cout << "Your total membership cost is " << membershipCost << endl << endl;
        
}

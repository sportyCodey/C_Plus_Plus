#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   
    string candidate[5];
    int votes[5];
    double percentage[5];
    
    int total = 0;
    int index = 0;
    int i;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << left;
    
    cout << "Enter the names of five candidates and the number of votes recevied by each candidate" << endl << endl;
    
    for (i = 0; i < 5; i++)
    {
        cout << "Candidate " << i + 1 << ": ";
        cin >> candidate[i] >> votes[i];
        total += votes[i];
    }
    
    cout << endl << endl;
    
    /* Finding percentage and max, why not? */
    int max = 0;
    for (i = 0; i < 5; i++)
    {
        percentage[i] = (static_cast<double> (votes[i]) / total) * 100;
        if (votes[i] > max)
        {
            max = votes[i];
            index = i;
        }
    }
     
    cout << setw(20) << "Candidate" << setw(20) << "Votes Received" << setw(20) << "% of Total Votes" << endl;
    
    for (i = 0; i < 5; i++)
    {
        cout << setw(20) << candidate[i] << setw(20) << votes[i] << setw(20) << percentage[i] << endl;
    }
    
    cout << setw(20) << "Total" << setw(20) << total << endl << endl << endl;
    
    cout << "The Winner of the Election is " << candidate[index] << ".";
    
    cout << endl << endl;
    
    return 0;
}

//This program performs the n-queens problem

#include <iostream>

int n = 24;
int col[24];

void queens(int i);
bool promising(int i);

int main() {
  
    queens(0);
  
    return 0;
}

bool promising(int i)
{
    int k;
    bool s;
    
    k = 1;
    s = true;
    while (k < i && s)
    {
        if (col[i] == col[k] || abs(col[i] - col[k]) == i - k)
            s = false;
        k++;
    }
    return s;
}

// expand
void queens(int i)
{
    int j;
    int p;
    
    if (i == n)
    {
        for (p = 1; p <= n; p++)
        {
            std::cout << col[p] << std::endl;
        }
    }
    else
    {
        for (j = 1; j <= n; j++)
        {
            col[i + 1] = j;
            if (promising(i + 1))
            {
                queens(i + 1);
            }
        }
    }
}//end queens


/*
 //Checknode
void queens(int i)
{
    int j;
    int p;
 
    if (promising(i))
    {
        if (i == n)
        {
            for (p = 1; p <= n; p++)
                std::cout << col[p] << std::endl;
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                col[i + 1] = j;
                queens(i + 1);
            }
        }
    }//end if promising
}//end queens
*/


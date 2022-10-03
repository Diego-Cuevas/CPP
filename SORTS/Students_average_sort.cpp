//Diego Cuevas
/*This program sort a list of 10 averages from 
students and shows in screen the averages.*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int averages[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter average for student " << i+1 << ": ";
        cin >> averages[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (averages[j] > averages[j+1])
            {
                averages[j] += averages[j+1];
                averages[j+1] = averages[j] - averages[j+1];
                averages[j] -= averages[j+1];
            }
            
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << averages[i] << ", ";
    }
    
    
    return 0;
}

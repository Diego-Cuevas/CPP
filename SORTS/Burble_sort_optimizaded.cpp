//Diego Cuevas
//Burble sort optimizaded.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int flag = 0, numbers[10] = { 4, 2, 1, 6, 5, 3, 8, 7, 9, 10};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                numbers[j] += numbers[j+1];
                numbers[j+1] = numbers[j] - numbers[j+1];
                numbers[j] = numbers[j] - numbers[j+1];
                flag = 1;
            }     
        }  

        if (flag == 0)
        {
            i = 9;
        }
        else
        {
            flag = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << ", "; 
    }
    
    return 0;
}

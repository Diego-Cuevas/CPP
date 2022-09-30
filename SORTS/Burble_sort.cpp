//Diego Cuevas
//Burble sort.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[10] = { 9, 1, 3, 5, 10, 7, 2, 4, 8, 6};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                numbers[j] += numbers[j+1];
                numbers[j+1] = numbers[j] - numbers[j+1];
                numbers[j] = numbers[j] - numbers[j+1];
            }     
        }        
    }

    for (int i = 0; i < 10; i++)
    {
       cout << numbers[i] << ", "; 
    }
    
    return 0;
}

//Diego Cuevas
//Selection sort.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int min = 0, numbers[10] = { 3, 7, 2, 9, 1, 4, 10, 5, 6, 8};

    for (int i = 0; i < 8; i++)
    {
        min = i;
        for (int j = i+1; j < 10; j++)
        {
            if (numbers[j] < numbers[min])
            {
                min = j;
            }
        }
        
        numbers[i] += numbers[min];
        numbers[min] = numbers[i] - numbers[min];
        numbers[i] = numbers[i] - numbers[min];
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << ", ";
    }
    
    return 0;
}

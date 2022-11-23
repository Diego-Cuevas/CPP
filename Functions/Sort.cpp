//Diego Cuevas
//This program creates a function to sort an array.
#include <iostream>
using namespace std;

//Prototype function
void Sort(int array[]);
void Print_array(int array[]);

int main(int argc, char const *argv[])
{   
    int numbers[5] = { 4, 2, 3, 5, 1};
    
    Sort(numbers);
    Print_array(numbers);

    return 0;
}

//Definition function
void Sort(int array[])
{
    int min = 0;

    for (int i = 0; i < 4; i++)
    {
        min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
            
        }

        swap(array[i], array[min]);
        
    }
    
}

void Print_array(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    
}
//Diego Cuevas
/*This program creates a function to pass an array
by parameters.*/
#include <iostream>
using namespace std;

//Prototype functions
void Cube(int array[], int size);
void Print_array(int array[], int size);

int main(int argc, char const *argv[])
{   
    int size = 5;
    int array[5] = { 2, 5, 6, 4, 3};
    
    Cube(array, size);
    Print_array(array, size);
    
    return 0;
}

//Definition functions
void Cube(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i] * array[i] * array[i];
    }
    
}

void Print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    
}
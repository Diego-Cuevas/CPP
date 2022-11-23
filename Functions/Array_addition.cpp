//Diego Cuevas
/*This program creates a function to add each 
element of an array*/
#include <iostream>
using namespace std;

//Prototype function
int Addition(int array[]);

int main(int argc, char const *argv[])
{   
    int array[5] = { 5, 6, 3, 1, 9};

    cout << "The result is: " << Addition(array) << endl;
    
    return 0;
}

//Definition function
int Addition(int array[])
{
    int result = 0;

    for (int i = 0; i < 5; i++)
    {
        result += array[i];
    }
    
    return result;

}
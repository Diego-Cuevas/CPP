//Diego Cuevas
//This program creates a function to find the factorial.
#include <iostream>
using namespace std;

//Prototype functions
int Factorial(int);

int main(int argc, char const *argv[])
{   
    int number = 0, factorial = 0;

    cout << "Enter a number: ";
    cin >> number;
    
    factorial = Factorial(number);

    cout << factorial << endl;

    return 0;
}

//Definition function
int Factorial(int number)
{
    if (number < 0)
    {
        return 0;
    }
    else if (number > 0)
    {
        return number * Factorial(number - 1);
    }
    else
    {
        return 1;
    }
    
}
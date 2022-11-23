//Diego Cuevas
//This program makes Fibonacci serie.
#include <iostream>
using namespace std;

//Prototype function
int Fibonacci(int);

int main(int argc, char const *argv[])
{   
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << Fibonacci(number) << endl;
    
    return 0;
}

//Definition function
int Fibonacci(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }

    return Fibonacci(a - 1) + Fibonacci(a -2);

}
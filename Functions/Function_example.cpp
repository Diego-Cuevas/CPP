//Diego Cuevas
//This program creates and defines a function.
#include <iostream>
using namespace std;

//Prototype function
int sum(int a, int b);

int main(int argc, char const *argv[])
{   
    int number1 = 10, number2 = 20, result = 0;

    result = sum(number1, number2);
    
    cout << "The result is: " << result << endl;

    return 0;
}

//Definiton function
int sum(int a, int b)
{
    return a + b;
}
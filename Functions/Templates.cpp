//Diego Cuevas
//This program creates and defines a function template.
#include <iostream>
using namespace std;

//Prototype function
template <class type>
type absolute_value(type a);

int main(int argc, char const *argv[])
{   
    int number1 = -323;
    long number2 = -838237237;
    float number3 = -3.1454;
    double number4 = -0.232352;
    
    cout << "The absolute value for " << number1 << " is: " << absolute_value(number1) << endl;
    cout << "The absolute value for " << number2 << " is: " << absolute_value(number2) << endl;
    cout << "The absolute value for " << number3 << " is: " << absolute_value(number3) << endl;
    cout << "The absolute value for " << number4 << " is: " << absolute_value(number4) << endl;

    return 0;
}

//Definiton function
template <class type>
type absolute_value(type a)
{
    return (a < 0)? -a: a;
}
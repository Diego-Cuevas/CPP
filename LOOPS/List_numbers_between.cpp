//Diego Cuevas
/*This program asks the user for two numbers and then prints the numbers
from the first number to the second. Note: the first number entered must be
less than the second number.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int number1 = 0, number2 = 0;

    do
    {
        cout << "Enter first number: ";
        cin >> number1;
        cout << "Enter second number: ";
        cin >> number2;
        if (number1 > number2) //Error
        {
            cout << "The first number must be less than second number." << endl;
        }
        
    } while (number1 > number2);
    
    for (int i = number1; i <= number2; i++)
    {
        cout << i << endl;
    }
    
    return 0;
}

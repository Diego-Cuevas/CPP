//Diego Cuevas
//Program that simulates a basic calculator.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    double number1, number2, result;
    char option = ' ';

    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Select the operation(+, -, * o /): ";
    cin >> option;

    switch (option)
    {
    case '+':
        cout << "Plus option..." << endl;
        result = number1 + number2;
        break;
    case '-':
        cout << "Subtraction option..." << endl;
        result = number1 - number2;
        break;
    case '*':
        cout << "Multiplication option..." << endl;
        result = number1 * number2;
        break;
    case '/':
        cout << "Division option..." << endl;
        result = number1 + number2;
        break;
    default:
        cout << "That isn't a option." << endl;
        break;
    }

    cout << "The result is: " << result << endl;

    return 0;
}

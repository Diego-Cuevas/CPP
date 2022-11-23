//Diego Cuevas
//This program simulates a calculator using functions.
#include <iostream>
#include <cmath>
using namespace std;

//Prototype functions
template <class Addition>
Addition addition(Addition a, Addition b);

template <class Subtraction>
Subtraction subtraction(Subtraction a, Subtraction b);

template <class Multiplication>
Multiplication multiplication(Multiplication a, Multiplication b);

template <class Division>
Division division(Division a, Division b);

template <class Root>
Root root(Root a, Root b);

template <class Power>
Power power(Power a, Power b);

int main(int argc, char const *argv[])
{   
    int opt = 0, a = 0, b = 0;

    do
    {
        cout << "1.- Addition.\n2.- Subtraction.\n3.- Multiplication.\n4.- Division.\n5.- Root.\n6.- Power.\n7.- Exit.\nEnter option: ";
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << "Enter number a: ";
            cin >> a;
            cout << "Enter number b: ";
            cin >> b;

            cout << "The result is: " << addition(a, b) << endl;
            break;
        case 2:
            cout << "Enter number a: ";
            cin >> a;
            cout << "Enter number b: ";
            cin >> b;

            cout << "The result is: " << subtraction(a, b) << endl;
            break;
        case 3:
            cout << "Enter number a: ";
            cin >> a;
            cout << "Enter number b: ";
            cin >> b;

            cout << "The result is: " << multiplication(a, b) << endl;
            break;
        case 4:
            cout << "Enter number a: ";
            cin >> a;
            cout << "Enter number b: ";
            cin >> b;

            cout << "The result is: " << division(a, b) << endl;
            break;
        case 5:
            cout << "Enter number: ";
            cin >> a;
            cout << "Enter root: ";
            cin >> b;

            cout << "The result is: " << root(a, b) << endl;
            break;
        case 6:
            cout << "Enter number: ";
            cin >> a;
            cout << "Enter power: ";
            cin >> b;

            cout << "The result is: " << power(a, b) << endl;
            break;
        case 7:
            cout << "Exit, see you..." << endl;
            break;
        default:
            cout << "Invalid option. Try again..." << endl;
            break;
        }

        system("pause");
        system("cls");

    } while (opt != 7);
    
    
    return 0;
}

//Definition functions
template <class Addition>
Addition addition(Addition a, Addition b)
{
    return (a + b);
}

template <class Subtraction>
Subtraction subtraction(Subtraction a, Subtraction b)
{
    return (a - b);
}
template <class Multiplication>
Multiplication multiplication(Multiplication a, Multiplication b)
{
    return (a * b);
}
template <class Division>
Division division(Division a, Division b)
{
    return (a / b);
}
template <class Root>
Root root(Root a, Root b)
{
    return (pow(a, (1/float(b))));
}
template <class Power>
Power power(Power a, Power b)
{
    return (pow(a, b));
}
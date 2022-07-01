//Diego Cuevas
//This program determine if a number is prime or not using for loop.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int number = 0, count = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
          
    }
    
    if (count != 2)
    {
        cout << "The number " << number << " isn't prime." << endl;
    }
    else
    {
        cout << "The number " << number << " is prime." << endl;
    }
    
    
    return 0;
}

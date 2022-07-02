//Diego Cuevas
/*this program asks the user to enter 10 numbers, then all of
these must be stored in an array to finally show on the screen
the addition, subtraction, multiplication and division of all
the elements.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int numbers[10] = {}, sum = 0, subtraction = 0, multiplication = 0;
    float division = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number for position " << i+1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
        if (i == 0)
        {
            subtraction = numbers[i];
            multiplication = numbers[i];
        }
        else
        {
            subtraction -= numbers[i];
            multiplication *= numbers[i];
        }
        division /= numbers[i];
    }
    
    cout << "The numbers are: ";

    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << ", ";
    }
    
    cout << endl << "The result for the addition is: " << sum << endl;
    cout << "The result for the subtraction is: " << subtraction << endl;
    cout << "The result for the multiplication is: " << multiplication << endl;
    cout << endl << "The result for the division is: " << division << endl;

    return 0;
}

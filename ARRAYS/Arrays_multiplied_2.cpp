//Diego Cuevas
/*This program asks the user to enter 5 numbers, then these
numbers must be copied to another array multiplied by 2 and
display the second array.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int numbers[5] = {}, b[5] = {};

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number for position " << i+1 << ": ";
        cin >> numbers[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        b[i] = numbers[i] * 2;
        cout << b[i] << " ";
    }
    
    return 0;
}

//Diego cuevas
//This program executes a loop until a number outside the range is entered.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int number = 0;

    while (number >= 0 && number <= 100)
    {
        cout << "Enter a number: ";
        cin >> number;
    }

    cout << "The loop is over." << endl;
    
    
    return 0;
}

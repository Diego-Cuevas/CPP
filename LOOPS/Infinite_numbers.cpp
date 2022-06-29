//Diego cuevas
//This program read numbers until a 0 be entered.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int number;

    do
    {
        cout << "Enter a number: ";
        cin >> number;
    } while (number != 0);

    cout << "The loop is over." << endl;
    
    return 0;
}

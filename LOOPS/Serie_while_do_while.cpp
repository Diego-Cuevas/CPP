//Diego Cuevas
/*This program follows the next serie: 2, 4, 6, 8, ..., n. Also shows the
total sum of each number.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int number = 0, i = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "While loop" << endl;

    while (i < number)
    {
        i++;
        if (i % 2 == 0)
        {
            cout << i << ", ";
        }
    }
    
    i = 0;

    cout << endl << "Do while loop" << endl;

    do
    {
        i++;
        if (i % 2 == 0)
        {
            cout << i << ", ";
        }
    } while (i < number);
    
    
    return 0;
}

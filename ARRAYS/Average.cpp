//Diego Cuevas
/*This program request to user enters 10 numbers, then these
must be saved in an array, to finally print their average.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    int a[10] = {};
    float average = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number for position " << i+1 << ": ";
        cin >> a[i];
        average += a[i]; 
    }

    average /= 10;

    cout << "The average is: " << average;
    
    return 0;
}

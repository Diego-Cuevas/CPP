//Diego Cuevas
/*This program asks to the user 5 numbers for an array and other
5 for another array. Show the 10 numbers in a single array.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int a[5] = {}, b[5] = {}, c[10] = {};

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number for a[" << i+1 << "]: ";
        cin >> a[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number for b[" << i+1 << "]: ";
        cin >> b[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (i<5)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i-5];
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << ", " ;
    }
    
    return 0;
}

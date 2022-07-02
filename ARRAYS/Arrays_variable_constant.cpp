//Diego Cuevas
/*This program create an array using a constant variable and save
the elements of this array by doing calculations to save the
multiplication table of 2.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int n = 10;
    int table[n] = {};

    for (int i = 0; i < 10; i++)
    {
        table[i] = (i+1)*2;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << table[i] << endl;
    }
    
    return 0;
}

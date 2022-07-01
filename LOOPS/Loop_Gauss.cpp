//Diego Cuevas
/*This program print and plus the numbers from 1 to 50. The plus
is checked by the formule: n(n+1)/2*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int plus = 0, n = 50;

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        plus += i;
    }
    
    cout << endl << "The total of the plus is: " << plus << endl; //Plus each number
    cout << "Using the formule the result is: " << (n*(n+1)/2) << endl;
    
    return 0;
}

//Diego Cuevas
//This program displays the table of 6 with while and do while loop.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int i = 0;

    cout << "\t\tWhile loop" << endl;
    
    while (i < 10)
    {
        i++;
        cout << "6 x " << i << " = " << 6*i << endl;
    }

    i = 0;

    cout << "\t\tDo while loop" << endl;

    do
    {
       i++;
       cout << "6 x " << i << " = " << 6*i << endl;
    } while (i < 10);
    
    return 0;
}

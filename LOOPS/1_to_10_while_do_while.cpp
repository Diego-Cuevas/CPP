//Diego Cuevas
//This program shows numbers from 1 to 10 with while and do while loop.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int i = 0;

    cout << "While loop" << endl;

    while (i < 10)
    {
        i++;
        cout << i << endl;
    }
    
    i = 0;

    cout << "Do while loop" << endl;

    do
    {
        i++;
        cout << i << endl;
    } while (i < 10);
    
    
    return 0;
}

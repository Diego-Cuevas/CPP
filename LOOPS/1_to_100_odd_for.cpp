//Diego Cuevas
//This program shows a list of odd numbers from 1 to 100.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
        
    }
    
    return 0;
}

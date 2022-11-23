//Diego Cuevas
//This program is a example how to declare a pointer.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int number = 10, *pointer;

    pointer = &number;

    cout << number << endl;
    cout << &number << endl;
    cout << *pointer << endl;
    cout << pointer << endl;
    
    return 0;
}

//Diego Cuevas
//This program changes variables values using pointers.
#include <iostream>
using namespace std;

//Prototype function
void Swap_values(int *, int *);

int main(int argc, char const *argv[])
{   
    int a = 10, b = 5;

    Swap_values(&a, &b);

    cout << "a = " << a << "\nb = " << b << endl;
    
    return 0;
}

//Define function
void Swap_values(int *a, int *b)
{
    swap(*a, *b);
}
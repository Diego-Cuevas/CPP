//Diego Cuevas
/*This program creates a function to switch values
of two variables integer type.*/
#include <iostream>
using namespace std;

//Prototype function
void switch_variables(int& a, int& b);

int main(int argc, char const *argv[])
{   
    int a = 10, b = 5;
    
    switch_variables(a, b);
    
    cout << "a = " << a << "\nb = " << b << endl;
    return 0;
}

//Function definition
void switch_variables(int& a, int& b)
{   
    a += b;
    b = a - b;
    a -= b;
}

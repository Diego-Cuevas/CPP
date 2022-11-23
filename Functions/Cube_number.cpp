//Diego Cuevas
//This program creates a function to cube a number.
#include <iostream>
using namespace std;

//Prototype functions
void Request_data();
void Cube(int);

//Global variables
int number = 0, cube_number = 0;

int main(int argc, char const *argv[])
{   
    Request_data();
    Cube(number);
    
    return 0;
}

//Definition functions
void Request_data()
{
    cout << "Enter a number: ";
    cin >> number;
}

void Cube(int a)
{
    cube_number = number * number * number;
    cout << "The number " << number << " to cube is: " << cube_number << endl;
}
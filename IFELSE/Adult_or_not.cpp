//Diego Cuevas
//This program determine if a person is an adult.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int age;

    cout << "Enter age: ";
    cin >> age;
    
    if (age >= 18)
    {
        cout << "This person is an adult. Beers for everybody!";
    }
    else
    {
        cout << "This person isn't an adult. Hide the beers";
    }
    

    return 0;
}

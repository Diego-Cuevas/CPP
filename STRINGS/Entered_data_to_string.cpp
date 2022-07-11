//Diego Cuevas
//This program request a string to user.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    char name[25];

    cout << "Enter name: ";
    cin.getline(name, 25, '\n');
    cout << name << endl;
    
    return 0;
}

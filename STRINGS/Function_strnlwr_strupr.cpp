//Diego Cuevas
//Function strlwr and strupr.
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {

    int number = 0;
    char name[6] = "Diego";

    cout << "Name: " << strlwr(name) << endl;
    cout << "Name: " << strupr(name) << endl;
    
    return 0;
}

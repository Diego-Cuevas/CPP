//Diego Cuevas
//Function strncpy
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    
    char name1[6] = "Diego";
    char name2[4] = "";

    strncpy(name2, name1, 3);

    cout << "Name 1: " << name1 << endl;
    cout << "Name 2" << name2 << endl;

    return 0;
}

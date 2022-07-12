//Diego Cuevas
//Function strnlen
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {

    int number = 0;
    char name[6] = "Diego";

    number = strnlen(name, 6);

    cout << "The name '" << name << "' has " << number << " letters." << endl;
    
    
    return 0;
}

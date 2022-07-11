//Diego Cuevas
//Function strncat.
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    
    char name[6] = "Diego";
    char surname[7] = "Cuevas";
    char name_surname[13] = "";

    strncat(name_surname, name, 5);
    strncat(name_surname, surname, 6);

    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Name and surname: " << name_surname << endl;


    return 0;
}

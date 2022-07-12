//Diego Cuevas
/*The program does the following: Declare a string at the beginning.
Determine the length of that chain. With the length declare another string.
Pass the data from string 1 to string 2.*/
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {

    char string1[17] = "this is a string";
    
    int lenght = strnlen(string1, 16);

    char string2[lenght] = "";

    strncpy(string2, string1, 17);

    cout << string1 << endl << string2 << endl;
    
    return 0;
}

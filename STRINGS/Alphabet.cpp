//Diego Cuevas
/*This is a program where the user can enter the alphabet in a string (in 
lowercase), then pass the data to another string, and then pass the alphabet
of the second string to uppercase. Print everything on screen. (In the end
we will have two strings, one with the alphabet in lowercase and one in
uppercase).*/
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {

    char alphabet_lower[27] = "";
    char alphabet_upper[27] = "";

    cout << "Enter the alphabet: " << endl;
    
    for (int i = 0; i < 26; i++)
    {
        cout << "Enter letter " << i+1 << ":";
        cin >> alphabet_lower[i];
    }

    strncpy(alphabet_upper, alphabet_lower, 26);

    cout << "Alphabet in lower case: " << strlwr(alphabet_lower) << endl;
    cout << "Alphabet in lower case: " << strupr(alphabet_upper) << endl;

    return 0;
}

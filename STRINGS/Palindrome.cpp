//Diego Cuevas
/*This program determines if a word entered by the user is a palindrome.
Palindrome is a word or expression that is the same if read from left to
right as it is from right to left.*/
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {

    char word[26] = "";
    char word_reverse[25] = "";

    cout << "Enter a word: ";
    cin.getline(word, 25);

    strncpy(word_reverse, word, 25);
    strrev(word_reverse);

    if (strncmp(word, word_reverse, 25) == 0 )
    {
        cout << "The word is a palindrome" << endl;
    }
    else
    {
        cout << "The word isn't a palindrome" << endl;
    }
    
    return 0;
}

//Diego Cuevas
/*This program declares an array and uses a for loop to fill and display the
elements in the array.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int numbers[5] = {};
    char letters[5] = {};

    for (int i = 0; i < 5; i++) //Save the elements for each array
    {
        cout << "Enter a number: ";
        cin >> numbers[i];
        cout << "Enter a letter: ";
        cin >> letters[i];
        cout << endl;
    }
    
    for (int i = 0; i < 5; i++) //Print numbers array
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++) //Print letters array
    {
        cout << letters[i] << " ";
    }
    
    return 0;
}

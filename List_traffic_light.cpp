//Diego Cuevas
/*This program 1)Show a list of the color of a traffic light with a number
associated. 2) Request a number associated with a color. 3) Display the 
meaning of the selected color. Note: Show a error message if the number isn't
associated with a color.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int number;

    cout << "Number\t\tColor\t\tMeaning" << endl;
    cout << "1\t\tRed\t\tStop" << endl;
    cout << "2\t\tYellow\t\tCaution" << endl;
    cout << "3\t\tGreen\t\tGo" << endl;

    cout << "Enter a number: ";
    cin >> number;

    if (number == 1)
    {
        cout << "1\t\tRed\t\tStop" << endl;
    }
    else if (number == 2)
    {
        cout << "2\t\tYellow\t\tCaution" << endl;
    }
    else if (number == 3)
    {
        cout << "3\t\tGreen\t\tGo" << endl;
    }
    else
    {
        cout << "Ups! Error, there isn't a color associated with that number." << endl;
    }
    

    return 0;
}
 
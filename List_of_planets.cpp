//Diego Cuevas
/*This program 1) Show a list of the planets. 2) Request a number associated
with a planet. 3) Show the average distance to the Sun, at which the selected
planet is located. Note: If the number inserted by user isn't associated with
a planet display a error message.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    int number;

    cout << "Number\t\tPlanet\t\tDistance to the Sun(Million kilometers)" << endl;
    cout << "1\t\tMercurio\t59" << endl;
    cout << "2\t\tVenus\t\t108" << endl;
    cout << "3\t\tTierra\t\t150" << endl;
    cout << "4\t\tMarte\t\t228" << endl;
    cout << "5\t\tJupiter\t\t750" << endl;
    cout << "6\t\tSaturno\t\t1431" << endl;
    cout << "7\t\tUrano\t\t2877" << endl;
    cout << "8\t\tNeptuno\t\t4509" << endl;

    cout << "Enter a number: ";
    cin >> number;

    if (number == 1)
    {
        cout << "1\t\tMercurio\t\t59" << endl;
    }
    else if (number == 2)
    {
        cout << "2\t\tVenus\t\t108" << endl;
    }
    else if (number == 3)
    {
        cout << "3\t\tTierra\t\t150" << endl;
    }
    else if (number == 4)
    {
        cout << "4\t\tMarte\t\t228" << endl;
    }
    else if (number == 5)
    {
        cout << "5\t\tJupiter\t\t750" << endl;
    }
    else if (number == 6)
    {
        cout << "6\t\tSaturno\t\t1431" << endl;
    }
    else if (number == 7)
    {
        cout << "7\t\tUrano\t\t2877" << endl;
    }
    else if (number == 8)
    {
        cout << "8\t\tNeptuno\t\t4509" << endl;
    }
    else
    {
        cout << "Ups! Error, there isn't planet associated that number." << endl;
    }
    
    

    return 0;
}

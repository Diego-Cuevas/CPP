//Diego Cuevas
/*This program request the age, sex and country of a person and print if is
an adult, sex and country.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int age, country;
    char sex; 

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter sex(M/F): ";
    cin >> sex;
    cout << "Enter country(1 - Mexico. 2 - USA. 3 - Canada.): ";
    cin >> country;

    if (age >= 18)
    {
        if (sex == 'M' || sex == 'm')
        {
           cout << "Is an adult." << endl;
           cout << "Is a masculine." << endl;
        }
        else
        {
            cout << "Is an adult." << endl;
            cout << "Is a feminine." << endl;
        }
        
    }
    else
    {
       if (sex == 'M' || sex == 'm')
        {
           cout << "Is a child." << endl;
           cout << "Is a masculine." << endl;
        }
        else
        {
            cout << "Is a child." << endl;
            cout << "Is a feminine." << endl;
        }
       
    }
    
    if (country == 1)
    {
       cout << "Is a mexican." << endl;
    }
    else if (country == 2)
    {
        cout << "Is an american." << endl;
    }
    else
    {
        cout << "Is a canadian." << endl;
    }
    
    return 0;
}

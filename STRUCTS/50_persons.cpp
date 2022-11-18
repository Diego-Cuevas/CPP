//Diego Cuevas
/*This program saves a 50 persons data (name, 
address, phone, age). Must be request data one
by one. Also has a menu allows: a) Show a list
of all names. b) Show people of certain age.
c) Show persons whose initial is the user indicate.
d) Exit program. */
#include <iostream>
#include <cstring>
using namespace std;

struct Persons
{
    int age, phone;
    char name[20], last_name[20], address[50];
} persons[50];

int main(int argc, char const *argv[])
{   
    int opt = 0;

    for (int i = 0; i < 50; i++)
    {
        fflush(stdin);
        cout << "Person " << i+1 << "\nEnter name: ";
        cin >> persons[i].name;
        cout << "Enter last name: ";
        cin >> persons[i].last_name;
        cout << "Enter address: ";
        cin >> persons[i].address;
        cout << "Enter age: ";
        cin >> persons[i].age;
        cout << "Enter phone: ";
        cin >> persons[i].phone;

    }
    
    system("cls");

    do
    {
        cout << "\t\tPeople data\n\n1.- Show all names.\n2.- Show people certain age.\n3.- Show people certain initial name.\n4.- Exit.\nEnter option: ";
        cin >> opt;

        switch (opt)
        {
        case 1:
            for (int i = 0; i < 50; i++)
            {
                cout << i+1 << ".- " << persons[i].name << " " << persons[i].last_name << endl;
            }
            
            break;
        case 2:
            int search;
            cout << "Enter age: ";
            cin >> search;

            for (int i = 0; i < 50; i++)
            {
                if (persons[i].age == search)
                {
                    cout << i+1 << ".- " << persons[i].name << " " << persons[i].last_name << " " << persons[i].age << endl;
                }
                
            }

            break;
        case 3:
        {
            char name[20], search[1];
            cout << "Enter initial name: ";
            cin >> search;

            for (int i = 0; i < 50; i++)
            {
                strcpy(name, persons[i].name);
                if (name[0] == search[0])
                {
                    cout << i+1 << ".- " << persons[i].name << " " << persons[i].last_name << persons[i].age << endl;
                }
                
            }
        }
            break;
        case 4:
            cout << "Exit program, bye bye..." << endl;
            break;
        default:
            cout << "Sorry, invalid option, try again..." << endl;
            break;
        }

        system("pause");
        system("cls");

    } while (opt != 4);
    
    
    return 0;
}

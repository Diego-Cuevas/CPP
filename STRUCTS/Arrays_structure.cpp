//Diego Cuevas
//This program creates a array of structures.
#include <iostream>
using namespace std;

struct Person
{
    int id, age, phone;
    char name[20], last_name[20];
};

struct Birth
{
    int day, month, year;
};

struct Register
{
    Person person;
    Birth birth;
};

int main(int argc, char const *argv[])
{   
    Register new_register[2];

    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        cout << "Register " << i+1 << endl;
        cout << "Enter name: ";
        cin.getline(new_register[i].person.name, 20);
        cout << "Enter last_name: ";
        cin.getline(new_register[i].person.last_name, 20);
        cout << "Enter ID: ";
        cin >> new_register[i].person.id;
        cout << "Enter age: ";
        cin >> new_register[i].person.age;
        cout << "Enter phone number: ";
        cin >> new_register[i].person.phone;
        cout << "Enter birth date: ";
        cin >> new_register[i].birth.day >> new_register[i].birth.month >> new_register[i].birth.year;
    }
    
    for (int i = 0; i < 2; i++)
    {
        cout << "Person data " << i+1 << endl;
        cout << "Id: " << new_register[i].person.id
             << "\nName: " << new_register[i].person.name
             << "\nLast name: " << new_register[i].person.last_name
             << "\nAge: " << new_register[i].person.age
             << "\nPhone number: " << new_register[i].person.phone
             << "\nBirth: " << new_register[i].birth.day << "/" << new_register[i].birth.month << "/" << new_register[i].birth.year << endl;
    }
    
    return 0;
}

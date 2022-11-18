//Diego Cuevas
//This program creates a nested structure.
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
    Register new_register;

    cout << "Enter name: ";
    cin.getline(new_register.person.name, 20);
    cout << "Enter last_name: ";
    cin.getline(new_register.person.last_name, 20);
    cout << "Enter ID: ";
    cin >> new_register.person.id;
    cout << "Enter age: ";
    cin >> new_register.person.age;
    cout << "Enter phone number: ";
    cin >> new_register.person.phone;
    cout << "Enter birth date: ";
    cin >> new_register.birth.day >> new_register.birth.month >> new_register.birth.year;

    cout << "Person data: " << endl;
    cout << "Id: " << new_register.person.id
         << "\nName: " << new_register.person.name
         << "\nLast name: " << new_register.person.last_name
         << "\nAge: " << new_register.person.age
         << "\nPhone number: " << new_register.person.phone
         << "\nBirth: " << new_register.birth.day << "/" << new_register.birth.month << "/" << new_register.birth.year << endl;
    
    return 0;
}

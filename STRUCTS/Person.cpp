//Diego Cuevas
/*This program creates a structure for a person
data (name, last name and age) and show it in a 
same line.*/
#include <iostream>
using namespace std;

struct Person
{
    int age;
    char name[20], last_name[20];
} person;

int main(int argc, char const *argv[])
{   
    cout << "Enter name: ";
    cin >> person.name;
    cout << "Enter last name: ";
    cin >> person.last_name;
    cout << "Enter age: ";
    cin >> person.age;

    cout << "\n" << person.name << " " << person.last_name << " " << person.age << endl;
    
    return 0;
}

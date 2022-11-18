//Diego Cuevas
//This program creates a named structure.
#include <iostream>
using namespace std;

struct Employees
{
    int age, id;
    char name[20], last_name[20];
};

int main(int argc, char const *argv[])
{   
    Employees employee1; //You can omit 'struct'

    cout << "Enter employee ID: ";
    cin >> employee1.id;
    cout << "Enter employee age: ";
    cin >> employee1.age;
    cout << "Enter employee name: ";
    cin >> employee1.name;
    cout << "Enter employee last name: ";
    cin >> employee1.last_name;

    cout << "Employee data" << endl;
    cout << "ID: " << employee1.id << "\nName: " << employee1.name << "\nLast name: " << employee1.last_name << "\nAge: " << employee1.age << endl;
    
    return 0;
}

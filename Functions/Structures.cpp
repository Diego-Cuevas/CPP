//Diego Cuevas
//This program creates a function to pass a structure.
#include <iostream>
using namespace std;

struct Student
{
    int subjects;
    char name[20];
} student1;

//Prototype functions
void Request_data();
void Print_data(Student);

int main(int argc, char const *argv[])
{   
    Request_data();
    Print_data(student1);
    
    return 0;
}

//Definition functions
void Request_data()
{
    cout << "Enter student name: ";
    cin >> student1.name;
    cout << "Enter subjects number: ";
    cin >> student1.subjects;
}

void Print_data(Student student1)
{
    cout << "Name: " << student1.name << endl;
    cout << "Subjects: " << student1.subjects << endl;
}
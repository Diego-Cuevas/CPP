//Diego Cuevas
/*This program stores 5 students' names, first and last names, and then
concatenates first and last names into a third string. Print the student
data on the screen:
Student number.
Student name.
Student last name.
Student's first and last name.*/
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {

    char names[5][16], surnames[5][16], names_surnames[5][32] = {""};

    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i+1 << endl;
        cout << "Enter name: ";
        cin.getline(names[i], 15);
        cout << "Enter surname: ";
        cin.getline(surnames[i], 15);
        strcat(names_surnames[i], names[i]);
        strcat(names_surnames[i], surnames[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i+1 << "\nName: " << names[i] << "\nSurname: " << surnames[i] << "\nName and Surname: " << names_surnames[i] << endl;
        
    }
    
     
    
    return 0;
}

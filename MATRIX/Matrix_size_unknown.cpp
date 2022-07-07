//Diego Cuevas
//This program use a matrix when we don't know the initial size.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int students = 0, grades = 0;

    cout << "Enter amount of students: ";
    cin >> students;
    cout << "Enter amount of grades: ";
    cin >> grades;

    float students_grades[students][grades] = {};

    cout << "A " << students << " X " << grades << " matrix has been created." << endl;
    
    return 0;
}

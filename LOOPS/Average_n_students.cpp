//Diego Cuevas
/*This program calculate the general average of a classroom, we don't know the
number of students, the program provide a option to add more students.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    char next = 'Y';
    float grade = 0, average = 0;
    int count = 0;

    while (next == 'Y' || next == 'y')
    {
        cout << "Enter grade of student " << count+1 << ": ";
        cin >> grade;
        average += grade; //Plus each grade
        cout << "Do you wish add another grade?(Y/N): ";
        cin >> next;
        count++; //Increase count in one
    }

    average /= count;

    cout << "The general average is " << average << endl;

    return 0;
}

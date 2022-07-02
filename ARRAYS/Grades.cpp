//Diego Cuevas
/*This program save the grades of N students in an array, add up
all notes and print the average and the student with the highest
grade.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    int students = 0, plus = 0, max = 0, highest_student = 0;
    float average = 0;

    cout << "Enter the number of students: ";
    cin >> students;

    float grades[students] = {};

    for (int i = 0; i < students; i++)
    {
        cout << "Enter grade of sudent " << i+1 << ": ";
        cin >> grades[i];
        plus += grades[i];

        if (grades[i] > max)
        {
            max = grades[i];
            highest_student = i+1;
        }
        
    }
    
    cout << "The average of the grades students is: " << (plus/students) << endl;
    cout << "The student with the highest grade is student " << highest_student << " with a grade of: " << max << endl;

    return 0;
}

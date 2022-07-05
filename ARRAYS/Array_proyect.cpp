//Diego Cuevas
/*Program to save the notes of N students, N has to be greater than or equal
to 20 or less than or equal to 30, this must be verified in the program, and
in case the number of students is outside the range, it must be show the option
to re-enter the number of students. Once we have the grades stored in an array,
we have to add all the grades, show the class average, show the student with
the highest grade, show students with the average grade (range from average –1
to average +1) and the student with the lowest grade. Students who have a grade
less than or equal to 6 were assigned a job, this job adds one more point to
their grade. The arrangement with the original notes must be used to generate
another arrangement with the modified notes of these students. Print the two
notes in different columns. At the end, the option to recalculate more student
grades, or end the program, should be shown.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    char exit = 'N';

    do
    {
        int students = 0, highest_student = 0, lowest_student = 0;
        float sum = 0, average = 0, max = 0, min = 10000;
        
        do // Request the number of students
        {
            cout << "Enter the number of students (Must be 20 or greater and 30 or less): ";
            cin >> students;
            /*if (students < 20 || students > 30)
            {
                cout << "Must be 20 or greater and 30 or less." << endl;
            }*/
            
        } while (/*students < 20 */ students > 30);

        float grades[students] = {}; //Create the array for grades

        for (int i = 0; i < students; i++) //Fill the array with each grade
        {
            cout << "Enter the grade for student " << i+1 << ": ";
            cin >> grades[i];
            sum += grades[i]; //Addition of grades
            if (grades[i] > max) //Search the student with highest grade
            {
                max = grades[i];
                highest_student = i;
            }
            if (grades[i] < min) //Search the student with lowest grade
            {
                min = grades[i];
                lowest_student = i;
            }
            
        }
        
        average = sum/students; //Calculates the average
        
        cout << "The total sum of grades is: " << sum << endl;
        cout << "The class average is: " << average << endl;
        cout << "The student with highest grade is student " << highest_student+1 << " with a grade of " << grades[highest_student] << endl;
        cout << "The student with lowest grade is student " << lowest_student+1 << " with a grade of " << grades[lowest_student] << endl;
        cout << "Students with average grades: " << endl << "Student\t\tGrade" << endl;
        for (int i = 0, j = 0; i < students; i++) //Show the array with each -1 to +1 average student
        {
            if ((grades[i] >= average-1) && (grades[i] <= average+1))
            {
                cout << i+1 << "\t\t" << grades[i] << endl;
            }
            
        }
        
        float new_grades[students] = {}; //Create an array for the modified grades

        cout << "The students with a grade less than or equal to 6 add a one more point to their grades.\nOld and new grades shown below:\nStudent\t\tOld grade\t\tNew grade" << endl;

        for (int i = 0; i < students; i++) //Modificate and save new grades
        {
            if (grades[i] <= 6)
            {
                new_grades[i] = grades[i] + 1; //Add one point
            }
            else
            {
                new_grades[i] = grades[i];
            }
            
        }
        
        for (int i = 0; i < students; i++) //Show all grades
        {
            cout << i+1 << "\t\t" << grades[i] << "\t\t" << new_grades[i] << endl;
        }
        
        
        cout << "Exit?(Y/N): ";
        cin >> exit;
        
    } while (exit == 'N' || exit == 'n');
    

    return 0;
}

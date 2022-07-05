//Diego Cuevas
/*This program save in a matrix the grades of 5 students. Each student have 6
subjects. Calculate the average.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    float students[5][7] = {};

    for (int i = 0; i < 5; i++) // Save grades
    {
        cout << "\tStudent " << i+1 << endl;
        for (int j = 0; j < 6; j++)
        {
            cout << "Enter the grade " << j+1 << ": ";
            cin >> students[i][j];
        }
        
    }
    
    for (int i = 0; i < 5; i++) //Calculate average
    {
        for (int j = 0; j < 6; j++)
        {
            students[i][6] += students[i][j];
        }
        students[i][6] /= 6;
        
    }

    cout  << "\t\tGrades" << endl;
    for (int i = 0; i < 5; i++) // Show grades
    {
        cout << "Student " << i+1 << " | ";
        for (int j = 0; j < 6; j++)
        {
            cout << students[i][j] << " | ";
        }
        cout << "Average: " << students[i][6] << endl;
    }

    return 0;
}

//Diego Cuevas
/*This program sort a list of 10 grades from 
students and shows in screen the averages and
names.*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int averages[10][10] = {{ 0, 0}, { 1, 0}, { 2, 0}, { 3, 0}, { 4, 0}, { 5, 0}, { 6, 0}, { 7, 0}, { 8, 0}, { 9, 0}};
    char names[10][15];
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter name for student " << i+1 << ": ";
        cin.getline(names[i], 14, '\n');
        cout << "Enter grade for student " << i+1 << ": ";
        cin >> averages[i][1];
        cin.ignore();
    }

    for (int i = 0; i < 9; i++)
    {
        if (averages[i][1] > averages[i+1][1])
        {   //switch grades
            averages[i][1] += averages[i+1][1];
            averages[i+1][1] = averages[i][1] - averages[i+1][1];
            averages[i][1] -= averages[i+1][1];
            //switch student id
            averages[i][0] += averages[i+1][0];
            averages[i+1][0] = averages[i][0] - averages[i+1][0];
            averages[i][0] -= averages[i+1][0];
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Student " << i+1 << ": " << names[(averages[i][0])] << " with grade " << averages[i][1] << ", " << endl;
    }
    
    
    return 0;
}

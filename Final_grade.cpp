//Diego Cuevas
/*This program solve the next problem: The final grade of a student is the
average of three notes: Practice grade is 30% of the total, Theoretical 
grade is 60% of the total and Participation grade is 10% of the total. Write
a code that calculate the final grade of the student*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int Practice_grade = 9, Theorical_grade = 8, Participation_grade = 9;
    float Final_grade = 0;

    Final_grade = (Practice_grade * .3) + (Theorical_grade * .6) + (Participation_grade * .1);

    cout << "The final grade is: " << Final_grade << endl;    
    return 0;
}

//Diego Cuevas
/*We already have an array with grades of students but we have
to add 10% grade to all students by a extra homework, the new
grade must be save in a new array*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    float grade[5] = {10, 8, 9, 6, 8}, new_grade[5] = {};

    for (int i = 0; i < 5; i++)
    {
        new_grade[i] = grade[i] + (grade[i] * .1);
        cout << new_grade[i] << endl;
    }
    
    return 0;
}

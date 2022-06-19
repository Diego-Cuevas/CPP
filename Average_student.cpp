//Diego Cuevas
//This program calculate the final grade of a student
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    int grade1 = 8, grade2 = 9, grade3 = 7, average = 0;

    average = (grade1 + grade2 + grade3) / 3;

    cout << "The final grade is: " << average << endl;

    return 0;
}


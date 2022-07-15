//Diego Cuevas
/*The program asks the user to enter the data of 20 students, name, surname,
subject name 1, subject grade 1, subject name 2, subject grade 2, subject
name 3, subject grade 3, subject name 4, grade subject 4, subject name 5,
subject grade 5. And then calculate the general average of each student, and
the final average of the group of 20 students.

Show on screen.

Student's first and last name.
General student average.
Top rated subject.
Subject with lower qualification.
And at the end the general average of the group.

Once it is displayed on the screen, give the user the option if all the data
is correct, and if not, the erroneous data can be modified and later show the
data on the screen again with the correct data.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    float grades[20][11] = {0, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0}, average = 0;
    char name[20][21] = {""}, surname[20][21] = {""}, subject[5][20][21] = {""}, option = 'Y';

    do
    {
        for (int i = 0; i < 1; i++) //Capture data
        {
            cout << "Student " << i+1 << endl;
            cout << "Enter name: ";
            cin.getline(name[i], 20);
            cout << "Enter surname: ";
            cin.getline(surname[i], 20);

            for (int j = 0; j < 5; j++) //Capture subjects and grades
            {
                cout << "Subject " << j+1 << "\nEnter name: ";
                cin.getline(subject[j][i], 20);
                cout << "Enter grade for " << subject[j][i] << ": ";
                cin >> grades[i][j];
                cin.ignore();
            }
            
        }

        int opt = 1;
        
        do
        {
            for (int i = 0; i < 1; i++) //Calculate Top, Low and average
            {
                grades[i][9] = 0, grades[i][5] = 1000, grades[i][7] = 0; //Reset values
                for (int j = 0; j < 5; j++)
                {
                    if (grades[i][j] < grades[i][5]) //Lower grade
                    {
                        grades[i][5] = grades[i][j];
                        grades[i][6] = j;
                    }
                
                    if (grades[i][j] > grades[i][7]) //Top grade
                    {
                        grades[i][7] = grades[i][j];
                        grades[i][8] = j;
                    }

                    grades[i][9] += grades[i][j];
                }
                grades[i][9] /= 5; //Single average
                average += grades[i][9];
            }

            average /= 1; //General average

            for (int i = 0; i < 1; i++) //Show data
            {
                cout << "\n\tStudent " << i+1 << endl;
                cout << "Name: " << name[i] << " " << surname[i] << endl;
                cout << "\tSubjects\nNo.\tName\t\tGrade" << endl;
                for (int j = 0; j < 5; j++)
                {
                    cout << j+1 << "\t" << subject[j][i] << "\t\t" << grades[i][j] << endl;
                }
                int m = grades[i][8];
                cout << "Average: " << grades[i][9] << endl;
                cout << "Top rated subject '" << subject[m][i] << "' with grade '" << grades[i][7] << endl;
                m = grades[i][6];
                cout << "Lower rated subject '" << subject[m][i] << "' with grade '" << grades[i][5] << endl;

            }

            cout << "General average: " << average << endl;
            cout << "\nAre all the data correct(Y/N): ";
            cin >> option;
            cin.ignore();

            if (option == 'N' || option == 'n') //If data isn't correct
            {
                cout << "Enter 1 for change all data or 2 for a specific data: ";
                cin >> opt; average = 0; //Reset general average for get a new one
                cin.ignore();
            
                if (opt == 2) //To correct specific data
                {
                    cout << "1.- Name\n2.- Surname\n3.- Subject\n4.- Grade\nWhat do yo wanna change?: ";
                    cin >> opt;
                    int o = 0, sub = 0; //Positions of array to modify

                    switch (opt)
                    {
                    case 1:
                        cout << "Enter number of student to change name: ";
                        cin >> o;
                        cin.ignore();
                        cout << "Currently name: " << name[o-1] << "\nEnter new name: ";
                        cin.getline(name[o-1], 20);
                        break;
                    case 2:
                        cout << "Enter number of student to change surname: ";
                        cin >> o;
                        cin.ignore();
                        cout << "Currently surname: " << surname[o-1] << "\nEnter new surname: ";
                        cin.getline(surname[o-1], 20);
                        break;
                    case 3:
                        cout << "Enter number of student to change subject: ";
                        cin >> o;
                        cout << "Enter number of subject to change: ";
                        cin >> sub;
                        cin.ignore();
                        cout << "Currently subject name: " << subject[sub-1][o-1] << "\nEnter new subject name: ";
                        cin.getline(subject[sub-1][o-1], 20);
                        break;
                    case 4:
                        cout << "Enter number of student to change grade subject: ";
                        cin >> o;
                        cout << "Enter number of subject to change grade: ";
                        cin >> sub;
                        cout << "Currently '"<< subject[sub-1][o-1] << "' grade: " << grades[o-1][sub-1] << "\nEnter new grade: ";
                        cin >> grades[o-1][sub-1];
                        break;
                    default:
                        break;
                    }
                    opt = 2; //Repeat loop for print new information
                }
            }
        } while (opt != 1);
    } while (option == 'N' || option == 'n');
    
    return 0;
}

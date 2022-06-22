//Diego Cuevas
/*This is a program that reads three integer values representing the
four-digit month, day, and year. The program display the date in one of the
following formats, depending on the user's selection. If the user enters 1,
the month will be displayed as a word (“January”), the day as an integer
(11) and the year (1999). Entering 2 will display the month as a three 
letter abbreviation (“Jan”), the day as an integer (11), and the year (1999).
If entering 3, the month will be displayed as an integer (01), the day as an
integer (11), and the year (1999).*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int day, month, year, option;

    cout << "Enter a date(month, day, year): ";
    cin >> month >> day >> year;
    cout << "1 - Full month, day and year (January/11/1999)." << endl;
    cout << "2 - Abbreviated month, day and year (Jan/11/1999)." << endl;
    cout << "1 - Month in number, day and year (01/11/1999)." << endl;
    cout << "How do you like to show the date?: ";
    cin >> option;

    switch (option)
    {
    case 1:// Full month
        switch (month)
        {
        case 1:
            cout << "Date: January/" << day << "/" << year << endl;
            break;
        case 2:
            cout << "Date: February/" << day << "/" << year << endl;
            break;
        case 3:
            cout << "Date: March/" << day << "/" << year << endl;
            break;
        case 4:
            cout << "Date: April/" << day << "/" << year << endl;
            break;
        case 5:
            cout << "Date: May/" << day << "/" << year << endl;
            break;
        case 6:
            cout << "Date: June/" << day << "/" << year << endl;
            break;
        case 7:
            cout << "Date: Jule/" << day << "/" << year << endl;
            break;
        case 8:
            cout << "Date: August/" << day << "/" << year << endl;
            break;
        case 9:
            cout << "Date: September/" << day << "/" << year << endl;
            break;
        case 10:
            cout << "Date: October/" << day << "/" << year << endl;
            break;
        case 11:
            cout << "Date: November/" << day << "/" << year << endl;
            break;
        case 12:
            cout << "Date: December/" << day << "/" << year << endl;
            break;
        default:
            cout << "Error, that month doesn't exist." << endl;
            break;
        }
        break;
    case 2: //Abbreviated month
        switch (month)
        {
        case 1:
            cout << "Date: Jan/" << day << "/" << year << endl;
            break;
        case 2:
            cout << "Date: Feb/" << day << "/" << year << endl;
            break;
        case 3:
            cout << "Date: Mar/" << day << "/" << year << endl;
            break;
        case 4:
            cout << "Date: Apr/" << day << "/" << year << endl;
            break;
        case 5:
            cout << "Date: May/" << day << "/" << year << endl;
            break;
        case 6:
            cout << "Date: Jun/" << day << "/" << year << endl;
            break;
        case 7:
            cout << "Date: Jul/" << day << "/" << year << endl;
            break;
        case 8:
            cout << "Date: Aug/" << day << "/" << year << endl;
            break;
        case 9:
            cout << "Date: Sep/" << day << "/" << year << endl;
            break;
        case 10:
            cout << "Date: Oct/" << day << "/" << year << endl;
            break;
        case 11:
            cout << "Date: Nov/" << day << "/" << year << endl;
            break;
        case 12:
            cout << "Date: Dec/" << day << "/" << year << endl;
            break;
        default:
            cout << "Error, that month doesn't exist." << endl;
            break;
        }
        break;
    case 3: //Month in number
        switch (month)
        {
        case 1:
            cout << "Date: 0" << month << "/" << day << "/" << year << endl;
            break;
        case 2:
            cout << "Date: 0" << month << "/" << day << "/" << year << endl;
            break;
        case 3:
            cout << "Date: 0" << month << "/" << day << "/" << year << endl;
            break;
        case 4:
            cout << "Date: 0" << month << "/" << day << "/" << year << endl;
            break;
        case 5:
            cout << "Date: 0" << month << "/" << day << "/" << year << endl;
            break;
        case 6:
            cout << "Date: 0" << month << "/" << day << "/" << year << endl;
            break;
        case 7:
            cout << "Date: 0" << month << "/" << day << "/" << year << endl;
            break;
        case 8:
            cout << "Date: 0" << month << "/" << day << "/" << year << endl;
            break;
        case 9:
            cout << "Date: 0" << month << "/" << day << "/" << year << endl;
            break;
        case 10:
            cout << "Date: " << month << "/" << day << "/" << year << endl;
            break;
        case 11:
            cout << "Date: " << month << "/" << day << "/" << year << endl;
            break;
        case 12:
            cout << "Date: " << month << "/" << day << "/" << year << endl;
            break;
        default:
            cout << "Error, that month doesn't exist." << endl;
            break;
        }
        break;
    default:
        break;
    }
    
    return 0;
}

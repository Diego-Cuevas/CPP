//Diego Cuevas
/*This program makes a binary search for find a
month relating a number.*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int lower = 0, top = 11, center = 0, search = 0;
    int month_numbers[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    char flag = 'F';
    char months[12][10] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    
    cout << "Enter a number from 1 to 12: ";
    cin >> search;

    while (lower <= top)
    {
        center = (lower + top) / 2;
        if (month_numbers[center] == search)
        {
            flag = 'T';
            break;
        }
        else if (month_numbers[center] < search)
        {
            lower = center + 1;
        }
        else if (month_numbers[center] > search)
        {
            top = center - 1;
        }
        
    }
    
    if (flag == 'T')
    {
        cout << "The corresponding month to number " << search << " is " << months[center] << "." << endl;
    }
    else
    {
        cout << "Theres not a corresponding month to number " << search << "." << endl;
    }
    

    return 0;
}

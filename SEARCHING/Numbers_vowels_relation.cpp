//Diego Cuevas
/*This program makes a binary search for find a
vowel relating a number.*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int lower = 0, top = 4, center = 0, search = 0;
    int vowels_number[5] = { 1, 2, 3, 4, 5};
    char flag = 'F';
    char vowels[5] = { 'A', 'E', 'I', 'O', 'U'};
    
    cout << "Enter a number from 1 to 5: ";
    cin >> search;

    while (lower <= top)
    {
        center = (lower + top) / 2;
        if (vowels_number[center] == search)
        {
            flag = 'T';
            break;
        }
        else if (vowels_number[center] < search)
        {
            lower = center + 1;
        }
        else
        {
            top = center - 1;
        }
        
    }
    
    if (flag == 'T')
    {
        cout << "The number " << search << " is the vowel " << vowels[center] << endl;
    }
    else
    {
        cout << "The number " << search << " hasn't a relation with a vowel" << endl;
    }

    return 0;
}

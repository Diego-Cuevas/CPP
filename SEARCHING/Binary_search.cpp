//Diego Cuevas
//This program makes a binary search.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int lower = 0, top = 9, center = 0, search = 6;
    int numbers[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    char flag = 'F';

    while (lower <= top)
    {
        center = (lower + top) / 2;
        if (numbers[center] == search)
        {
            flag = 'T';
            break;
        }
        else if (numbers[center] < search)
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
        cout << "The number " << search << " has founded in position " << center << endl;
    }
    else
    {
        cout << "The number " << search << " hasn't founded." << endl;
    }

    return 0;
}

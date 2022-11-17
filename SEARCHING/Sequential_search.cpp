//Diego Cuevas
//This program makes a simple sequential search.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int i = 0, search = 6;
    int number[5] = { 2, 6, 9, 8 , 7};
    char flag = 'F';

    while ((flag == 'F') && (i < 5))
    {
        if (number[i] == search)
        {
            flag = 'T';
        }
        i++;
        
    }
    
    if (flag == 'T')
    {
        cout << "The number " << search << " has founded in position " << i << endl;
    }
    else
    {
        cout << "The number " << search << " hasn't founded." << endl;
    }
    
    
    
    return 0;
}
